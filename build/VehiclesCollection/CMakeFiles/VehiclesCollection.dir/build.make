# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.7/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.7/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/src"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build"

# Include any dependencies generated for this target.
include VehiclesCollection/CMakeFiles/VehiclesCollection.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include VehiclesCollection/CMakeFiles/VehiclesCollection.dir/compiler_depend.make

# Include the progress variables for this target.
include VehiclesCollection/CMakeFiles/VehiclesCollection.dir/progress.make

# Include the compile flags for this target's objects.
include VehiclesCollection/CMakeFiles/VehiclesCollection.dir/flags.make

VehiclesCollection/CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.o: VehiclesCollection/CMakeFiles/VehiclesCollection.dir/flags.make
VehiclesCollection/CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.o: /Users/gabriel-claudiuprivantu/Documents/FACULTATE\ AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/src/VehiclesCollection/VehiclesCollection.cpp
VehiclesCollection/CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.o: VehiclesCollection/CMakeFiles/VehiclesCollection.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object VehiclesCollection/CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.o"
	cd "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build/VehiclesCollection" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT VehiclesCollection/CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.o -MF CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.o.d -o CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.o -c "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/src/VehiclesCollection/VehiclesCollection.cpp"

VehiclesCollection/CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.i"
	cd "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build/VehiclesCollection" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/src/VehiclesCollection/VehiclesCollection.cpp" > CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.i

VehiclesCollection/CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.s"
	cd "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build/VehiclesCollection" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/src/VehiclesCollection/VehiclesCollection.cpp" -o CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.s

# Object files for target VehiclesCollection
VehiclesCollection_OBJECTS = \
"CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.o"

# External object files for target VehiclesCollection
VehiclesCollection_EXTERNAL_OBJECTS =

VehiclesCollection/libVehiclesCollection.a: VehiclesCollection/CMakeFiles/VehiclesCollection.dir/VehiclesCollection.cpp.o
VehiclesCollection/libVehiclesCollection.a: VehiclesCollection/CMakeFiles/VehiclesCollection.dir/build.make
VehiclesCollection/libVehiclesCollection.a: VehiclesCollection/CMakeFiles/VehiclesCollection.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libVehiclesCollection.a"
	cd "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build/VehiclesCollection" && $(CMAKE_COMMAND) -P CMakeFiles/VehiclesCollection.dir/cmake_clean_target.cmake
	cd "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build/VehiclesCollection" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VehiclesCollection.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
VehiclesCollection/CMakeFiles/VehiclesCollection.dir/build: VehiclesCollection/libVehiclesCollection.a
.PHONY : VehiclesCollection/CMakeFiles/VehiclesCollection.dir/build

VehiclesCollection/CMakeFiles/VehiclesCollection.dir/clean:
	cd "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build/VehiclesCollection" && $(CMAKE_COMMAND) -P CMakeFiles/VehiclesCollection.dir/cmake_clean.cmake
.PHONY : VehiclesCollection/CMakeFiles/VehiclesCollection.dir/clean

VehiclesCollection/CMakeFiles/VehiclesCollection.dir/depend:
	cd "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/src" "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/src/VehiclesCollection" "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build" "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build/VehiclesCollection" "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build/VehiclesCollection/CMakeFiles/VehiclesCollection.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : VehiclesCollection/CMakeFiles/VehiclesCollection.dir/depend

