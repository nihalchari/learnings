# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build

# Include any dependencies generated for this target.
include math_dir/CMakeFiles/my_math_lib.dir/depend.make

# Include the progress variables for this target.
include math_dir/CMakeFiles/my_math_lib.dir/progress.make

# Include the compile flags for this target's objects.
include math_dir/CMakeFiles/my_math_lib.dir/flags.make

math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.o: math_dir/CMakeFiles/my_math_lib.dir/flags.make
math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.o: ../math_dir/src/add.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.o"
	cd /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build/math_dir && /usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_math_lib.dir/src/add.cpp.o -c /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/math_dir/src/add.cpp

math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_math_lib.dir/src/add.cpp.i"
	cd /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build/math_dir && /usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/math_dir/src/add.cpp > CMakeFiles/my_math_lib.dir/src/add.cpp.i

math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_math_lib.dir/src/add.cpp.s"
	cd /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build/math_dir && /usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/math_dir/src/add.cpp -o CMakeFiles/my_math_lib.dir/src/add.cpp.s

math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.o.requires:

.PHONY : math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.o.requires

math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.o.provides: math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.o.requires
	$(MAKE) -f math_dir/CMakeFiles/my_math_lib.dir/build.make math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.o.provides.build
.PHONY : math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.o.provides

math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.o.provides.build: math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.o


math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.o: math_dir/CMakeFiles/my_math_lib.dir/flags.make
math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.o: ../math_dir/src/div.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.o"
	cd /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build/math_dir && /usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_math_lib.dir/src/div.cpp.o -c /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/math_dir/src/div.cpp

math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_math_lib.dir/src/div.cpp.i"
	cd /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build/math_dir && /usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/math_dir/src/div.cpp > CMakeFiles/my_math_lib.dir/src/div.cpp.i

math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_math_lib.dir/src/div.cpp.s"
	cd /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build/math_dir && /usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/math_dir/src/div.cpp -o CMakeFiles/my_math_lib.dir/src/div.cpp.s

math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.o.requires:

.PHONY : math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.o.requires

math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.o.provides: math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.o.requires
	$(MAKE) -f math_dir/CMakeFiles/my_math_lib.dir/build.make math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.o.provides.build
.PHONY : math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.o.provides

math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.o.provides.build: math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.o


# Object files for target my_math_lib
my_math_lib_OBJECTS = \
"CMakeFiles/my_math_lib.dir/src/add.cpp.o" \
"CMakeFiles/my_math_lib.dir/src/div.cpp.o"

# External object files for target my_math_lib
my_math_lib_EXTERNAL_OBJECTS =

math_dir/libmy_math_lib.a: math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.o
math_dir/libmy_math_lib.a: math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.o
math_dir/libmy_math_lib.a: math_dir/CMakeFiles/my_math_lib.dir/build.make
math_dir/libmy_math_lib.a: math_dir/CMakeFiles/my_math_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libmy_math_lib.a"
	cd /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build/math_dir && $(CMAKE_COMMAND) -P CMakeFiles/my_math_lib.dir/cmake_clean_target.cmake
	cd /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build/math_dir && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_math_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
math_dir/CMakeFiles/my_math_lib.dir/build: math_dir/libmy_math_lib.a

.PHONY : math_dir/CMakeFiles/my_math_lib.dir/build

math_dir/CMakeFiles/my_math_lib.dir/requires: math_dir/CMakeFiles/my_math_lib.dir/src/add.cpp.o.requires
math_dir/CMakeFiles/my_math_lib.dir/requires: math_dir/CMakeFiles/my_math_lib.dir/src/div.cpp.o.requires

.PHONY : math_dir/CMakeFiles/my_math_lib.dir/requires

math_dir/CMakeFiles/my_math_lib.dir/clean:
	cd /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build/math_dir && $(CMAKE_COMMAND) -P CMakeFiles/my_math_lib.dir/cmake_clean.cmake
.PHONY : math_dir/CMakeFiles/my_math_lib.dir/clean

math_dir/CMakeFiles/my_math_lib.dir/depend:
	cd /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7 /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/math_dir /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build/math_dir /home/ehc1kor/ehc1kor/repo/learnings/cmake/module7/build/math_dir/CMakeFiles/my_math_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : math_dir/CMakeFiles/my_math_lib.dir/depend
