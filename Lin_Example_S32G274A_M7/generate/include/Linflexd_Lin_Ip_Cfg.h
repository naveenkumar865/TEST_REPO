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

#ifndef LINFLEXD_LIN_IP_CFG_H
#define LINFLEXD_LIN_IP_CFG_H

/**
*   @file
*
*   @addtogroup LINFLEXD_IP
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
* 4) user callback header files
==================================================================================================*/
#include "Mcal.h"
#include "Linflexd_Lin_Ip_Types.h"
#include "S32G274A_LINFLEXD.h"
#include "Linflexd_Lin_Ip_BOARD_InitPeripherals_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define LINFLEXD_LIN_IP_CFG_VENDOR_ID                    43
#define LINFLEXD_LIN_IP_CFG_AR_RELEASE_MAJOR_VERSION     4
#define LINFLEXD_LIN_IP_CFG_AR_RELEASE_MINOR_VERSION     4
#define LINFLEXD_LIN_IP_CFG_AR_RELEASE_REVISION_VERSION  0
#define LINFLEXD_LIN_IP_CFG_SW_MAJOR_VERSION             3
#define LINFLEXD_LIN_IP_CFG_SW_MINOR_VERSION             0
#define LINFLEXD_LIN_IP_CFG_SW_PATCH_VERSION             2

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Linflexd_Lin_Ip_BOARD_InitPeripherals_PBcfg.h */
#if (LINFLEXD_LIN_IP_CFG_VENDOR_ID != LINFLEXD_LIN_IP_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID)
    #error "Linflexd_Lin_Ip_Cfg.h and Linflexd_Lin_Ip_BOARD_InitPeripherals_PBcfg.h have different vendor ids"
#endif

#if ((LINFLEXD_LIN_IP_CFG_AR_RELEASE_MAJOR_VERSION      != LINFLEXD_LIN_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (LINFLEXD_LIN_IP_CFG_AR_RELEASE_MINOR_VERSION      != LINFLEXD_LIN_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (LINFLEXD_LIN_IP_CFG_AR_RELEASE_REVISION_VERSION   != LINFLEXD_LIN_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AUTOSAR Version Numbers of Linflexd_Lin_Ip_Cfg.h and Linflexd_Lin_Ip_BOARD_InitPeripherals_PBcfg.h are different"
#endif
#if ((LINFLEXD_LIN_IP_CFG_SW_MAJOR_VERSION != LINFLEXD_LIN_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION) || \
     (LINFLEXD_LIN_IP_CFG_SW_MINOR_VERSION != LINFLEXD_LIN_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION) || \
     (LINFLEXD_LIN_IP_CFG_SW_PATCH_VERSION != LINFLEXD_LIN_IP_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Linflexd_Lin_Ip_Cfg.h and Linflexd_Lin_Ip_BOARD_InitPeripherals_PBcfg.h are different"
#endif

#if (LINFLEXD_LIN_IP_CFG_VENDOR_ID != LINFLEXD_LIN_IP_TYPES_VENDOR_ID)
    #error "Linflexd_Lin_Ip_Cfg.h and Linflexd_Lin_Ip_Types.h have different vendor ids"
#endif

#if ((LINFLEXD_LIN_IP_CFG_AR_RELEASE_MAJOR_VERSION      != LINFLEXD_LIN_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (LINFLEXD_LIN_IP_CFG_AR_RELEASE_MINOR_VERSION      != LINFLEXD_LIN_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (LINFLEXD_LIN_IP_CFG_AR_RELEASE_REVISION_VERSION   != LINFLEXD_LIN_IP_TYPES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AUTOSAR Version Numbers of Linflexd_Lin_Ip_Cfg.h and Linflexd_Lin_Ip_Types.h are different"
#endif
#if ((LINFLEXD_LIN_IP_CFG_SW_MAJOR_VERSION != LINFLEXD_LIN_IP_TYPES_SW_MAJOR_VERSION) || \
     (LINFLEXD_LIN_IP_CFG_SW_MINOR_VERSION != LINFLEXD_LIN_IP_TYPES_SW_MINOR_VERSION) || \
     (LINFLEXD_LIN_IP_CFG_SW_PATCH_VERSION != LINFLEXD_LIN_IP_TYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Linflexd_Lin_Ip_Cfg.h and Linflexd_Lin_Ip_Types.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Mcal.h header file are of the same Autosar version */
    #if ((LINFLEXD_LIN_IP_CFG_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (LINFLEXD_LIN_IP_CFG_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION) \
        )
        #error "AUTOSAR Version Numbers of Linflexd_Lin_Ip_Cfg.h and Mcal.h are different"
    #endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define LINFLEXD_LIN_IP_CONFIG_EXT \
     LINFLEXD_LIN_IP_CONFIG_BOARD_INITPERIPHERALS_PB \
/**
* @brief   Switches the Development Error Detection and Notification ON or OFF.
*
*
*/
#define LINFLEXD_LIN_IP_DEV_ERROR_DETECT            (STD_OFF)  /*!< Development error detection */

/**
* @brief   Number of total number of instances
*
*
*/
#define LINFLEXD_LIN_IP_NUMBER_OF_INSTANCES       (3U) /*!< Number of available hardware instances */

/**
* @brief          Lin Osif source counter
* @details        This parameter is used to select between different OsIf counter implementation
*
* 
*/
#define  LINFLEXD_LIN_IP_TIMEOUT_TYPE                      (OSIF_COUNTER_DUMMY)

/**
* @brief   Number of loops before returning STATUS_TIMEOUT.
*
*
*/
#define LINFLEXD_LIN_IP_TIMEOUT_VALUE_US                    (65535)

/**
* @brief   Enable/Disable timeout feature.
*
*
*/
#define LINFLEXD_LIN_IP_DISABLE_FRAME_TIMEOUT      (STD_OFF)

/**
* @brief        Support for User mode.
* @details      If this parameter has been configured to "TRUE" the LIN driver can be executed from both supervisor and user mode.
*               Currently this feature is not available.
*
*
*/
#define LINFLEXD_LIN_IP_ENABLE_USER_MODE_SUPPORT       (STD_OFF)
/**
* @brief          Enable Non-Autosar API for Dual-Clock support.
* @details        Enable/Disable API Lin_SetClockMode() to set the
*                 clock to be used by the LIN driver (Normal clock: default mode;
*                 Alternate clock: when the driver is in Low-Power mode).
*                 This can be set to STD_ON only if it is activated from xdm file:
*                 LinClockRef_Alternate is enable.
*
* @api
*/
#define LINFLEXD_LIN_IP_DUAL_CLOCK_MODE       (STD_OFF) /* Disable API Lin_SetClockMode */

/** Check the driver user mode is enabled only when the MCAL_ENABLE_USER_MODE_SUPPORT is enabled */
#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == LINFLEXD_LIN_IP_ENABLE_USER_MODE_SUPPORT)
    #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running LIN in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined.
  #endif /* (STD_ON == LINFLEXD_LIN_IP_ENABLE_USER_MODE_SUPPORT) */
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */

#ifdef LINFLEXD_LIN_IP_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == LINFLEXD_LIN_IP_ENABLE_USER_MODE_SUPPORT)
        #ifdef MCAL_LINFLEX_REG_PROT_AVAILABLE
#define LINFLEXD_LIN_IP_SET_USER_ACCESS_ALLOWED_AVAILABLE (STD_ON)
        #endif
    #endif
#endif

#if (LINFLEXD_LIN_IP_DEV_ERROR_DETECT == STD_ON)
    #define LINFLEXD_LIN_IP_DEV_ASSERT(x)      DevAssert(x)
#endif /* (LINFLEXD_LIN_IP_DEV_ERROR_DETECT == STD_ON) */
/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define LIN_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Lin_MemMap.h"

extern Linflexd_Lin_Ip_StateStructType Linflexd_Lin_Ip_axStateStructure[LINFLEXD_LIN_IP_NUMBER_OF_INSTANCES];

#define LIN_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Lin_MemMap.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define LIN_START_SEC_CODE
#include "Lin_MemMap.h"

extern void Lin_Ipw_Callback(const uint8 Instance, const Linflexd_Lin_Ip_StateStructType *LinflexdStateStruct);

#define LIN_STOP_SEC_CODE
#include "Lin_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif  /* LINFLEXD_LIN_IP_CFG_H */

