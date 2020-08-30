cmake_minimum_required(VERSION 3.0.0)
project(CALCULATOR VERSION 1.0.0)


add_subdirectory(math_dir)
add_subdirectory(print_dir)


add_executable(calculator 
main.cpp)

target_link_libraries(calculator my_math_lib my_print_lib)

#install
#installation is basically copying files from one folder to another
#for this purpose we use install() command in cmake
#install() takes 2 args, items to copy and destination to paste
#default location for pasting this files is /usr/local, can be varified by priniting

message(${CMAKE_INSTALL_PREFIX})

#it is recommended  that header files shoul be copied in /usr/local/include/<package-name>
# and targets in /usr/local/lib/<package-name>

#to let other project use calculator package, we will install my_math_lib, check CMakeLists of math_dir
#need to copy add.hpp div.hpp and my_math_lib in /usr/local/



