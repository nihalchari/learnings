cmake_minimum_required(VERSION 3.0.0)
project(CALCULATOR VERSION 1.0.0)


#add_executable(calculator
#main.cpp
#add.cpp
#div.cpp
#print.cpp )

#order of source file doesent matter, first arg should be name of executable
#No sense of hierarchy here
#Cannot make out which source file is depended on what
#May be difficult while managing big project
#So make project modular(make and use libraries ) with some sense of hierarchy


add_library(math 
add.cpp
div.cpp)

add_library(print
print.cpp)

add_executable(calculator 
main.cpp)

target_link_libraries(calculator math print)