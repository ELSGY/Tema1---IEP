# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/cojocariu/Downloads/Tema1/01/Tema1---IEP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cojocariu/Downloads/Tema1/01/Tema1---IEP/build

# Include any dependencies generated for this target.
include CMakeFiles/tema1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tema1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tema1.dir/flags.make

CMakeFiles/tema1.dir/TeamSport.cpp.o: CMakeFiles/tema1.dir/flags.make
CMakeFiles/tema1.dir/TeamSport.cpp.o: ../TeamSport.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cojocariu/Downloads/Tema1/01/Tema1---IEP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tema1.dir/TeamSport.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tema1.dir/TeamSport.cpp.o -c /home/cojocariu/Downloads/Tema1/01/Tema1---IEP/TeamSport.cpp

CMakeFiles/tema1.dir/TeamSport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tema1.dir/TeamSport.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cojocariu/Downloads/Tema1/01/Tema1---IEP/TeamSport.cpp > CMakeFiles/tema1.dir/TeamSport.cpp.i

CMakeFiles/tema1.dir/TeamSport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tema1.dir/TeamSport.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cojocariu/Downloads/Tema1/01/Tema1---IEP/TeamSport.cpp -o CMakeFiles/tema1.dir/TeamSport.cpp.s

CMakeFiles/tema1.dir/Basketball.cpp.o: CMakeFiles/tema1.dir/flags.make
CMakeFiles/tema1.dir/Basketball.cpp.o: ../Basketball.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cojocariu/Downloads/Tema1/01/Tema1---IEP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tema1.dir/Basketball.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tema1.dir/Basketball.cpp.o -c /home/cojocariu/Downloads/Tema1/01/Tema1---IEP/Basketball.cpp

CMakeFiles/tema1.dir/Basketball.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tema1.dir/Basketball.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cojocariu/Downloads/Tema1/01/Tema1---IEP/Basketball.cpp > CMakeFiles/tema1.dir/Basketball.cpp.i

CMakeFiles/tema1.dir/Basketball.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tema1.dir/Basketball.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cojocariu/Downloads/Tema1/01/Tema1---IEP/Basketball.cpp -o CMakeFiles/tema1.dir/Basketball.cpp.s

CMakeFiles/tema1.dir/main.cpp.o: CMakeFiles/tema1.dir/flags.make
CMakeFiles/tema1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cojocariu/Downloads/Tema1/01/Tema1---IEP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/tema1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tema1.dir/main.cpp.o -c /home/cojocariu/Downloads/Tema1/01/Tema1---IEP/main.cpp

CMakeFiles/tema1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tema1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cojocariu/Downloads/Tema1/01/Tema1---IEP/main.cpp > CMakeFiles/tema1.dir/main.cpp.i

CMakeFiles/tema1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tema1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cojocariu/Downloads/Tema1/01/Tema1---IEP/main.cpp -o CMakeFiles/tema1.dir/main.cpp.s

# Object files for target tema1
tema1_OBJECTS = \
"CMakeFiles/tema1.dir/TeamSport.cpp.o" \
"CMakeFiles/tema1.dir/Basketball.cpp.o" \
"CMakeFiles/tema1.dir/main.cpp.o"

# External object files for target tema1
tema1_EXTERNAL_OBJECTS =

tema1: CMakeFiles/tema1.dir/TeamSport.cpp.o
tema1: CMakeFiles/tema1.dir/Basketball.cpp.o
tema1: CMakeFiles/tema1.dir/main.cpp.o
tema1: CMakeFiles/tema1.dir/build.make
tema1: CMakeFiles/tema1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cojocariu/Downloads/Tema1/01/Tema1---IEP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable tema1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tema1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tema1.dir/build: tema1

.PHONY : CMakeFiles/tema1.dir/build

CMakeFiles/tema1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tema1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tema1.dir/clean

CMakeFiles/tema1.dir/depend:
	cd /home/cojocariu/Downloads/Tema1/01/Tema1---IEP/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cojocariu/Downloads/Tema1/01/Tema1---IEP /home/cojocariu/Downloads/Tema1/01/Tema1---IEP /home/cojocariu/Downloads/Tema1/01/Tema1---IEP/build /home/cojocariu/Downloads/Tema1/01/Tema1---IEP/build /home/cojocariu/Downloads/Tema1/01/Tema1---IEP/build/CMakeFiles/tema1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tema1.dir/depend

