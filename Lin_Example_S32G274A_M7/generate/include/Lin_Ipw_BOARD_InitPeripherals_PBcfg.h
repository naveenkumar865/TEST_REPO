/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : LINFLEXD
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


#ifndef LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_H
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_H

/**
*   @file
*   
*   @internal 
*   @addtogroup LIN_IPW
*   @{
*/


#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Lin_Ipw_Types.h"
/*==================================================================================================
                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID                     43
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION      4
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION      4
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION   0
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION              3
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION              0
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION              2

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Checks against Lin_Ipw_Types.h */
#if (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID != LIN_IPW_TYPES_VENDOR_ID)
    #error "Lin_Ipw_BOARD_INITPERIPHERALS_PBcfg.h and Lin_Ipw_Types.h have different vendor ids"
#endif
#if ((LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION    != LIN_IPW_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION    != LIN_IPW_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION != LIN_IPW_TYPES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Lin_Ipw_BOARD_INITPERIPHERALS_PBcfg.h and Lin_Ipw_Types.h are different"
#endif
/* Check if current file and Lin_Ipw_Types.h header file are of the same Software version */
#if ((LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION != LIN_IPW_TYPES_SW_MAJOR_VERSION) || \
     (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION != LIN_IPW_TYPES_SW_MINOR_VERSION) || \
     (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION != LIN_IPW_TYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lin_Ipw_BOARD_INITPERIPHERALS_PBcfg.h and Lin_Ipw_Types.h are different"
#endif

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
#define LIN_IPW_CONFIG_BOARD_INITPERIPHERALS_PB \

    extern const Lin_HwConfigType Lin_Ipw_pHwConfigPB_0_BOARD_INITPERIPHERALS;\


/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_H */

