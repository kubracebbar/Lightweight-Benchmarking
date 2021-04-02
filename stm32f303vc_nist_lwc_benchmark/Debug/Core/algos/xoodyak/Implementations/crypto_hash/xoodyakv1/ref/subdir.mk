################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/Xoodoo-reference.c \
../Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/Xoodyak.c \
../Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/hash.c 

OBJS += \
./Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/Xoodoo-reference.o \
./Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/Xoodyak.o \
./Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/hash.o 

C_DEPS += \
./Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/Xoodoo-reference.d \
./Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/Xoodyak.d \
./Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/hash.d 


# Each subdirectory must supply rules for building sources it contributes
Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/Xoodoo-reference.o: ../Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/Xoodoo-reference.c Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F303xC -DUSE_FULL_LL_DRIVER -DUSE_HAL_DRIVER -c -I../Core/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/Xoodoo-reference.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/Xoodyak.o: ../Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/Xoodyak.c Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F303xC -DUSE_FULL_LL_DRIVER -DUSE_HAL_DRIVER -c -I../Core/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/Xoodyak.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/hash.o: ../Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/hash.c Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F303xC -DUSE_FULL_LL_DRIVER -DUSE_HAL_DRIVER -c -I../Core/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/hash.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

