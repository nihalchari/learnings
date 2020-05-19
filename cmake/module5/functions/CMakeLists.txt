cmake_minimum_required(VERSION 3.0.0)

set(name Nihal)
set(age 27)


function(print_details VAR_NAME)
    message("1. My ${VAR_NAME} is ${${VAR_NAME}}")
endfunction()

#if same functioned is defined twice, call to function with function name will invoke the function that is defined later, if u need 
#to invoke function that is defined first prepend function name with underscore _ while calling 

function(print_details VAR_NAME)
    message("2. My ${VAR_NAME} is ${${VAR_NAME}}")
endfunction()

_print_details(name)
print_details(age)


#optional arguments
message("\n\n............optional argument..................")

function(myfun myname)
    message("\nHello My name is ${myname}")

    message("ARGC = ${ARGC}")
    message("ARGV = ${ARGV}")
    message("ARGN = ${ARGN}")

    if(DEFINED ARGV1)
        message("AGE = ${ARGV1}")
    endif()

    if(DEFINED ARGV2)
        message("Weight = ${ARGV2} Kg")
    endif()

    if(DEFINED ARGV3)
        message("Height = ${ARGV3} cm")
    endif()

    if(DEFINED ARGV4)
        message("BMI = ${ARGV4}")
    endif()


endfunction()

myfun(Nihal 27 75 169 )
myfun(Nihal1 28 60)
myfun(Nihal 26)
myfun(Nihal 29 85 180 1.3)


#scope

#value of variable modified in function does not reflect ouside. ie changes are local to function
#function does not  return value in cmake

message("\n\n...............checking scope...................")


set(GLOBALVAR "globe")
set(GLOBALVAR1 "universe")

function(myfun1 arg1)

    message("\nInside myfun1 before modifying argv1: ${${arg1}}")
    set(${arg1} Milkyway)
    message("Inside myfun1 After modifying argv1: ${${arg1}}")   
 
    message("Inside myfun1 before modifying GLOBALVAR ${GLOBALVAR}")
    set(GLOBALVAR "EARTH")
    message("Inside myfun1 before modifying GLOBALVAR ${GLOBALVAR}")
endfunction()

message("\nbefore calling myfun1 GLOBALVAR: ${GLOBALVAR}")
message("before calling myfun1 GLOBALVAR1: ${GLOBALVAR1}")
myfun1(GLOBALVAR1)
message("\nAfter caliing myfun1 GLOBALVAR: ${GLOBALVAR}")
message("After caliing myfun1 GLOBALVAR1: ${GLOBALVAR1}")




#to change the variable in parent scope from function scope use keyword PARENT_SCOPE in set command inside function

set(VARNAME "Nihal")

function(myfun2)
    message("insdie myfun2 VARNAME: ${VARNAME}")
    set(VARNAME "Chari" PARENT_SCOPE)
    message("insdie myfun2 after changing name VARNAME: ${VARNAME}")
endfunction()

message("\n\nbefore calling myfun2 VARENAME: ${VARNAME}")
myfun2()
message("After calling myfun2 VARENAME: ${VARNAME}")

# PARENT_SCOPE will only modifies value in parent scope & not in current function scope or parent's parent scope



set(name "Nihal")

message("\n\nIn root directory name: ${name}")
add_subdirectory(sub_dir)
message("In root directory name: ${name}")