################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include generate/src/subdir.mk
-include generate/IntCtrl_Ip/subdir.mk
-include board/subdir.mk
-include RTD/src/subdir.mk
-include Project_Settings/Startup_Code/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_SIZE += \
Lin_Example_S32G274A_M7.siz \


# All Target
all: Lin_Example_S32G274A_M7.elf secondary-outputs

# Tool invocations
Lin_Example_S32G274A_M7.elf: $(OBJS) C:/Users/imnav/workspaceS32DS.3.4/Lin_Example_S32G274A_M7/Project_Settings/Linker_Files/linker_ram.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Standard S32DS C Linker'
	arm-none-eabi-gcc -o "Lin_Example_S32G274A_M7.elf" "@Lin_Example_S32G274A_M7.args"  $(USER_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

Lin_Example_S32G274A_M7.siz: Lin_Example_S32G274A_M7.elf
	@echo 'Invoking: Standard S32DS Print Size'
	arm-none-eabi-size --format=berkeley Lin_Example_S32G274A_M7.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
