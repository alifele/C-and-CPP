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
CMAKE_SOURCE_DIR = /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Oscillator.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Oscillator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Oscillator.dir/flags.make

CMakeFiles/Oscillator.dir/main.cpp.o: CMakeFiles/Oscillator.dir/flags.make
CMakeFiles/Oscillator.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Oscillator.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Oscillator.dir/main.cpp.o -c /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/main.cpp

CMakeFiles/Oscillator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oscillator.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/main.cpp > CMakeFiles/Oscillator.dir/main.cpp.i

CMakeFiles/Oscillator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oscillator.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/main.cpp -o CMakeFiles/Oscillator.dir/main.cpp.s

CMakeFiles/Oscillator.dir/libs/Sketch.cpp.o: CMakeFiles/Oscillator.dir/flags.make
CMakeFiles/Oscillator.dir/libs/Sketch.cpp.o: ../libs/Sketch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Oscillator.dir/libs/Sketch.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Oscillator.dir/libs/Sketch.cpp.o -c /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/libs/Sketch.cpp

CMakeFiles/Oscillator.dir/libs/Sketch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oscillator.dir/libs/Sketch.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/libs/Sketch.cpp > CMakeFiles/Oscillator.dir/libs/Sketch.cpp.i

CMakeFiles/Oscillator.dir/libs/Sketch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oscillator.dir/libs/Sketch.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/libs/Sketch.cpp -o CMakeFiles/Oscillator.dir/libs/Sketch.cpp.s

CMakeFiles/Oscillator.dir/libs/Ball.cpp.o: CMakeFiles/Oscillator.dir/flags.make
CMakeFiles/Oscillator.dir/libs/Ball.cpp.o: ../libs/Ball.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Oscillator.dir/libs/Ball.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Oscillator.dir/libs/Ball.cpp.o -c /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/libs/Ball.cpp

CMakeFiles/Oscillator.dir/libs/Ball.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oscillator.dir/libs/Ball.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/libs/Ball.cpp > CMakeFiles/Oscillator.dir/libs/Ball.cpp.i

CMakeFiles/Oscillator.dir/libs/Ball.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oscillator.dir/libs/Ball.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/libs/Ball.cpp -o CMakeFiles/Oscillator.dir/libs/Ball.cpp.s

CMakeFiles/Oscillator.dir/libs/Physics.cpp.o: CMakeFiles/Oscillator.dir/flags.make
CMakeFiles/Oscillator.dir/libs/Physics.cpp.o: ../libs/Physics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Oscillator.dir/libs/Physics.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Oscillator.dir/libs/Physics.cpp.o -c /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/libs/Physics.cpp

CMakeFiles/Oscillator.dir/libs/Physics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Oscillator.dir/libs/Physics.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/libs/Physics.cpp > CMakeFiles/Oscillator.dir/libs/Physics.cpp.i

CMakeFiles/Oscillator.dir/libs/Physics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Oscillator.dir/libs/Physics.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/libs/Physics.cpp -o CMakeFiles/Oscillator.dir/libs/Physics.cpp.s

# Object files for target Oscillator
Oscillator_OBJECTS = \
"CMakeFiles/Oscillator.dir/main.cpp.o" \
"CMakeFiles/Oscillator.dir/libs/Sketch.cpp.o" \
"CMakeFiles/Oscillator.dir/libs/Ball.cpp.o" \
"CMakeFiles/Oscillator.dir/libs/Physics.cpp.o"

# External object files for target Oscillator
Oscillator_EXTERNAL_OBJECTS =

Oscillator: CMakeFiles/Oscillator.dir/main.cpp.o
Oscillator: CMakeFiles/Oscillator.dir/libs/Sketch.cpp.o
Oscillator: CMakeFiles/Oscillator.dir/libs/Ball.cpp.o
Oscillator: CMakeFiles/Oscillator.dir/libs/Physics.cpp.o
Oscillator: CMakeFiles/Oscillator.dir/build.make
Oscillator: /usr/lib/x86_64-linux-gnu/libsfml-audio.so.2.5.1
Oscillator: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so.2.5.1
Oscillator: /usr/lib/x86_64-linux-gnu/libsfml-network.so.2.5.1
Oscillator: /usr/lib/x86_64-linux-gnu/libsfml-window.so.2.5.1
Oscillator: /usr/lib/x86_64-linux-gnu/libsfml-system.so.2.5.1
Oscillator: CMakeFiles/Oscillator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Oscillator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Oscillator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Oscillator.dir/build: Oscillator
.PHONY : CMakeFiles/Oscillator.dir/build

CMakeFiles/Oscillator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Oscillator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Oscillator.dir/clean

CMakeFiles/Oscillator.dir/depend:
	cd /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/cmake-build-debug /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/cmake-build-debug /home/BCCRC.CA/aparanj/Projects/ClionTests/Oscillator/cmake-build-debug/CMakeFiles/Oscillator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Oscillator.dir/depend

