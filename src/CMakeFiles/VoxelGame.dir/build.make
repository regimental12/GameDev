# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/richard/projects/Ci224

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/richard/projects/Ci224

# Include any dependencies generated for this target.
include src/CMakeFiles/VoxelGame.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/VoxelGame.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/VoxelGame.dir/flags.make

src/CMakeFiles/VoxelGame.dir/main.cpp.o: src/CMakeFiles/VoxelGame.dir/flags.make
src/CMakeFiles/VoxelGame.dir/main.cpp.o: src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/richard/projects/Ci224/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/VoxelGame.dir/main.cpp.o"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/VoxelGame.dir/main.cpp.o -c /home/richard/projects/Ci224/src/main.cpp

src/CMakeFiles/VoxelGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VoxelGame.dir/main.cpp.i"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/richard/projects/Ci224/src/main.cpp > CMakeFiles/VoxelGame.dir/main.cpp.i

src/CMakeFiles/VoxelGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VoxelGame.dir/main.cpp.s"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/richard/projects/Ci224/src/main.cpp -o CMakeFiles/VoxelGame.dir/main.cpp.s

src/CMakeFiles/VoxelGame.dir/main.cpp.o.requires:
.PHONY : src/CMakeFiles/VoxelGame.dir/main.cpp.o.requires

src/CMakeFiles/VoxelGame.dir/main.cpp.o.provides: src/CMakeFiles/VoxelGame.dir/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/VoxelGame.dir/build.make src/CMakeFiles/VoxelGame.dir/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/VoxelGame.dir/main.cpp.o.provides

src/CMakeFiles/VoxelGame.dir/main.cpp.o.provides.build: src/CMakeFiles/VoxelGame.dir/main.cpp.o

src/CMakeFiles/VoxelGame.dir/Camera.cpp.o: src/CMakeFiles/VoxelGame.dir/flags.make
src/CMakeFiles/VoxelGame.dir/Camera.cpp.o: src/Camera.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/richard/projects/Ci224/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/VoxelGame.dir/Camera.cpp.o"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/VoxelGame.dir/Camera.cpp.o -c /home/richard/projects/Ci224/src/Camera.cpp

src/CMakeFiles/VoxelGame.dir/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VoxelGame.dir/Camera.cpp.i"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/richard/projects/Ci224/src/Camera.cpp > CMakeFiles/VoxelGame.dir/Camera.cpp.i

src/CMakeFiles/VoxelGame.dir/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VoxelGame.dir/Camera.cpp.s"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/richard/projects/Ci224/src/Camera.cpp -o CMakeFiles/VoxelGame.dir/Camera.cpp.s

src/CMakeFiles/VoxelGame.dir/Camera.cpp.o.requires:
.PHONY : src/CMakeFiles/VoxelGame.dir/Camera.cpp.o.requires

src/CMakeFiles/VoxelGame.dir/Camera.cpp.o.provides: src/CMakeFiles/VoxelGame.dir/Camera.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/VoxelGame.dir/build.make src/CMakeFiles/VoxelGame.dir/Camera.cpp.o.provides.build
.PHONY : src/CMakeFiles/VoxelGame.dir/Camera.cpp.o.provides

src/CMakeFiles/VoxelGame.dir/Camera.cpp.o.provides.build: src/CMakeFiles/VoxelGame.dir/Camera.cpp.o

src/CMakeFiles/VoxelGame.dir/game.cpp.o: src/CMakeFiles/VoxelGame.dir/flags.make
src/CMakeFiles/VoxelGame.dir/game.cpp.o: src/game.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/richard/projects/Ci224/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/VoxelGame.dir/game.cpp.o"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/VoxelGame.dir/game.cpp.o -c /home/richard/projects/Ci224/src/game.cpp

src/CMakeFiles/VoxelGame.dir/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VoxelGame.dir/game.cpp.i"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/richard/projects/Ci224/src/game.cpp > CMakeFiles/VoxelGame.dir/game.cpp.i

src/CMakeFiles/VoxelGame.dir/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VoxelGame.dir/game.cpp.s"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/richard/projects/Ci224/src/game.cpp -o CMakeFiles/VoxelGame.dir/game.cpp.s

src/CMakeFiles/VoxelGame.dir/game.cpp.o.requires:
.PHONY : src/CMakeFiles/VoxelGame.dir/game.cpp.o.requires

src/CMakeFiles/VoxelGame.dir/game.cpp.o.provides: src/CMakeFiles/VoxelGame.dir/game.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/VoxelGame.dir/build.make src/CMakeFiles/VoxelGame.dir/game.cpp.o.provides.build
.PHONY : src/CMakeFiles/VoxelGame.dir/game.cpp.o.provides

src/CMakeFiles/VoxelGame.dir/game.cpp.o.provides.build: src/CMakeFiles/VoxelGame.dir/game.cpp.o

src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.o: src/CMakeFiles/VoxelGame.dir/flags.make
src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.o: src/imageLoader.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/richard/projects/Ci224/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.o"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/VoxelGame.dir/imageLoader.cpp.o -c /home/richard/projects/Ci224/src/imageLoader.cpp

src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VoxelGame.dir/imageLoader.cpp.i"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/richard/projects/Ci224/src/imageLoader.cpp > CMakeFiles/VoxelGame.dir/imageLoader.cpp.i

src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VoxelGame.dir/imageLoader.cpp.s"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/richard/projects/Ci224/src/imageLoader.cpp -o CMakeFiles/VoxelGame.dir/imageLoader.cpp.s

src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.o.requires:
.PHONY : src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.o.requires

src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.o.provides: src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/VoxelGame.dir/build.make src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.o.provides.build
.PHONY : src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.o.provides

src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.o.provides.build: src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.o

src/CMakeFiles/VoxelGame.dir/shader.cpp.o: src/CMakeFiles/VoxelGame.dir/flags.make
src/CMakeFiles/VoxelGame.dir/shader.cpp.o: src/shader.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/richard/projects/Ci224/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/VoxelGame.dir/shader.cpp.o"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/VoxelGame.dir/shader.cpp.o -c /home/richard/projects/Ci224/src/shader.cpp

src/CMakeFiles/VoxelGame.dir/shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VoxelGame.dir/shader.cpp.i"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/richard/projects/Ci224/src/shader.cpp > CMakeFiles/VoxelGame.dir/shader.cpp.i

src/CMakeFiles/VoxelGame.dir/shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VoxelGame.dir/shader.cpp.s"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/richard/projects/Ci224/src/shader.cpp -o CMakeFiles/VoxelGame.dir/shader.cpp.s

src/CMakeFiles/VoxelGame.dir/shader.cpp.o.requires:
.PHONY : src/CMakeFiles/VoxelGame.dir/shader.cpp.o.requires

src/CMakeFiles/VoxelGame.dir/shader.cpp.o.provides: src/CMakeFiles/VoxelGame.dir/shader.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/VoxelGame.dir/build.make src/CMakeFiles/VoxelGame.dir/shader.cpp.o.provides.build
.PHONY : src/CMakeFiles/VoxelGame.dir/shader.cpp.o.provides

src/CMakeFiles/VoxelGame.dir/shader.cpp.o.provides.build: src/CMakeFiles/VoxelGame.dir/shader.cpp.o

src/CMakeFiles/VoxelGame.dir/Time.cpp.o: src/CMakeFiles/VoxelGame.dir/flags.make
src/CMakeFiles/VoxelGame.dir/Time.cpp.o: src/Time.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/richard/projects/Ci224/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/VoxelGame.dir/Time.cpp.o"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/VoxelGame.dir/Time.cpp.o -c /home/richard/projects/Ci224/src/Time.cpp

src/CMakeFiles/VoxelGame.dir/Time.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VoxelGame.dir/Time.cpp.i"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/richard/projects/Ci224/src/Time.cpp > CMakeFiles/VoxelGame.dir/Time.cpp.i

src/CMakeFiles/VoxelGame.dir/Time.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VoxelGame.dir/Time.cpp.s"
	cd /home/richard/projects/Ci224/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/richard/projects/Ci224/src/Time.cpp -o CMakeFiles/VoxelGame.dir/Time.cpp.s

src/CMakeFiles/VoxelGame.dir/Time.cpp.o.requires:
.PHONY : src/CMakeFiles/VoxelGame.dir/Time.cpp.o.requires

src/CMakeFiles/VoxelGame.dir/Time.cpp.o.provides: src/CMakeFiles/VoxelGame.dir/Time.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/VoxelGame.dir/build.make src/CMakeFiles/VoxelGame.dir/Time.cpp.o.provides.build
.PHONY : src/CMakeFiles/VoxelGame.dir/Time.cpp.o.provides

src/CMakeFiles/VoxelGame.dir/Time.cpp.o.provides.build: src/CMakeFiles/VoxelGame.dir/Time.cpp.o

# Object files for target VoxelGame
VoxelGame_OBJECTS = \
"CMakeFiles/VoxelGame.dir/main.cpp.o" \
"CMakeFiles/VoxelGame.dir/Camera.cpp.o" \
"CMakeFiles/VoxelGame.dir/game.cpp.o" \
"CMakeFiles/VoxelGame.dir/imageLoader.cpp.o" \
"CMakeFiles/VoxelGame.dir/shader.cpp.o" \
"CMakeFiles/VoxelGame.dir/Time.cpp.o"

# External object files for target VoxelGame
VoxelGame_EXTERNAL_OBJECTS =

src/VoxelGame: src/CMakeFiles/VoxelGame.dir/main.cpp.o
src/VoxelGame: src/CMakeFiles/VoxelGame.dir/Camera.cpp.o
src/VoxelGame: src/CMakeFiles/VoxelGame.dir/game.cpp.o
src/VoxelGame: src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.o
src/VoxelGame: src/CMakeFiles/VoxelGame.dir/shader.cpp.o
src/VoxelGame: src/CMakeFiles/VoxelGame.dir/Time.cpp.o
src/VoxelGame: src/CMakeFiles/VoxelGame.dir/build.make
src/VoxelGame: /usr/lib/x86_64-linux-gnu/libGLU.so
src/VoxelGame: /usr/lib/x86_64-linux-gnu/libGL.so
src/VoxelGame: /usr/lib/x86_64-linux-gnu/libSM.so
src/VoxelGame: /usr/lib/x86_64-linux-gnu/libICE.so
src/VoxelGame: /usr/lib/x86_64-linux-gnu/libX11.so
src/VoxelGame: /usr/lib/x86_64-linux-gnu/libXext.so
src/VoxelGame: /usr/lib/x86_64-linux-gnu/libGLEW.so
src/VoxelGame: /usr/lib/x86_64-linux-gnu/libGLU.so
src/VoxelGame: /usr/lib/x86_64-linux-gnu/libGL.so
src/VoxelGame: /usr/lib/x86_64-linux-gnu/libSM.so
src/VoxelGame: /usr/lib/x86_64-linux-gnu/libICE.so
src/VoxelGame: /usr/lib/x86_64-linux-gnu/libX11.so
src/VoxelGame: /usr/lib/x86_64-linux-gnu/libXext.so
src/VoxelGame: /usr/lib/x86_64-linux-gnu/libGLEW.so
src/VoxelGame: src/CMakeFiles/VoxelGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable VoxelGame"
	cd /home/richard/projects/Ci224/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VoxelGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/VoxelGame.dir/build: src/VoxelGame
.PHONY : src/CMakeFiles/VoxelGame.dir/build

src/CMakeFiles/VoxelGame.dir/requires: src/CMakeFiles/VoxelGame.dir/main.cpp.o.requires
src/CMakeFiles/VoxelGame.dir/requires: src/CMakeFiles/VoxelGame.dir/Camera.cpp.o.requires
src/CMakeFiles/VoxelGame.dir/requires: src/CMakeFiles/VoxelGame.dir/game.cpp.o.requires
src/CMakeFiles/VoxelGame.dir/requires: src/CMakeFiles/VoxelGame.dir/imageLoader.cpp.o.requires
src/CMakeFiles/VoxelGame.dir/requires: src/CMakeFiles/VoxelGame.dir/shader.cpp.o.requires
src/CMakeFiles/VoxelGame.dir/requires: src/CMakeFiles/VoxelGame.dir/Time.cpp.o.requires
.PHONY : src/CMakeFiles/VoxelGame.dir/requires

src/CMakeFiles/VoxelGame.dir/clean:
	cd /home/richard/projects/Ci224/src && $(CMAKE_COMMAND) -P CMakeFiles/VoxelGame.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/VoxelGame.dir/clean

src/CMakeFiles/VoxelGame.dir/depend:
	cd /home/richard/projects/Ci224 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/richard/projects/Ci224 /home/richard/projects/Ci224/src /home/richard/projects/Ci224 /home/richard/projects/Ci224/src /home/richard/projects/Ci224/src/CMakeFiles/VoxelGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/VoxelGame.dir/depend

