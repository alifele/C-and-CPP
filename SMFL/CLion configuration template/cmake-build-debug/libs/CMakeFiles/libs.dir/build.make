# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/BCCRC.CA/aparanj/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/BCCRC.CA/aparanj/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug

# Include any dependencies generated for this target.
include libs/CMakeFiles/libs.dir/depend.make
# Include the progress variables for this target.
include libs/CMakeFiles/libs.dir/progress.make

# Include the compile flags for this target's objects.
include libs/CMakeFiles/libs.dir/flags.make

libs/CMakeFiles/libs.dir/LinkedList.cpp.o: libs/CMakeFiles/libs.dir/flags.make
libs/CMakeFiles/libs.dir/LinkedList.cpp.o: ../libs/LinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libs/CMakeFiles/libs.dir/LinkedList.cpp.o"
	cd /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug/libs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libs.dir/LinkedList.cpp.o -c /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/libs/LinkedList.cpp

libs/CMakeFiles/libs.dir/LinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libs.dir/LinkedList.cpp.i"
	cd /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug/libs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/libs/LinkedList.cpp > CMakeFiles/libs.dir/LinkedList.cpp.i

libs/CMakeFiles/libs.dir/LinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libs.dir/LinkedList.cpp.s"
	cd /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug/libs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/libs/LinkedList.cpp -o CMakeFiles/libs.dir/LinkedList.cpp.s

libs/CMakeFiles/libs.dir/Nodes.cpp.o: libs/CMakeFiles/libs.dir/flags.make
libs/CMakeFiles/libs.dir/Nodes.cpp.o: ../libs/Nodes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object libs/CMakeFiles/libs.dir/Nodes.cpp.o"
	cd /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug/libs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libs.dir/Nodes.cpp.o -c /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/libs/Nodes.cpp

libs/CMakeFiles/libs.dir/Nodes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libs.dir/Nodes.cpp.i"
	cd /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug/libs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/libs/Nodes.cpp > CMakeFiles/libs.dir/Nodes.cpp.i

libs/CMakeFiles/libs.dir/Nodes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libs.dir/Nodes.cpp.s"
	cd /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug/libs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/libs/Nodes.cpp -o CMakeFiles/libs.dir/Nodes.cpp.s

# Object files for target libs
libs_OBJECTS = \
"CMakeFiles/libs.dir/LinkedList.cpp.o" \
"CMakeFiles/libs.dir/Nodes.cpp.o"

# External object files for target libs
libs_EXTERNAL_OBJECTS =

libs/liblibs.a: libs/CMakeFiles/libs.dir/LinkedList.cpp.o
libs/liblibs.a: libs/CMakeFiles/libs.dir/Nodes.cpp.o
libs/liblibs.a: libs/CMakeFiles/libs.dir/build.make
libs/liblibs.a: libs/CMakeFiles/libs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library liblibs.a"
	cd /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug/libs && $(CMAKE_COMMAND) -P CMakeFiles/libs.dir/cmake_clean_target.cmake
	cd /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug/libs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/CMakeFiles/libs.dir/build: libs/liblibs.a
.PHONY : libs/CMakeFiles/libs.dir/build

libs/CMakeFiles/libs.dir/clean:
	cd /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug/libs && $(CMAKE_COMMAND) -P CMakeFiles/libs.dir/cmake_clean.cmake
.PHONY : libs/CMakeFiles/libs.dir/clean

libs/CMakeFiles/libs.dir/depend:
	cd /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/libs /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug/libs /home/BCCRC.CA/aparanj/Projects/ClionTests/newTest/cmake-build-debug/libs/CMakeFiles/libs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/CMakeFiles/libs.dir/depend

