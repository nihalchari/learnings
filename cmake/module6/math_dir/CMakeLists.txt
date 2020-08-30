project(MATH_PROJECT VERSION 1.0)
add_library(my_math_lib 
src/add.cpp
src/div.cpp)


target_include_directories(my_math_lib PUBLIC include)
