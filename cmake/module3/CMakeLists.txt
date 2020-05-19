cmake_minimum_required(VERSION 3.0.0)
project(CALCULATOR VERSION 1.0.0)


add_subdirectory(math_dir)
add_subdirectory(print_dir)


add_executable(calculator 
main.cpp)

target_link_libraries(calculator my_math_lib my_print_lib)
