# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/wewise/cmake/cmake-3.8.2-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /home/wewise/cmake/cmake-3.8.2-Linux-x86_64/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040

# Include any dependencies generated for this target.
include zephyr/CMakeFiles/offsets.dir/depend.make

# Include the progress variables for this target.
include zephyr/CMakeFiles/offsets.dir/progress.make

# Include the compile flags for this target's objects.
include zephyr/CMakeFiles/offsets.dir/flags.make

zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj: zephyr/CMakeFiles/offsets.dir/flags.make
zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj: ../../../../../arch/arm/core/offsets/offsets.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj"
	cd /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/zephyr && ccache /opt/zephyr-sdk/sysroots/x86_64-pokysdk-linux/usr/bin/arm-zephyr-eabi/arm-zephyr-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj   -c /home/wewise/zephyr_prj/zephyr/arch/arm/core/offsets/offsets.c

zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.i"
	cd /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/zephyr && /opt/zephyr-sdk/sysroots/x86_64-pokysdk-linux/usr/bin/arm-zephyr-eabi/arm-zephyr-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/wewise/zephyr_prj/zephyr/arch/arm/core/offsets/offsets.c > CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.i

zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.s"
	cd /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/zephyr && /opt/zephyr-sdk/sysroots/x86_64-pokysdk-linux/usr/bin/arm-zephyr-eabi/arm-zephyr-eabi-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/wewise/zephyr_prj/zephyr/arch/arm/core/offsets/offsets.c -o CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.s

zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj.requires:

.PHONY : zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj.requires

zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj.provides: zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj.requires
	$(MAKE) -f zephyr/CMakeFiles/offsets.dir/build.make zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj.provides.build
.PHONY : zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj.provides

zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj.provides.build: zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj


# Object files for target offsets
offsets_OBJECTS = \
"CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj"

# External object files for target offsets
offsets_EXTERNAL_OBJECTS =

zephyr/liboffsets.a: zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj
zephyr/liboffsets.a: zephyr/CMakeFiles/offsets.dir/build.make
zephyr/liboffsets.a: zephyr/CMakeFiles/offsets.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library liboffsets.a"
	cd /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/zephyr && $(CMAKE_COMMAND) -P CMakeFiles/offsets.dir/cmake_clean_target.cmake
	cd /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/zephyr && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/offsets.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
zephyr/CMakeFiles/offsets.dir/build: zephyr/liboffsets.a

.PHONY : zephyr/CMakeFiles/offsets.dir/build

zephyr/CMakeFiles/offsets.dir/requires: zephyr/CMakeFiles/offsets.dir/arch/arm/core/offsets/offsets.c.obj.requires

.PHONY : zephyr/CMakeFiles/offsets.dir/requires

zephyr/CMakeFiles/offsets.dir/clean:
	cd /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/zephyr && $(CMAKE_COMMAND) -P CMakeFiles/offsets.dir/cmake_clean.cmake
.PHONY : zephyr/CMakeFiles/offsets.dir/clean

zephyr/CMakeFiles/offsets.dir/depend:
	cd /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv /home/wewise/zephyr_prj/zephyr /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040 /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/zephyr /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/zephyr/CMakeFiles/offsets.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : zephyr/CMakeFiles/offsets.dir/depend

