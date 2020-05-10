cmake_minimum_required(VERSION 3.0.0)

set(VAR OFF)
set(VAR1 VAR)

message(${VAR1})

if(${VAR1})
    message("if block")
else()
    message("else block")
endif()

#it goes in else block that means if do deferencing for us, hence VAR1 is deferenced type in this eg


set(NAME nihal)

if(DEFINED NAME)
    message("NAME is defined")
else()
    message("NAME not defined")
endif()


if(DEFINED AGE)
    message("AGE is defined")
else()
    message("AGE not defined")
    endif()


if(COMMAND target_link_libraries)
    message("target_link_libraries is a command")
else()
    message("target_link_libraries is not a command")
endif()


if(COMMAND target_link_library)
    message("target_link_library is a command")
else()
    message("target_link_library is not a command")
endif()


if(EXISTS /home/ehc1kor/ehc1kor/repo/learnings/cmake/module5/if_else/CMakeLists.txt)
    message("given file exists")
else()
    message("given file doesnot exist")
endif()
