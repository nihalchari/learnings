cmake_minimum_required(VERSION 3.0.0)
project(CALCULATOR VERSION 1.0.0)


add_subdirectory(math_dir)
add_subdirectory(print_dir)


add_executable(calculator 
main.cpp)

target_link_libraries(calculator my_math_lib my_print_lib)



#two types of variables
#   persistent cache variable
#   Environment variables

#   cache variables
#All the variables written inside CMakeCache file are cache variables
#some of this variables are automatically set by cmake tools
#some are set when we execute command inside CMakeLists file
#manually set Chace variable using set command, to do so mention CACHE keyword in set command

set(A "000")
set(A "123" CACHE STRING "This command sets variable A in persistent cache")

# A     : variable
# 123   : value
# CHACE : specifies that A is gloal variable and need to store in CMakeCache.txt
# STRING: variable type, f;oowed by sumaray of variable  

#TO deference this variable we need to use CACHE keyword

message(${A})
message($CACHE{A})

#when we dereference normal variable(without CACHE keyword), firtst it is looked in normal scope and if not found locally then
# cache entry or global scope is searched



#Modifying cache var

set(name "Nihal" CACHE STRING "The name var")
#set(name "Chari" CACHE STRING "The name var")      #this command does not modify CACHE var
message($CACHE{name})

#after commentting out name var, still message command prints name value coz, when we run cmake command in any project for 1st 
#time(uncommenting those two line in this case) CMakeCache.txt is created with all cache entries

#3 options to modify cache variables
#Edit CMakeCache.txt
#use FORCE keyword in set command       #not recommended to use FORCE keyword
#use -D flag                            #recomended

#FORCE has higher priority then -D


set(name "Chari" CACHE STRING "The name var modified" FORCE)      #this command modify CACHE var
message($CACHE{name})


#Most frequently used cache variables
CMAKE_VERSION
CMAKE_PROJECT_NAME  #: points to top level project name
PROJECT_NAME        #: value dependson most recent "project" command call
CMAKE_GENERATOR     #: tells cmake about work system, currently we are using make build system

#eg cmake -DCMAKE_GENERATOR=Ninja ..
#sudo apt install ninja-build : if not installed



#environment variables
#aslo has gloabal scope but are not stored in CMakeCache.txt file
#to set environment variable use ENV keyword
#set(ENV envvar "521")
#message($ENV{envvar})





