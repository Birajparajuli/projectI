# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Programming\C Programming\projectI"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Programming\C Programming\projectI\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/projectI.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/projectI.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/projectI.dir/flags.make

CMakeFiles/projectI.dir/newbooking.c.obj: CMakeFiles/projectI.dir/flags.make
CMakeFiles/projectI.dir/newbooking.c.obj: ../newbooking.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Programming\C Programming\projectI\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/projectI.dir/newbooking.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\projectI.dir\newbooking.c.obj   -c "D:\Programming\C Programming\projectI\newbooking.c"

CMakeFiles/projectI.dir/newbooking.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projectI.dir/newbooking.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Programming\C Programming\projectI\newbooking.c" > CMakeFiles\projectI.dir\newbooking.c.i

CMakeFiles/projectI.dir/newbooking.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projectI.dir/newbooking.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Programming\C Programming\projectI\newbooking.c" -o CMakeFiles\projectI.dir\newbooking.c.s

# Object files for target projectI
projectI_OBJECTS = \
"CMakeFiles/projectI.dir/newbooking.c.obj"

# External object files for target projectI
projectI_EXTERNAL_OBJECTS =

projectI.exe: CMakeFiles/projectI.dir/newbooking.c.obj
projectI.exe: CMakeFiles/projectI.dir/build.make
projectI.exe: CMakeFiles/projectI.dir/linklibs.rsp
projectI.exe: CMakeFiles/projectI.dir/objects1.rsp
projectI.exe: CMakeFiles/projectI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Programming\C Programming\projectI\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable projectI.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\projectI.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/projectI.dir/build: projectI.exe

.PHONY : CMakeFiles/projectI.dir/build

CMakeFiles/projectI.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\projectI.dir\cmake_clean.cmake
.PHONY : CMakeFiles/projectI.dir/clean

CMakeFiles/projectI.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Programming\C Programming\projectI" "D:\Programming\C Programming\projectI" "D:\Programming\C Programming\projectI\cmake-build-debug" "D:\Programming\C Programming\projectI\cmake-build-debug" "D:\Programming\C Programming\projectI\cmake-build-debug\CMakeFiles\projectI.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/projectI.dir/depend

