################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/encrypt.c \
../Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/keccak.c 

OBJS += \
./Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/encrypt.o \
./Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/keccak.o 

C_DEPS += \
./Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/encrypt.d \
./Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/keccak.d 


# Each subdirectory must supply rules for building sources it contributes
Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/encrypt.o: ../Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/encrypt.c Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F303xC -DUSE_FULL_LL_DRIVER -DUSE_HAL_DRIVER -c -I../Core/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/encrypt.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/keccak.o: ../Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/keccak.c Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F303xC -DUSE_FULL_LL_DRIVER -DUSE_HAL_DRIVER -c -I../Core/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/keccak.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

