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

# Utility rule file for linker_pass_final_script.

# Include the progress variables for this target.
include zephyr/CMakeFiles/linker_pass_final_script.dir/progress.make

zephyr/CMakeFiles/linker_pass_final_script: zephyr/zephyr_prebuilt.elf
zephyr/CMakeFiles/linker_pass_final_script: zephyr/linker_pass_final.cmd


zephyr/linker_pass_final.cmd: ../../../../../arch/arm/soc/nordic_nrf/nrf52/linker.ld
zephyr/linker_pass_final.cmd: ../../../../../arch/arm/soc/nordic_nrf/nrf52/linker.ld
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating linker_pass_final.cmd"
	cd /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/zephyr && /opt/zephyr-sdk/sysroots/x86_64-pokysdk-linux/usr/bin/arm-zephyr-eabi/arm-zephyr-eabi-gcc -x assembler-with-cpp -nostdinc -undef -MD -MF linker_pass_final.cmd.dep -MT zephyr/linker_pass_final.cmd -I/home/wewise/zephyr_prj/zephyr/kernel/include -I/home/wewise/zephyr_prj/zephyr/arch/arm/include -I/home/wewise/zephyr_prj/zephyr/arch/arm/soc/nordic_nrf/nrf52 -I/home/wewise/zephyr_prj/zephyr/arch/arm/soc/nordic_nrf/nrf52/include -I/home/wewise/zephyr_prj/zephyr/arch/arm/soc/nordic_nrf/include -I/home/wewise/zephyr_prj/zephyr/boards/arm/nrf52_pca10040 -I/home/wewise/zephyr_prj/zephyr/include -I/home/wewise/zephyr_prj/zephyr/include/drivers -I/home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/zephyr/include/generated -I/opt/zephyr-sdk/sysroots/x86_64-pokysdk-linux/usr/lib/arm-zephyr-eabi/gcc/arm-zephyr-eabi/6.2.0/include -I/opt/zephyr-sdk/sysroots/x86_64-pokysdk-linux/usr/lib/arm-zephyr-eabi/gcc/arm-zephyr-eabi/6.2.0/include-fixed -I/home/wewise/zephyr_prj/zephyr/arch/arm/soc/nordic_nrf/include -I/home/wewise/zephyr_prj/zephyr/lib/libc/minimal/include -I/home/wewise/zephyr_prj/zephyr/ext/hal/cmsis/Include -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/nrfx -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/nrfx/drivers/include -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/nrfx/hal -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/nrfx/mdk -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/. -I/home/wewise/zephyr_prj/zephyr/subsys/bluetooth -D__GCC_LINKER_CMD__ -DLINKER_PASS2 -E /home/wewise/zephyr_prj/zephyr/arch/arm/soc/nordic_nrf/nrf52/linker.ld -P -o linker_pass_final.cmd

linker_pass_final_script: zephyr/CMakeFiles/linker_pass_final_script
linker_pass_final_script: zephyr/linker_pass_final.cmd
linker_pass_final_script: zephyr/CMakeFiles/linker_pass_final_script.dir/build.make

.PHONY : linker_pass_final_script

# Rule to build all files generated by this target.
zephyr/CMakeFiles/linker_pass_final_script.dir/build: linker_pass_final_script

.PHONY : zephyr/CMakeFiles/linker_pass_final_script.dir/build

zephyr/CMakeFiles/linker_pass_final_script.dir/clean:
	cd /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/zephyr && $(CMAKE_COMMAND) -P CMakeFiles/linker_pass_final_script.dir/cmake_clean.cmake
.PHONY : zephyr/CMakeFiles/linker_pass_final_script.dir/clean

zephyr/CMakeFiles/linker_pass_final_script.dir/depend:
	cd /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv /home/wewise/zephyr_prj/zephyr /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040 /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/zephyr /home/wewise/zephyr_prj/zephyr/samples/bluetooth/scan_adv/build/nrf52_pca10040/zephyr/CMakeFiles/linker_pass_final_script.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : zephyr/CMakeFiles/linker_pass_final_script.dir/depend

