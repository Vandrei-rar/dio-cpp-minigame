################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/minigame-cores.cpp \
../src/minigame-dio.cpp 

CPP_DEPS += \
./src/minigame-cores.d \
./src/minigame-dio.d 

OBJS += \
./src/minigame-cores.o \
./src/minigame-dio.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/minigame-cores.d ./src/minigame-cores.o ./src/minigame-dio.d ./src/minigame-dio.o

.PHONY: clean-src

