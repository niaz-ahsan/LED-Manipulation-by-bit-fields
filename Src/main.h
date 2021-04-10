/*
 * main.h
 *
 *  Created on: Apr 9, 2021
 *      Author: Niaz
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

typedef struct {
	uint32_t gpio_a_en		:1;
	uint32_t gpio_b_en		:1;
	uint32_t gpio_c_en		:1;
	uint32_t gpio_d_en		:1;
	uint32_t gpio_e_en		:1;
	uint32_t gpio_f_en		:1;
	uint32_t gpio_g_en		:1;
	uint32_t gpio_h_en		:1;
	uint32_t gpio_i_en		:1;
	uint32_t gpio_j_en		:1;
	uint32_t gpio_k_en		:1;
	uint32_t res_1			:1;
	uint32_t crc_en			:1;
	uint32_t res_2			:3;
	uint32_t res_3			:2;
	uint32_t bkpsram_en		:1;
	uint32_t res_4			:1;
	uint32_t ccm_dat_aram_en:1;
	uint32_t dma1_en		:1;
	uint32_t dma2_en		:1;
	uint32_t dma2d_en		:1;
	uint32_t res_5			:1;
	uint32_t eth_mac_en		:1;
	uint32_t eth_mac_txe	:1;
	uint32_t eth_mac_rxe	:1;
	uint32_t eth_mac_ptp_en	:1;
	uint32_t otghs_en		:1;
	uint32_t otghs_ulpi_en	:1;
	uint32_t res_6			:1;
} RCC_AHB1ENR_t;

typedef struct {
	uint32_t pin_0		:2;
	uint32_t pin_1		:2;
	uint32_t pin_2		:2;
	uint32_t pin_3		:2;
	uint32_t pin_4		:2;
	uint32_t pin_5		:2;
	uint32_t pin_6		:2;
	uint32_t pin_7		:2;
	uint32_t pin_8		:2;
	uint32_t pin_9		:2;
	uint32_t pin_10		:2;
	uint32_t pin_11		:2;
	uint32_t pin_12		:2;
	uint32_t pin_13		:2;
	uint32_t pin_14		:2;
	uint32_t pin_15		:2;
} GPIOx_MODER_t;

typedef struct {
	uint32_t pin_0		:1;
	uint32_t pin_1		:1;
	uint32_t pin_2		:1;
	uint32_t pin_3		:1;
	uint32_t pin_4		:1;
	uint32_t pin_5		:1;
	uint32_t pin_6		:1;
	uint32_t pin_7		:1;
	uint32_t pin_8		:1;
	uint32_t pin_9		:1;
	uint32_t pin_10		:1;
	uint32_t pin_11		:1;
	uint32_t pin_12		:1;
	uint32_t pin_13		:1;
	uint32_t pin_14		:1;
	uint32_t pin_15		:1;
	uint32_t res		:16;
} GPIOx_ODR_t;

#endif /* MAIN_H_ */
