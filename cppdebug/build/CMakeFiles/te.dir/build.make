# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/lw/桌面/cppdebug

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lw/桌面/cppdebug/build

# Include any dependencies generated for this target.
include CMakeFiles/te.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/te.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/te.dir/flags.make

CMakeFiles/te.dir/testt.cpp.o: CMakeFiles/te.dir/flags.make
CMakeFiles/te.dir/testt.cpp.o: ../testt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lw/桌面/cppdebug/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/te.dir/testt.cpp.o"
	/usr/bin/g++-5   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/te.dir/testt.cpp.o -c /home/lw/桌面/cppdebug/testt.cpp

CMakeFiles/te.dir/testt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/te.dir/testt.cpp.i"
	/usr/bin/g++-5  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lw/桌面/cppdebug/testt.cpp > CMakeFiles/te.dir/testt.cpp.i

CMakeFiles/te.dir/testt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/te.dir/testt.cpp.s"
	/usr/bin/g++-5  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lw/桌面/cppdebug/testt.cpp -o CMakeFiles/te.dir/testt.cpp.s

CMakeFiles/te.dir/testt.cpp.o.requires:

.PHONY : CMakeFiles/te.dir/testt.cpp.o.requires

CMakeFiles/te.dir/testt.cpp.o.provides: CMakeFiles/te.dir/testt.cpp.o.requires
	$(MAKE) -f CMakeFiles/te.dir/build.make CMakeFiles/te.dir/testt.cpp.o.provides.build
.PHONY : CMakeFiles/te.dir/testt.cpp.o.provides

CMakeFiles/te.dir/testt.cpp.o.provides.build: CMakeFiles/te.dir/testt.cpp.o


# Object files for target te
te_OBJECTS = \
"CMakeFiles/te.dir/testt.cpp.o"

# External object files for target te
te_EXTERNAL_OBJECTS =

te: CMakeFiles/te.dir/testt.cpp.o
te: CMakeFiles/te.dir/build.make
te: CMakeFiles/te.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lw/桌面/cppdebug/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable te"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/te.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/te.dir/build: te

.PHONY : CMakeFiles/te.dir/build

CMakeFiles/te.dir/requires: CMakeFiles/te.dir/testt.cpp.o.requires

.PHONY : CMakeFiles/te.dir/requires

CMakeFiles/te.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/te.dir/cmake_clean.cmake
.PHONY : CMakeFiles/te.dir/clean

CMakeFiles/te.dir/depend:
	cd /home/lw/桌面/cppdebug/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lw/桌面/cppdebug /home/lw/桌面/cppdebug /home/lw/桌面/cppdebug/build /home/lw/桌面/cppdebug/build /home/lw/桌面/cppdebug/build/CMakeFiles/te.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/te.dir/depend

