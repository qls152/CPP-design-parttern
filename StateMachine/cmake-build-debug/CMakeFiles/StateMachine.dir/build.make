# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/qinliansong/Downloads/日常练习/StateMachine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/qinliansong/Downloads/日常练习/StateMachine/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StateMachine.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StateMachine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StateMachine.dir/flags.make

CMakeFiles/StateMachine.dir/GUmballMachine.cpp.o: CMakeFiles/StateMachine.dir/flags.make
CMakeFiles/StateMachine.dir/GUmballMachine.cpp.o: ../GUmballMachine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qinliansong/Downloads/日常练习/StateMachine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StateMachine.dir/GUmballMachine.cpp.o"
	/usr/local/Cellar/gcc/9.2.0/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/StateMachine.dir/GUmballMachine.cpp.o -c /Users/qinliansong/Downloads/日常练习/StateMachine/GUmballMachine.cpp

CMakeFiles/StateMachine.dir/GUmballMachine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StateMachine.dir/GUmballMachine.cpp.i"
	/usr/local/Cellar/gcc/9.2.0/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qinliansong/Downloads/日常练习/StateMachine/GUmballMachine.cpp > CMakeFiles/StateMachine.dir/GUmballMachine.cpp.i

CMakeFiles/StateMachine.dir/GUmballMachine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StateMachine.dir/GUmballMachine.cpp.s"
	/usr/local/Cellar/gcc/9.2.0/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qinliansong/Downloads/日常练习/StateMachine/GUmballMachine.cpp -o CMakeFiles/StateMachine.dir/GUmballMachine.cpp.s

CMakeFiles/StateMachine.dir/main.cpp.o: CMakeFiles/StateMachine.dir/flags.make
CMakeFiles/StateMachine.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qinliansong/Downloads/日常练习/StateMachine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/StateMachine.dir/main.cpp.o"
	/usr/local/Cellar/gcc/9.2.0/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/StateMachine.dir/main.cpp.o -c /Users/qinliansong/Downloads/日常练习/StateMachine/main.cpp

CMakeFiles/StateMachine.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StateMachine.dir/main.cpp.i"
	/usr/local/Cellar/gcc/9.2.0/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qinliansong/Downloads/日常练习/StateMachine/main.cpp > CMakeFiles/StateMachine.dir/main.cpp.i

CMakeFiles/StateMachine.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StateMachine.dir/main.cpp.s"
	/usr/local/Cellar/gcc/9.2.0/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qinliansong/Downloads/日常练习/StateMachine/main.cpp -o CMakeFiles/StateMachine.dir/main.cpp.s

# Object files for target StateMachine
StateMachine_OBJECTS = \
"CMakeFiles/StateMachine.dir/GUmballMachine.cpp.o" \
"CMakeFiles/StateMachine.dir/main.cpp.o"

# External object files for target StateMachine
StateMachine_EXTERNAL_OBJECTS =

StateMachine: CMakeFiles/StateMachine.dir/GUmballMachine.cpp.o
StateMachine: CMakeFiles/StateMachine.dir/main.cpp.o
StateMachine: CMakeFiles/StateMachine.dir/build.make
StateMachine: CMakeFiles/StateMachine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/qinliansong/Downloads/日常练习/StateMachine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable StateMachine"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StateMachine.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StateMachine.dir/build: StateMachine

.PHONY : CMakeFiles/StateMachine.dir/build

CMakeFiles/StateMachine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StateMachine.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StateMachine.dir/clean

CMakeFiles/StateMachine.dir/depend:
	cd /Users/qinliansong/Downloads/日常练习/StateMachine/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/qinliansong/Downloads/日常练习/StateMachine /Users/qinliansong/Downloads/日常练习/StateMachine /Users/qinliansong/Downloads/日常练习/StateMachine/cmake-build-debug /Users/qinliansong/Downloads/日常练习/StateMachine/cmake-build-debug /Users/qinliansong/Downloads/日常练习/StateMachine/cmake-build-debug/CMakeFiles/StateMachine.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StateMachine.dir/depend
