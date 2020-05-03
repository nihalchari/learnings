#include "../include/testclass.hpp"
#include<memory>


#if 0
int main()
{
    std::unique_ptr<int> p1 (new int(100));

    cout << *p1 << endl;            ///100
    *p1 = 200;
    cout << *p1 << endl;            ///200

    cout << p1.get() << endl;       /// returns pointer to the managed object

    if(p1)
    {
        cout << "p1.reset()" << endl;
        p1.reset();                     ///sets pointer to NULL, and memory it points will be releases
    }

    if(!p1)
    {
        cout << "p1 is set to null"<<endl;
    }

    unique_ptr<int> p2 = make_unique<int>(100);         ///c++14
    auto p3 = make_unique<float>(10.4);

    return 0;
}

#endif






/*********************************END***************************************************/

#if 1
int test::s_count;

int main()
{
    unique_ptr<test> ptr1 (new test);
    unique_ptr<test> ptr2 (new test);

    ptr1->hello();
    ptr2->hello();

    ///uncommenting below line will give error 
    ///cannot be assigned or copied
    //ptr2 = ptr1
    
    ///can be moved
    ptr2=move(ptr1);
    /// after assigning ownership will be transefered from ptr1 to ptr2, and ptr1 will be set to null

    if(!ptr1)
    {
        cout << "ptr1 is a null pointer" << endl;
    }

    ptr2->hello();

    /// below statement is no longer valid as ownership of heap allocated object is transfered
    //ptr1->hello();

    return 0;
}
#endif