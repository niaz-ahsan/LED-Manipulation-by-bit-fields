/**
 ******************************************************************************
 Problem Statement: Manipulate LEDs by using bit fields
 ******************************************************************************
 */

#include <stdint.h>
#include "main.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

// Orange LED
void turn_on_LD3(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr) {
	gpio_d_mode->pin_13 = 1; // enable pin 13 of GPIOD o/p Mode Register
	gpio_d_odr->pin_13 = 1; // enable pin 13 of GPIOD o/p Data Register
}

// Green LED
void turn_on_LD4(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr) {
	gpio_d_mode->pin_12 = 1; // enable pin 12 of GPIOD o/p Mode Register
	gpio_d_odr->pin_12 = 1; // enable pin 12 of GPIOD o/p Data Register
}

// Red LED
void turn_on_LD5(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr) {
	gpio_d_mode->pin_14 = 1; // enable pin 12 of GPIOD o/p Mode Register
	gpio_d_odr->pin_14 = 1; // enable pin 12 of GPIOD o/p Data Register
}

// Blue LED
void turn_on_LD6(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr) {
	gpio_d_mode->pin_15 = 1; // enable pin 15 of GPIOD o/p Mode Register
	gpio_d_odr->pin_15 = 1; // enable pin 15 of GPIOD o/p Data Register
}

int main(void)
{
	RCC_AHB1ENR_t volatile *const clock_ctrl_reg = (RCC_AHB1ENR_t*) 0x40023830;
	GPIOx_MODER_t volatile *const gpio_d_mode = (GPIOx_MODER_t*) 0x40020C00; // GPIOD Mode Register Address, all LEDs are connected to Port D pins
	GPIOx_ODR_t volatile *const gpio_d_odr = (GPIOx_ODR_t*) 0x40020C14; // GPIOD o/p Data Register

	// enable GPIOD
	clock_ctrl_reg->gpio_d_en = 1;

	turn_on_LD3(gpio_d_mode, gpio_d_odr);
	turn_on_LD4(gpio_d_mode, gpio_d_odr);
	turn_on_LD5(gpio_d_mode, gpio_d_odr);
	turn_on_LD6(gpio_d_mode, gpio_d_odr);

    /* Loop forever */
	for(;;);
}
