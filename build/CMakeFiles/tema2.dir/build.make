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
include CMakeFiles/tema2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tema2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tema2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tema2.dir/flags.make

CMakeFiles/tema2.dir/main.cpp.o: CMakeFiles/tema2.dir/flags.make
CMakeFiles/tema2.dir/main.cpp.o: /Users/gabriel-claudiuprivantu/Documents/FACULTATE\ AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/src/main.cpp
CMakeFiles/tema2.dir/main.cpp.o: CMakeFiles/tema2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tema2.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tema2.dir/main.cpp.o -MF CMakeFiles/tema2.dir/main.cpp.o.d -o CMakeFiles/tema2.dir/main.cpp.o -c "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/src/main.cpp"

CMakeFiles/tema2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tema2.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/src/main.cpp" > CMakeFiles/tema2.dir/main.cpp.i

CMakeFiles/tema2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tema2.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/src/main.cpp" -o CMakeFiles/tema2.dir/main.cpp.s

# Object files for target tema2
tema2_OBJECTS = \
"CMakeFiles/tema2.dir/main.cpp.o"

# External object files for target tema2
tema2_EXTERNAL_OBJECTS =

tema2: CMakeFiles/tema2.dir/main.cpp.o
tema2: CMakeFiles/tema2.dir/build.make
tema2: Vehicle/libVehicle.a
tema2: Vehicle/Car/libCar.a
tema2: Vehicle/Boat/libBoat.a
tema2: VehiclesCollection/libVehiclesCollection.a
tema2: Vehicle/GenericCollection/libGenericCollection.a
tema2: SharedCollection/libSharedCollection.a
tema2: CMakeFiles/tema2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tema2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tema2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tema2.dir/build: tema2
.PHONY : CMakeFiles/tema2.dir/build

CMakeFiles/tema2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tema2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tema2.dir/clean

CMakeFiles/tema2.dir/depend:
	cd "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/src" "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/src" "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build" "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build" "/Users/gabriel-claudiuprivantu/Documents/FACULTATE AC_CTIro/AN4/SEM1/PAOO/teme_bune/tema2/build/CMakeFiles/tema2.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/tema2.dir/depend

