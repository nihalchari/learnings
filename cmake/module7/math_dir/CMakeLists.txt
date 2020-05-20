add_library(my_math_lib 
src/add.cpp
src/div.cpp)


target_include_directories(my_math_lib PUBLIC include)


#copying files to /usr/local so that other project can use this library

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/my_math/add.hpp ${CMAKE_CURRENT_SOURCE_DIR}/include/my_math/div.hpp DESTINATION 
${CMAKE_INSTALL_PREFIX}/include/my_math)

install(TARGETS my_math_lib DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/my_math)

#to use my_math_lib in any other project use find_package() command

