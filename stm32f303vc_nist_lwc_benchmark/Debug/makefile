################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F3xx_HAL_Driver/Src/subdir.mk
-include Core/algos/xoodyak/Implementations/crypto_hash/xoodyakv1/ref/subdir.mk
-include Core/algos/xoodyak/Implementations/crypto_aead/xoodyakv1/ref/subdir.mk
-include Core/algos/gift-cofb/Implementations/crypto_aead/giftcofb128v1/ref/subdir.mk
-include Core/algos/forkae/Implementations/crypto_aead/saefforkskinnyb128t256n120v1/ref/subdir.mk
-include Core/algos/forkae/Implementations/crypto_aead/saefforkskinnyb128t192n56v1/ref/subdir.mk
-include Core/algos/forkae/Implementations/crypto_aead/paefforkskinnyb64t192n48v1/ref/subdir.mk
-include Core/algos/forkae/Implementations/crypto_aead/paefforkskinnyb128t288n104v1/ref/subdir.mk
-include Core/algos/forkae/Implementations/crypto_aead/paefforkskinnyb128t256n112v1/ref/subdir.mk
-include Core/algos/forkae/Implementations/crypto_aead/paefforkskinnyb128t192n48v1/ref/subdir.mk
-include Core/algos/estate/Implementations/crypto_aead/sestatetweaes128v1/ref/subdir.mk
-include Core/algos/estate/Implementations/crypto_aead/estatetwegift128v1/ref/subdir.mk
-include Core/algos/estate/Implementations/crypto_aead/estatetweaes128v1/ref/subdir.mk
-include Core/algos/elephant/Implementations/crypto_aead/elephant200v1/ref/subdir.mk
-include Core/algos/elephant/Implementations/crypto_aead/elephant176v1/ref/subdir.mk
-include Core/algos/elephant/Implementations/crypto_aead/elephant160v1/ref/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := stm32f303vc_nist_lwc_becnchmark
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX := 
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME).$(BUILD_ARTIFACT_EXTENSION)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
stm32f303vc_nist_lwc_becnchmark.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
stm32f303vc_nist_lwc_becnchmark.list \

OBJCOPY_HEX += \
stm32f303vc_nist_lwc_becnchmark.hex \

OBJCOPY_BIN += \
stm32f303vc_nist_lwc_becnchmark.bin \


# All Target
all: main-build

# Main-build Target
main-build: stm32f303vc_nist_lwc_becnchmark.elf secondary-outputs

# Tool invocations
stm32f303vc_nist_lwc_becnchmark.elf: $(OBJS) $(USER_OBJS) C:\Users\Vasilii\STM32CubeIDE\workspace_1.1.0\nist_lwc_becnchmark\STM32F303VCTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "stm32f303vc_nist_lwc_becnchmark.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\Vasilii\STM32CubeIDE\workspace_1.1.0\nist_lwc_becnchmark\STM32F303VCTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="stm32f303vc_nist_lwc_becnchmark.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

stm32f303vc_nist_lwc_becnchmark.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "stm32f303vc_nist_lwc_becnchmark.list"
	@echo 'Finished building: $@'
	@echo ' '

stm32f303vc_nist_lwc_becnchmark.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "stm32f303vc_nist_lwc_becnchmark.hex"
	@echo 'Finished building: $@'
	@echo ' '

stm32f303vc_nist_lwc_becnchmark.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "stm32f303vc_nist_lwc_becnchmark.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified
.SECONDARY:

-include ../makefile.targets
