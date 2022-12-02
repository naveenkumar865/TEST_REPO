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
*   @file    Lin_PBcfg.c
*   @implements Lin_PBcfg.c_Artifact
*
*   @defgroup lin_driver LIN Driver
*   @addtogroup  lin_driver LIN Driver
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "StandardTypes.h"
#include "Lin_Cfg.h"
#include "Lin_Ipw_Cfg.h"

#if (STD_OFF == LIN_DISABLE_DEM_REPORT_ERROR_STATUS)
#include "Dem.h"
#endif /* STD_OFF == LIN_DISABLE_DEM_REPORT_ERROR_STATUS */

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define LIN_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C                     43
#define LIN_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C      4
#define LIN_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C      4
#define LIN_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C   0
#define LIN_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C              3
#define LIN_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C              0
#define LIN_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C              2

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Lin_Cfg.h */
#if (LIN_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != LIN_CFG_VENDOR_ID)
    #error "Lin_BOARD_INITPERIPHERALS_PBcfg.c and Lin_Cfg.h have different vendor ids"
#endif
#if ((LIN_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != LIN_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (LIN_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C    != LIN_CFG_AR_RELEASE_MINOR_VERSION) || \
     (LIN_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C != LIN_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AUTOSAR Version Numbers of Lin_BOARD_INITPERIPHERALS_PBcfg.c and Lin_Cfg.h are different"
#endif
#if ((LIN_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C != LIN_CFG_SW_MAJOR_VERSION) || \
     (LIN_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C != LIN_CFG_SW_MINOR_VERSION) || \
     (LIN_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C != LIN_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lin_BOARD_INITPERIPHERALS_PBcfg.c and Lin_Cfg.h are different"
#endif

/* Checks against Lin_Ipw_Cfg.h */
#if (LIN_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != LIN_IPW_CFG_VENDOR_ID)
    #error "Lin_BOARD_INITPERIPHERALS_PBcfg.c and Lin_Ipw_Cfg.h have different vendor ids"
#endif
#if ((LIN_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != LIN_IPW_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (LIN_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C    != LIN_IPW_CFG_AR_RELEASE_MINOR_VERSION) || \
     (LIN_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C != LIN_IPW_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AUTOSAR Version Numbers of Lin_BOARD_INITPERIPHERALS_PBcfg.c and Lin_Ipw_Cfg.h are different"
#endif
#if ((LIN_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C != LIN_IPW_CFG_SW_MAJOR_VERSION) || \
     (LIN_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C != LIN_IPW_CFG_SW_MINOR_VERSION) || \
     (LIN_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C != LIN_IPW_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lin_BOARD_INITPERIPHERALS_PBcfg.c and Lin_Ipw_Cfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if (STD_OFF == LIN_DISABLE_DEM_REPORT_ERROR_STATUS)
        /* Checks against Dem.h */
        #if ((LIN_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C != DEM_AR_RELEASE_MAJOR_VERSION) || \
             (LIN_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C != DEM_AR_RELEASE_MINOR_VERSION) \
            )
            #error "AUTOSAR Version Numbers of Lin_BOARD_INITPERIPHERALS_PBcfg.c and Dem.h are different"
        #endif
    #endif
    /* Check if current file and StandardTypes.h header file are of the same Autosar version */
    #if ((LIN_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C != STD_AR_RELEASE_MAJOR_VERSION) || \
         (LIN_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C != STD_AR_RELEASE_MINOR_VERSION) \
        )
        #error "AutoSar Version Numbers of Lin_BOARD_INITPERIPHERALS_PBcfg.c and StandardTypes.h are different"
    #endif
#endif

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define LIN_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"

/**
* @brief   Export IPW configurations.
*/
LIN_IPW_CONFIG_EXT

#define LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
/**
* @brief        All CoreIDs are supported by LIN driver.
*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define LIN_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"


/**
* @brief          Configuration for Lin Channel 0 - Configuration:
*                 LinGlobalConfig.
*
*
*/
const Lin_ChannelConfigType Lin_LinChannel_0_BOARD_INITPERIPHERALS_UnAllocatedPar =
{
    (uint8)0U, /* Lin Channel ID */

    &Lin_Ipw_pHwConfigPB_0_BOARD_INITPERIPHERALS, /* Pointer to the hardware configuration*/

    LIN_UNALLOCATEDPAR_CORE_ID,         /* Partition core id of channel */

    (boolean)TRUE
};

/**
* @brief          Lin Configuration data for LinGlobalConfig_BOARD_INITPERIPHERALS.
*
*/
static const Lin_ConfigType Lin_Config =
{
    LIN_UNALLOCATEDPAR_CORE_ID,            /** Core Id */

    {
        /**
        * @brief   Configuration for Lin Channel 0.
        */
        &Lin_LinChannel_0_BOARD_INITPERIPHERALS_UnAllocatedPar
    }
};

/**
* @brief          Lin Configuration data for Lin_PBCfgVariantPredefined[LIN_MAX_PARTITIONS].
*
*/
const Lin_ConfigType * const Lin_PBCfgVariantPredefined[LIN_MAX_PARTITIONS] =
{
    &Lin_Config
};
#define LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

