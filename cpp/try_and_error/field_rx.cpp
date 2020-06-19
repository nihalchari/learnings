//=============================================================================
//  C O P Y R I G H T
//-----------------------------------------------------------------------------
//  Copyright (c) 2018 by Robert Bosch GmbH. All rights reserved.
//
//  The reproduction, distribution and utilization of this file as
//  well as the communication of its contents to others without express
//  authorization is prohibited. Offenders will be held liable for the
//  payment of damages. All rights reserved in the event of the grant
//  of a patent, utility model or design.
//=============================================================================
//  P R O J E C T   I N F O R M A T I O N
//-----------------------------------------------------------------------------
//       Projectname: AOS Carma
//  Target system(s):
//       Compiler(s): C++11 compliant
//=============================================================================
//  N O T E S
//-----------------------------------------------------------------------------
//  Notes:
//=============================================================================
//  I N I T I A L   A U T H O R   I D E N T I T Y
//-----------------------------------------------------------------------------
//        Name: Michael Poehnl
//  Department: CC-AD/ESW1
//=============================================================================
/// @swcomponent
/// @file field_rx.cpp
/// @brief ara::com field receiver.
//=============================================================================
#include <stdio.h>
#include <thread>

#include "vfc/core/vfc_types.hpp"

#include "taiji/integration/services/com/bosch/carma/example/field/ExampleServiceFieldProxy.hpp"

#include "ara/com/types.h"

#include "ac3log/simplelogger.hpp"
#include "iceoryx_utils/fixed_string/string100.hpp"

#include "field_rx.hpp"

#include<iostream>
#include<stdio.h>

enum ReceiverState
{
    ServiceDiscovery,
    FieldSubscription,
    FieldUnSubscription,
    FieldUpdate
};


// Event Update function for ExampleTopicField (polling style)
void static UpdateExampleTopicField(com::bosch::carma::example::ExampleServiceFieldProxy* f_proxy)
{
    INFO_PRINTF("Updating ExampleTopicField\n");
     f_proxy->m_ExampleTopicField.GetNewSamples(
                        [](ara::com::SamplePtr<const com::bosch::carma::example::ExampleTopic_myfielddata> f_sample) {
                            std::string l_output_string("param_value: ");

                            for (vfc::uint32_t j = 0; j < 10; j++)
                            {
                                l_output_string.append(std::to_string(f_sample->m_value[j]) + " ");
                            }
                            l_output_string.append("\n");
                            INFO_PRINTF(l_output_string.c_str());
                            INFO_PRINTF("param_m_status: %d\n", f_sample->m_status);
                        });

}

void static UpdateExampleTopicField_polling(com::bosch::carma::example::ExampleServiceFieldProxy* f_proxy)
{
    INFO_PRINTF("Updating ExampleTopicField_polling\n");
     f_proxy->m_ExampleTopicField_polling.GetNewSamples(
                        [](ara::com::SamplePtr<const com::bosch::carma::example::ExampleTopic_myfielddata> f_sample) {
                            std::string l_output_string("param_value: ");

                            for (vfc::uint32_t j = 0; j < 10; j++)
                            {
                                l_output_string.append(std::to_string(f_sample->m_value[j]) + " ");
                            }
                            l_output_string.append("\n");
                            INFO_PRINTF(l_output_string.c_str());
                            INFO_PRINTF("param_m_status: %d\n", f_sample->m_status);
                        });

}

void FieldRx(bool f_toggle, const int* f_killswitch)
{
    com::bosch::carma::example::ExampleServiceFieldProxy* l_proxy = nullptr;
    ReceiverState state = ServiceDiscovery;
    static uint32_t count = 0;
    while (0 == *f_killswitch)
    {
         switch(state)
         {
         case ServiceDiscovery:
         { 
            auto l_handleList = com::bosch::carma::example::ExampleServiceFieldProxy::FindService();
            if (0 != l_handleList.size())
            {
                for (const auto& l_handle : l_handleList)
                {
                    iox::cxx::CString100 l_instance(l_handle.GetInstanceId().ToString().data(),
                                                    l_handle.GetInstanceId().ToString().size());
                    INFO_PRINTF("Example Tpoic Field: Found Instance %s\n", l_instance.to_cstring());
                    if (l_instance == "EvenNicerInstance")
                    {
                        if (l_proxy == nullptr)
                        {
                            l_proxy = new com::bosch::carma::example::ExampleServiceFieldProxy(l_handle);
                            state = FieldSubscription;
                        }
                    }
                }
            }
            else
            {
                INFO_PRINTF("Example Tpoic Field: No Instance available\n");
            }
         }
         break;

        
        case FieldSubscription:
        {
                l_proxy->m_ExampleTopicField.Subscribe(1);
                l_proxy->m_ExampleTopicField_polling.Subscribe(1);
                if (ara::com::SubscriptionState::kSubscribed == l_proxy->m_ExampleTopicField.GetSubscriptionState() &&
                    ara::com::SubscriptionState::kSubscribed == l_proxy->m_ExampleTopicField_polling.GetSubscriptionState())
                { 
                    INFO_PRINTF("Example Tpoic Field: subscribed\n");
                     // call back style field notification
                    auto ExampleTpoicFieldRxHandler = std::bind(&UpdateExampleTopicField,l_proxy);
                    l_proxy->m_ExampleTopicField.SetReceiveHandler(ExampleTpoicFieldRxHandler);
                    state = FieldUpdate;
                }
                else
                {
                    INFO_PRINTF("Example Topic Field: not subscribed\n");
                }
        }
        break;


        case FieldUpdate:
        {
            UpdateExampleTopicField_polling(l_proxy);
            if (f_toggle && (0 == count % 15))
            {
                INFO_PRINTF("Example Topic Field: toggling subscription state : unsubscribe\n");
                state = FieldUnSubscription;
            }
        }
        break;

        case FieldUnSubscription:
        {
            l_proxy->m_ExampleTopicField.Unsubscribe();
            l_proxy->m_ExampleTopicField.UnsetReceiveHandler();
            l_proxy->m_ExampleTopicField_polling.Unsubscribe();

            if(ara::com::SubscriptionState::kNotSubscribed == l_proxy->m_ExampleTopicField.GetSubscriptionState())
            {
                if(f_toggle && (0 == count % 15))
                {
                    INFO_PRINTF("Example Topic Field: toggling subscription state : subscribe\n");
                    state = FieldSubscription;
                }

            }

        }
        break;

        default:
        break;
        }

        // sleep
        if(nullptr != l_proxy)
        {
            count++;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        
    }    
    LOG_DEBUG("field rx thread stopping...");
}