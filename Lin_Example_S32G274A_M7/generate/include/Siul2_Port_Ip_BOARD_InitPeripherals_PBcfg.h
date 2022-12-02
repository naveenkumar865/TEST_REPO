/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : SIUL2
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 3.0.2
*   Build Version        : S32_RTD_3_0_2_D2203_ASR_REL_4_4_REV_0000_20220331
*
*   (c) Copyright 2022 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef SIUL2_PORT_IP_BOARD_InitPeripherals_PBCFG_H
#define SIUL2_PORT_IP_BOARD_InitPeripherals_PBCFG_H

/**
*   @file    Siul2_Port_Ip_BOARD_InitPeripherals_PBcfg.h
*
*   @addtogroup Port_CFG
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SIUL2_PORT_IP_VENDOR_ID_BOARD_InitPeripherals_PBCFG_H                       43
#define SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_BOARD_InitPeripherals_PBCFG_H        4
#define SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_BOARD_InitPeripherals_PBCFG_H        4
#define SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_BOARD_InitPeripherals_PBCFG_H     0
#define SIUL2_PORT_IP_SW_MAJOR_VERSION_BOARD_InitPeripherals_PBCFG_H                3
#define SIUL2_PORT_IP_SW_MINOR_VERSION_BOARD_InitPeripherals_PBCFG_H                0
#define SIUL2_PORT_IP_SW_PATCH_VERSION_BOARD_InitPeripherals_PBCFG_H                2

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
/*! @brief User configuration structure */
#define SIUL2_PORT_CONFIG_BOARD_InitPeripherals_PB \
extern const Siul2_Port_Ip_PinSettingsConfig g_pin_mux_InitConfigArr_BOARD_InitPeripherals[NUM_OF_CONFIGURED_PINS];

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* SIUL2_PORT_IP_BOARD_InitPeripherals_PBCFG_H */

