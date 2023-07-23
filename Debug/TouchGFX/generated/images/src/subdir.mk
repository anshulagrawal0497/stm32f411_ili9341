################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/BitmapDatabase.cpp \
../TouchGFX/generated/images/src/SVGDatabase.cpp \
../TouchGFX/generated/images/src/image_icon_keyboard_even_row.cpp \
../TouchGFX/generated/images/src/image_icon_keyboard_highlighted.cpp \
../TouchGFX/generated/images/src/image_icon_keyboard_odd_row.cpp \
../TouchGFX/generated/images/src/image_keyboard_background.cpp \
../TouchGFX/generated/images/src/image_keyboard_key_delete_highlighted.cpp \
../TouchGFX/generated/images/src/image_keyboard_key_highlighted.cpp \
../TouchGFX/generated/images/src/image_keyboard_key_num_highlighted.cpp \
../TouchGFX/generated/images/src/image_keyboard_key_shift_highlighted.cpp \
../TouchGFX/generated/images/src/image_keyboard_space_highlighted.cpp 

OBJS += \
./TouchGFX/generated/images/src/BitmapDatabase.o \
./TouchGFX/generated/images/src/SVGDatabase.o \
./TouchGFX/generated/images/src/image_icon_keyboard_even_row.o \
./TouchGFX/generated/images/src/image_icon_keyboard_highlighted.o \
./TouchGFX/generated/images/src/image_icon_keyboard_odd_row.o \
./TouchGFX/generated/images/src/image_keyboard_background.o \
./TouchGFX/generated/images/src/image_keyboard_key_delete_highlighted.o \
./TouchGFX/generated/images/src/image_keyboard_key_highlighted.o \
./TouchGFX/generated/images/src/image_keyboard_key_num_highlighted.o \
./TouchGFX/generated/images/src/image_keyboard_key_shift_highlighted.o \
./TouchGFX/generated/images/src/image_keyboard_space_highlighted.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/BitmapDatabase.d \
./TouchGFX/generated/images/src/SVGDatabase.d \
./TouchGFX/generated/images/src/image_icon_keyboard_even_row.d \
./TouchGFX/generated/images/src/image_icon_keyboard_highlighted.d \
./TouchGFX/generated/images/src/image_icon_keyboard_odd_row.d \
./TouchGFX/generated/images/src/image_keyboard_background.d \
./TouchGFX/generated/images/src/image_keyboard_key_delete_highlighted.d \
./TouchGFX/generated/images/src/image_keyboard_key_highlighted.d \
./TouchGFX/generated/images/src/image_keyboard_key_num_highlighted.d \
./TouchGFX/generated/images/src/image_keyboard_key_shift_highlighted.d \
./TouchGFX/generated/images/src/image_keyboard_space_highlighted.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/%.o TouchGFX/generated/images/src/%.su: ../TouchGFX/generated/images/src/%.cpp TouchGFX/generated/images/src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src

clean-TouchGFX-2f-generated-2f-images-2f-src:
	-$(RM) ./TouchGFX/generated/images/src/BitmapDatabase.d ./TouchGFX/generated/images/src/BitmapDatabase.o ./TouchGFX/generated/images/src/BitmapDatabase.su ./TouchGFX/generated/images/src/SVGDatabase.d ./TouchGFX/generated/images/src/SVGDatabase.o ./TouchGFX/generated/images/src/SVGDatabase.su ./TouchGFX/generated/images/src/image_icon_keyboard_even_row.d ./TouchGFX/generated/images/src/image_icon_keyboard_even_row.o ./TouchGFX/generated/images/src/image_icon_keyboard_even_row.su ./TouchGFX/generated/images/src/image_icon_keyboard_highlighted.d ./TouchGFX/generated/images/src/image_icon_keyboard_highlighted.o ./TouchGFX/generated/images/src/image_icon_keyboard_highlighted.su ./TouchGFX/generated/images/src/image_icon_keyboard_odd_row.d ./TouchGFX/generated/images/src/image_icon_keyboard_odd_row.o ./TouchGFX/generated/images/src/image_icon_keyboard_odd_row.su ./TouchGFX/generated/images/src/image_keyboard_background.d ./TouchGFX/generated/images/src/image_keyboard_background.o ./TouchGFX/generated/images/src/image_keyboard_background.su ./TouchGFX/generated/images/src/image_keyboard_key_delete_highlighted.d ./TouchGFX/generated/images/src/image_keyboard_key_delete_highlighted.o ./TouchGFX/generated/images/src/image_keyboard_key_delete_highlighted.su ./TouchGFX/generated/images/src/image_keyboard_key_highlighted.d ./TouchGFX/generated/images/src/image_keyboard_key_highlighted.o ./TouchGFX/generated/images/src/image_keyboard_key_highlighted.su ./TouchGFX/generated/images/src/image_keyboard_key_num_highlighted.d ./TouchGFX/generated/images/src/image_keyboard_key_num_highlighted.o ./TouchGFX/generated/images/src/image_keyboard_key_num_highlighted.su ./TouchGFX/generated/images/src/image_keyboard_key_shift_highlighted.d ./TouchGFX/generated/images/src/image_keyboard_key_shift_highlighted.o ./TouchGFX/generated/images/src/image_keyboard_key_shift_highlighted.su ./TouchGFX/generated/images/src/image_keyboard_space_highlighted.d ./TouchGFX/generated/images/src/image_keyboard_space_highlighted.o ./TouchGFX/generated/images/src/image_keyboard_space_highlighted.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src

