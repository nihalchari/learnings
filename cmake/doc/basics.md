Build system are software for automating source code compilation and linking process.
types of build sysytem: Make, Ninja, Ant Gradle

cd build
cmake ..


on sucess this will generate files and folders
out of which
"Makefile" and  "CMakeCache.txt" are very important
Makefile is used by make tool to build the project
CMakeCache.txt is used by cmake in subsequents runs of CMake command




add_executable(executable_name source_file1/file2…)
Creates executable at the end of build process
This commands takes 2 args
Arg1: name of final executable
Arg2: source files requires to build args




No sense of hierarchy here
Cannot make out which source file is depended on what
May be difficult while managing big project
So make project modular(make and use libraries ) with some sense of hierarchy




add_library(library_name source_files1/file2…)

target_link_libraries(executable_name library_name1/name2…)



Libraries and executable are jointly called targets in cmake
Every target in cmake has some properties and dependencies associated with it

Some target properties are
INTERFACE_LINK_DIRECTORIES
INCLUDE_DIRECTORIES
VERSION
SOURCES


This properties are automatically set when we run commands like target_link_libraries() or target_include_directories()

Properties can be modified using 
set_target_properties()
set_property()
get_property()
get_tartget_property()


Target is capable of propagating its properties in dependency chain


This are scope specifier
PUBLIC INTERFACE PRIVATE

tartget_link_libraries(mytarget PUBLIC 1st_dependency_of_mytarget 2nd_dependency_of_mytarget )
 
Using PUBLIC or INTERFACE  means, property called INTERFACE_LINK_LIBRARIES is set and this property is  available to all target that depends upon mytarget
PRIVATE :  do not want to set and propagate property



Visit cmake documentation to know about more on properties of target



