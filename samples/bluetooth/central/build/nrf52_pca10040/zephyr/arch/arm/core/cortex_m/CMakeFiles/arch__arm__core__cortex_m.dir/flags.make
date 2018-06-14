# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# compile ASM with /opt/zephyr-sdk/sysroots/x86_64-pokysdk-linux/usr/bin/arm-zephyr-eabi/arm-zephyr-eabi-gcc
# compile C with /opt/zephyr-sdk/sysroots/x86_64-pokysdk-linux/usr/bin/arm-zephyr-eabi/arm-zephyr-eabi-gcc
ASM_FLAGS =   -Os -g -Wall -Wformat -Wformat-security -Wno-format-zero-length -imacros /home/wewise/zephyr_prj/zephyr/samples/bluetooth/central/build/nrf52_pca10040/zephyr/include/generated/autoconf.h -ffreestanding -Wno-main --sysroot /opt/zephyr-sdk/sysroots/armv5-zephyr-eabi/usr -mthumb -mcpu=cortex-m4 -xassembler-with-cpp -D_ASMLANGUAGE -fno-asynchronous-unwind-tables -fno-pie -fno-pic -fno-strict-overflow -Wno-pointer-sign -Wno-unused-but-set-variable -fno-reorder-functions -fno-defer-pop -Werror=implicit-int -ffunction-sections -fdata-sections -mabi=aapcs -march=armv7e-m

ASM_DEFINES = -DBUILD_VERSION=v1.12.0-151-gd066f1b -DKERNEL -DNRF52832_XXAA -D_FORTIFY_SOURCE=2 -D__ZEPHYR_SUPERVISOR__ -D__ZEPHYR__=1

ASM_INCLUDES = -I/home/wewise/zephyr_prj/zephyr/kernel/include -I/home/wewise/zephyr_prj/zephyr/arch/arm/include -I/home/wewise/zephyr_prj/zephyr/arch/arm/soc/nordic_nrf/nrf52 -I/home/wewise/zephyr_prj/zephyr/arch/arm/soc/nordic_nrf/nrf52/include -I/home/wewise/zephyr_prj/zephyr/arch/arm/soc/nordic_nrf/include -I/home/wewise/zephyr_prj/zephyr/boards/arm/nrf52_pca10040 -I/home/wewise/zephyr_prj/zephyr/include -I/home/wewise/zephyr_prj/zephyr/include/drivers -I/home/wewise/zephyr_prj/zephyr/samples/bluetooth/central/build/nrf52_pca10040/zephyr/include/generated -isystem /opt/zephyr-sdk/sysroots/x86_64-pokysdk-linux/usr/lib/arm-zephyr-eabi/gcc/arm-zephyr-eabi/6.2.0/include -isystem /opt/zephyr-sdk/sysroots/x86_64-pokysdk-linux/usr/lib/arm-zephyr-eabi/gcc/arm-zephyr-eabi/6.2.0/include-fixed -I/home/wewise/zephyr_prj/zephyr/lib/libc/minimal/include -I/home/wewise/zephyr_prj/zephyr/ext/lib/crypto/tinycrypt/include -I/home/wewise/zephyr_prj/zephyr/ext/hal/cmsis/Include -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/nrfx -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/nrfx/drivers/include -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/nrfx/hal -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/nrfx/mdk -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/. -I/home/wewise/zephyr_prj/zephyr/subsys/bluetooth 

C_FLAGS =   -Os -g -Wall -Wformat -Wformat-security -Wno-format-zero-length -imacros /home/wewise/zephyr_prj/zephyr/samples/bluetooth/central/build/nrf52_pca10040/zephyr/include/generated/autoconf.h -ffreestanding -Wno-main --sysroot /opt/zephyr-sdk/sysroots/armv5-zephyr-eabi/usr -mthumb -mcpu=cortex-m4 -std=c99 -fno-asynchronous-unwind-tables -fno-pie -fno-pic -fno-strict-overflow -Wno-pointer-sign -Wno-unused-but-set-variable -fno-reorder-functions -fno-defer-pop -Werror=implicit-int -ffunction-sections -fdata-sections -mabi=aapcs -march=armv7e-m

C_DEFINES = -DBUILD_VERSION=v1.12.0-151-gd066f1b -DKERNEL -DNRF52832_XXAA -D_FORTIFY_SOURCE=2 -D__ZEPHYR_SUPERVISOR__ -D__ZEPHYR__=1

C_INCLUDES = -I/home/wewise/zephyr_prj/zephyr/kernel/include -I/home/wewise/zephyr_prj/zephyr/arch/arm/include -I/home/wewise/zephyr_prj/zephyr/arch/arm/soc/nordic_nrf/nrf52 -I/home/wewise/zephyr_prj/zephyr/arch/arm/soc/nordic_nrf/nrf52/include -I/home/wewise/zephyr_prj/zephyr/arch/arm/soc/nordic_nrf/include -I/home/wewise/zephyr_prj/zephyr/boards/arm/nrf52_pca10040 -I/home/wewise/zephyr_prj/zephyr/include -I/home/wewise/zephyr_prj/zephyr/include/drivers -I/home/wewise/zephyr_prj/zephyr/samples/bluetooth/central/build/nrf52_pca10040/zephyr/include/generated -isystem /opt/zephyr-sdk/sysroots/x86_64-pokysdk-linux/usr/lib/arm-zephyr-eabi/gcc/arm-zephyr-eabi/6.2.0/include -isystem /opt/zephyr-sdk/sysroots/x86_64-pokysdk-linux/usr/lib/arm-zephyr-eabi/gcc/arm-zephyr-eabi/6.2.0/include-fixed -I/home/wewise/zephyr_prj/zephyr/lib/libc/minimal/include -I/home/wewise/zephyr_prj/zephyr/ext/lib/crypto/tinycrypt/include -I/home/wewise/zephyr_prj/zephyr/ext/hal/cmsis/Include -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/nrfx -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/nrfx/drivers/include -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/nrfx/hal -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/nrfx/mdk -I/home/wewise/zephyr_prj/zephyr/ext/hal/nordic/. -I/home/wewise/zephyr_prj/zephyr/subsys/bluetooth 

