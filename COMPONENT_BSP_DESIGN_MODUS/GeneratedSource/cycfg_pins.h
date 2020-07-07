/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.1.0.1266
* psoc4pdl 1.0.0.899
* personalities_2.0 2.0.0.0
* udd_2.0 2.0.0.299
*
********************************************************************************
* Copyright 2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_CSD_CSH2_ENABLED 1U
#define CYBSP_CSD_CSH2_PORT GPIO_PRT0
#define CYBSP_CSD_CSH2_PORT_NUM 0U
#define CYBSP_CSD_CSH2_PIN 1U
#define CYBSP_CSD_CSH2_NUM 1U
#define CYBSP_CSD_CSH2_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_CSH2_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_1_HSIOM
	#define ioss_0_port_0_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_CSH2_HSIOM ioss_0_port_0_pin_1_HSIOM
#define CYBSP_CSD_CSH2_IRQ ioss_interrupts_gpio_0_IRQn
#define CYBSP_CSD_BTN_TX_ENABLED 1U
#define CYBSP_CSD_BTN_TX_PORT GPIO_PRT0
#define CYBSP_CSD_BTN_TX_PORT_NUM 0U
#define CYBSP_CSD_BTN_TX_PIN 2U
#define CYBSP_CSD_BTN_TX_NUM 2U
#define CYBSP_CSD_BTN_TX_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_BTN_TX_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_2_HSIOM
	#define ioss_0_port_0_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_BTN_TX_HSIOM ioss_0_port_0_pin_2_HSIOM
#define CYBSP_CSD_BTN_TX_IRQ ioss_interrupts_gpio_0_IRQn
#define CYBSP_CSD_SLD_TX_ENABLED 1U
#define CYBSP_CSD_SLD_TX_PORT GPIO_PRT1
#define CYBSP_CSD_SLD_TX_PORT_NUM 1U
#define CYBSP_CSD_SLD_TX_PIN 1U
#define CYBSP_CSD_SLD_TX_NUM 1U
#define CYBSP_CSD_SLD_TX_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define CYBSP_CSD_SLD_TX_INIT_DRIVESTATE 0
#ifndef ioss_0_port_1_pin_1_HSIOM
	#define ioss_0_port_1_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD_TX_HSIOM ioss_0_port_1_pin_1_HSIOM
#define CYBSP_CSD_SLD_TX_IRQ ioss_interrupts_gpio_1_IRQn
#define CYBSP_CSD_SLD0_ENABLED 1U
#define CYBSP_CSD_SLD0_PORT GPIO_PRT2
#define CYBSP_CSD_SLD0_PORT_NUM 2U
#define CYBSP_CSD_SLD0_PIN 7U
#define CYBSP_CSD_SLD0_NUM 7U
#define CYBSP_CSD_SLD0_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_SLD0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_7_HSIOM
	#define ioss_0_port_2_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD0_HSIOM ioss_0_port_2_pin_7_HSIOM
#define CYBSP_CSD_SLD0_IRQ ioss_interrupts_gpio_2_IRQn
#define CYBSP_SWDIO_ENABLED 1U
#define CYBSP_SWDIO_PORT GPIO_PRT3
#define CYBSP_SWDIO_PORT_NUM 3U
#define CYBSP_SWDIO_PIN 2U
#define CYBSP_SWDIO_NUM 2U
#define CYBSP_SWDIO_DRIVEMODE CY_GPIO_DM_PULLUP
#define CYBSP_SWDIO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_2_HSIOM
	#define ioss_0_port_3_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDIO_HSIOM ioss_0_port_3_pin_2_HSIOM
#define CYBSP_SWDIO_IRQ ioss_interrupts_gpio_3_IRQn
#define CYBSP_SWDCK_ENABLED 1U
#define CYBSP_SWDCK_PORT GPIO_PRT3
#define CYBSP_SWDCK_PORT_NUM 3U
#define CYBSP_SWDCK_PIN 3U
#define CYBSP_SWDCK_NUM 3U
#define CYBSP_SWDCK_DRIVEMODE CY_GPIO_DM_PULLDOWN
#define CYBSP_SWDCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_3_HSIOM
	#define ioss_0_port_3_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDCK_HSIOM ioss_0_port_3_pin_3_HSIOM
#define CYBSP_SWDCK_IRQ ioss_interrupts_gpio_3_IRQn
#define CYBSP_CMOD_ENABLED 1U
#define CYBSP_CMOD_PORT GPIO_PRT4
#define CYBSP_CMOD_PORT_NUM 4U
#define CYBSP_CMOD_PIN 1U
#define CYBSP_CMOD_NUM 1U
#define CYBSP_CMOD_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CMOD_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_1_HSIOM
	#define ioss_0_port_4_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CMOD_HSIOM ioss_0_port_4_pin_1_HSIOM
#define CYBSP_CMOD_IRQ ioss_interrupts_gpio_4_IRQn
#define CYBSP_CINTA_ENABLED 1U
#define CYBSP_CINTA_PORT GPIO_PRT4
#define CYBSP_CINTA_PORT_NUM 4U
#define CYBSP_CINTA_PIN 2U
#define CYBSP_CINTA_NUM 2U
#define CYBSP_CINTA_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CINTA_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_2_HSIOM
	#define ioss_0_port_4_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CINTA_HSIOM ioss_0_port_4_pin_2_HSIOM
#define CYBSP_CINTA_IRQ ioss_interrupts_gpio_4_IRQn
#define CYBSP_CINTB_ENABLED 1U
#define CYBSP_CINTB_PORT GPIO_PRT4
#define CYBSP_CINTB_PORT_NUM 4U
#define CYBSP_CINTB_PIN 3U
#define CYBSP_CINTB_NUM 3U
#define CYBSP_CINTB_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CINTB_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_3_HSIOM
	#define ioss_0_port_4_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CINTB_HSIOM ioss_0_port_4_pin_3_HSIOM
#define CYBSP_CINTB_IRQ ioss_interrupts_gpio_4_IRQn
#define CYBSP_CSD_BTN2_ENABLED 1U
#define CYBSP_CSD_BTN2_PORT GPIO_PRT4
#define CYBSP_CSD_BTN2_PORT_NUM 4U
#define CYBSP_CSD_BTN2_PIN 4U
#define CYBSP_CSD_BTN2_NUM 4U
#define CYBSP_CSD_BTN2_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_BTN2_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_4_HSIOM
	#define ioss_0_port_4_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_BTN2_HSIOM ioss_0_port_4_pin_4_HSIOM
#define CYBSP_CSD_BTN2_IRQ ioss_interrupts_gpio_4_IRQn
#define CYBSP_CSD_BTN1_ENABLED 1U
#define CYBSP_CSD_BTN1_PORT GPIO_PRT4
#define CYBSP_CSD_BTN1_PORT_NUM 4U
#define CYBSP_CSD_BTN1_PIN 5U
#define CYBSP_CSD_BTN1_NUM 5U
#define CYBSP_CSD_BTN1_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_BTN1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_5_HSIOM
	#define ioss_0_port_4_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_BTN1_HSIOM ioss_0_port_4_pin_5_HSIOM
#define CYBSP_CSD_BTN1_IRQ ioss_interrupts_gpio_4_IRQn
#define CYBSP_CSD_BTN0_ENABLED 1U
#define CYBSP_CSD_BTN0_PORT GPIO_PRT4
#define CYBSP_CSD_BTN0_PORT_NUM 4U
#define CYBSP_CSD_BTN0_PIN 6U
#define CYBSP_CSD_BTN0_NUM 6U
#define CYBSP_CSD_BTN0_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_BTN0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_6_HSIOM
	#define ioss_0_port_4_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_BTN0_HSIOM ioss_0_port_4_pin_6_HSIOM
#define CYBSP_CSD_BTN0_IRQ ioss_interrupts_gpio_4_IRQn
#define CYBSP_CSD_SLD1_ENABLED 1U
#define CYBSP_CSD_SLD1_PORT GPIO_PRT6
#define CYBSP_CSD_SLD1_PORT_NUM 6U
#define CYBSP_CSD_SLD1_PIN 0U
#define CYBSP_CSD_SLD1_NUM 0U
#define CYBSP_CSD_SLD1_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_SLD1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_0_HSIOM
	#define ioss_0_port_6_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD1_HSIOM ioss_0_port_6_pin_0_HSIOM
#define CYBSP_CSD_SLD1_IRQ ioss_interrupts_gpio_6_IRQn
#define CYBSP_CSD_SLD2_ENABLED 1U
#define CYBSP_CSD_SLD2_PORT GPIO_PRT6
#define CYBSP_CSD_SLD2_PORT_NUM 6U
#define CYBSP_CSD_SLD2_PIN 1U
#define CYBSP_CSD_SLD2_NUM 1U
#define CYBSP_CSD_SLD2_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_SLD2_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_1_HSIOM
	#define ioss_0_port_6_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD2_HSIOM ioss_0_port_6_pin_1_HSIOM
#define CYBSP_CSD_SLD2_IRQ ioss_interrupts_gpio_6_IRQn
#define CYBSP_CSD_SLD3_ENABLED 1U
#define CYBSP_CSD_SLD3_PORT GPIO_PRT6
#define CYBSP_CSD_SLD3_PORT_NUM 6U
#define CYBSP_CSD_SLD3_PIN 2U
#define CYBSP_CSD_SLD3_NUM 2U
#define CYBSP_CSD_SLD3_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_SLD3_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_2_HSIOM
	#define ioss_0_port_6_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD3_HSIOM ioss_0_port_6_pin_2_HSIOM
#define CYBSP_CSD_SLD3_IRQ ioss_interrupts_gpio_6_IRQn
#define CYBSP_CSD_SLD4_ENABLED 1U
#define CYBSP_CSD_SLD4_PORT GPIO_PRT6
#define CYBSP_CSD_SLD4_PORT_NUM 6U
#define CYBSP_CSD_SLD4_PIN 4U
#define CYBSP_CSD_SLD4_NUM 4U
#define CYBSP_CSD_SLD4_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_SLD4_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_4_HSIOM
	#define ioss_0_port_6_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD4_HSIOM ioss_0_port_6_pin_4_HSIOM
#define CYBSP_CSD_SLD4_IRQ ioss_interrupts_gpio_6_IRQn
#define CYBSP_CSD_SLD5_ENABLED 1U
#define CYBSP_CSD_SLD5_PORT GPIO_PRT6
#define CYBSP_CSD_SLD5_PORT_NUM 6U
#define CYBSP_CSD_SLD5_PIN 5U
#define CYBSP_CSD_SLD5_NUM 5U
#define CYBSP_CSD_SLD5_DRIVEMODE CY_GPIO_DM_ANALOG
#define CYBSP_CSD_SLD5_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_5_HSIOM
	#define ioss_0_port_6_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_CSD_SLD5_HSIOM ioss_0_port_6_pin_5_HSIOM
#define CYBSP_CSD_SLD5_IRQ ioss_interrupts_gpio_6_IRQn

extern const cy_stc_gpio_pin_config_t CYBSP_CSD_CSH2_config;
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_BTN_TX_config;
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD_TX_config;
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD0_config;
extern const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config;
extern const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config;
extern const cy_stc_gpio_pin_config_t CYBSP_CMOD_config;
extern const cy_stc_gpio_pin_config_t CYBSP_CINTA_config;
extern const cy_stc_gpio_pin_config_t CYBSP_CINTB_config;
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_BTN2_config;
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_BTN1_config;
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_BTN0_config;
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD1_config;
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD2_config;
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD3_config;
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD4_config;
extern const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD5_config;

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */