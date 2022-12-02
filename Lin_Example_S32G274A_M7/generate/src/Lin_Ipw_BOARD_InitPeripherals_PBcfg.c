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


/**
*   @file    Lin_Ipw_PBcfg.c
*
*   @addtogroup LIN_IPW
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
#include "Lin_Ipw_Cfg.h"
#include "Linflexd_Lin_Ip_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C                     43
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C      4
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C      4
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C   0
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C              3
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C              0
#define LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C              2

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Lin_Ipw_Cfg.h */
#if (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != LIN_IPW_CFG_VENDOR_ID)
    #error "Lin_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Lin_Ipw_Cfg.h have different vendor ids"
#endif
#if ((LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != LIN_IPW_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C    != LIN_IPW_CFG_AR_RELEASE_MINOR_VERSION) || \
     (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C != LIN_IPW_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AUTOSAR Version Numbers of Lin_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Lin_Ipw_Cfg.h are different"
#endif
#if ((LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C != LIN_IPW_CFG_SW_MAJOR_VERSION) || \
     (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C != LIN_IPW_CFG_SW_MINOR_VERSION) || \
     (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C != LIN_IPW_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lin_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Lin_Ipw_Cfg.h are different"
#endif

/* Checks against Linflexd_Lin_Ip_Cfg.h */
#if (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != LINFLEXD_LIN_IP_CFG_VENDOR_ID)
    #error "Lin_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Linflexd_Lin_Ip_Cfg.h have different vendor ids"
#endif
#if ((LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != LINFLEXD_LIN_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C    != LINFLEXD_LIN_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C != LINFLEXD_LIN_IP_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AUTOSAR Version Numbers of Lin_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Linflexd_Lin_Ip_Cfg.h are different"
#endif
#if ((LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C != LINFLEXD_LIN_IP_CFG_SW_MAJOR_VERSION) || \
     (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C != LINFLEXD_LIN_IP_CFG_SW_MINOR_VERSION) || \
     (LIN_IPW_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C != LINFLEXD_LIN_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lin_Ipw_BOARD_INITPERIPHERALS_PBcfg.c and Linflexd_Lin_Ip_Cfg.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/
#define LIN_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"

/**
* @brief   Export LINFLEXD_LIN configurations.
*/
LINFLEXD_LIN_IP_CONFIG_EXT

#define LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/
#define LIN_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"

/**
* @brief          Hardware configuration for Lin Hardware Instance LINFLEXD_2 - Configuration:
*
* 
*/

const Lin_HwConfigType Lin_Ipw_pHwConfigPB_0_BOARD_INITPERIPHERALS =
{
    2U,       /* LINFLEXD_2 */
#if (LIN_WAKEUP_DETECTION == STD_ON)

    (boolean)FALSE, /* Wakeup support disabled */
    (EcuM_WakeupSourceType)LIN_NONE_ECUM_WAKEUP_SOURCE_REF, /* None Wakeup Source was referred */
#endif
    LIN_MASTER_NODE, /* Lin Node Type */

    &Linflexd_Lin_Ip_pHwConfigPB_0_BOARD_INITPERIPHERALS
};

#define LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

