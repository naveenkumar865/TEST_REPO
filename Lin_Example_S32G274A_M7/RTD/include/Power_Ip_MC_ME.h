/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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

#ifndef POWER_IP_MC_ME_H
#define POWER_IP_MC_ME_H

/**
*   @file       Power_Ip_MC_ME.h
*   @version    3.0.2
*
*   @brief   POWER IP driver header file.
*   @details POWER IP driver header file.
*
*   @addtogroup POWER_DRIVER Power Ip Driver
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
#include "Power_Ip_Types.h"
#include "StandardTypes.h"
#include "OsIf.h"
#include "Mcal.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define POWER_IP_MC_ME_VENDOR_ID                       43
#define POWER_IP_MC_ME_AR_RELEASE_MAJOR_VERSION        4
#define POWER_IP_MC_ME_AR_RELEASE_MINOR_VERSION        4
#define POWER_IP_MC_ME_AR_RELEASE_REVISION_VERSION     0
#define POWER_IP_MC_ME_SW_MAJOR_VERSION                3
#define POWER_IP_MC_ME_SW_MINOR_VERSION                0
#define POWER_IP_MC_ME_SW_PATCH_VERSION                2

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Power_Ip_MC_ME.h file and Power_Ip_Types.h file have same versions */
#if (POWER_IP_MC_ME_VENDOR_ID  != POWER_IP_TYPES_VENDOR_ID)
    #error "Power_Ip_MC_ME.h and Power_Ip_Types.h have different vendor IDs"
#endif

/* Check if Power_Ip_MC_ME.h file and Power_Ip_Types.h file are of the same Autosar version */
#if ((POWER_IP_MC_ME_AR_RELEASE_MAJOR_VERSION    != POWER_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_MC_ME_AR_RELEASE_MINOR_VERSION    != POWER_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_MC_ME_AR_RELEASE_REVISION_VERSION != POWER_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_MC_ME.h and Power_Ip_Types.h are different"
#endif

/* Check if Power_Ip_MC_ME.h file and Power_Ip_Types.h file are of the same Software version */
#if ((POWER_IP_MC_ME_SW_MAJOR_VERSION != POWER_IP_TYPES_SW_MAJOR_VERSION) || \
     (POWER_IP_MC_ME_SW_MINOR_VERSION != POWER_IP_TYPES_SW_MINOR_VERSION) || \
     (POWER_IP_MC_ME_SW_PATCH_VERSION != POWER_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Power_Ip_MC_ME.h and Power_Ip_Types.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Power_Ip_MC_ME.h file and StandardTypes.h file are of the same Autosar version */
#if ((POWER_IP_MC_ME_AR_RELEASE_MAJOR_VERSION    != STD_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_MC_ME_AR_RELEASE_MINOR_VERSION    != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_MC_ME.h and StandardTypes.h are different"
#endif

/* Check if Power_Ip_MC_ME.h file and OsIf.h file are of the same Autosar version */
#if ((POWER_IP_MC_ME_AR_RELEASE_MAJOR_VERSION    != OSIF_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_MC_ME_AR_RELEASE_MINOR_VERSION    != OSIF_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_MC_ME.h and OsIf.h are different"
#endif

/* Check if Power_Ip_MC_ME.h file and Mcal.h file are of the same Autosar version */
#if ((POWER_IP_MC_ME_AR_RELEASE_MAJOR_VERSION    != MCAL_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_MC_ME_AR_RELEASE_MINOR_VERSION    != MCAL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_MC_ME.h and Mcal.h are different"
#endif
#endif  /* #ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK */
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
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


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

#if (defined(POWER_IP_ENABLE_USER_MODE_SUPPORT))
  #if (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT)
    #if (defined(MCAL_MC_ME_REG_PROT_AVAILABLE))
      #if (STD_ON == MCAL_MC_ME_REG_PROT_AVAILABLE)
void Power_Ip_MC_ME_SetUserAccessAllowed(void);
      #endif /* (STD_ON == MCAL_MC_ME_REG_PROT_AVAILABLE) */
    #endif
  #endif  /* (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT) */
#endif

void Power_Ip_MC_ME_ConfigCoreCOFBClock(const Power_Ip_MC_ME_ModeConfigType * ModeConfigPtr);
void Power_Ip_MC_ME_EnablePartitionClock(const Power_Ip_MC_ME_ModeConfigType * ModeConfigPtr);
void Power_Ip_MC_ME_DisablePartitionClock(const Power_Ip_MC_ME_ModeConfigType * ModeConfigPtr);
#if (defined(POWER_IP_HAS_OUTPUT_SAFE_STATE))
#if (POWER_IP_HAS_OUTPUT_SAFE_STATE == STD_ON)
void Power_Ip_MC_ME_EnablePartitionOutputSafe(const Power_Ip_MC_ME_ModeConfigType * ModeConfigPtr);
void Power_Ip_MC_ME_DisablePartitionOutputSafe(const Power_Ip_MC_ME_ModeConfigType * ModeConfigPtr);
#endif
#endif
void Power_Ip_MC_ME_SocTriggerResetEvent(Power_Ip_PowerModeType PowerMode);

#if (defined(POWER_IP_ENTER_LOW_POWER_MODE))
  #if (POWER_IP_ENTER_LOW_POWER_MODE == STD_ON)
void Power_Ip_MC_ME_CoreStandbyEntry(const Power_Ip_ModeConfigType * ModeConfigPtr);
void Power_Ip_MC_ME_SocStandbyEntry(const Power_Ip_ModeConfigType * ModeConfigPtr);
Power_Ip_PowerModeType Power_Ip_MC_ME_GetPreviousMode(void);
  #endif
#endif /* (POWER_IP_ENTER_LOW_POWER_MODE == STD_ON) */

#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */
#endif /* POWER_IP_MC_ME_H */

