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

#ifndef MCU_IPW_H
#define MCU_IPW_H

/**
*   @file    Mcu_Ipw.h
*   @implements Mcu_Ipw.h_Artifact
*   @version    3.0.2
*
*   @brief   AUTOSAR Mcu - Mcu driver header file.
*   @details AUTOSAR specific Mcu driver header file.

*   @addtogroup MCU_DRIVER Mcu Driver
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
#include "Mcu_Ipw_Types.h"
#include "Mcu_EnvCfg.h"
#include "Mcal.h"
/*==================================================================================================
                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MCU_IPW_VENDOR_ID                     43
#define MCU_IPW_AR_RELEASE_MAJOR_VERSION      4
#define MCU_IPW_AR_RELEASE_MINOR_VERSION      4
#define MCU_IPW_AR_RELEASE_REVISION_VERSION   0
#define MCU_IPW_SW_MAJOR_VERSION              3
#define MCU_IPW_SW_MINOR_VERSION              0
#define MCU_IPW_SW_PATCH_VERSION              2

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Mcu_Ipw.h file and Mcu_Ipw_Types.h file are of the same vendor */
#if (MCU_IPW_VENDOR_ID != MCU_IPW_TYPES_VENDOR_ID)
    #error "Mcu_Ipw.h and Mcu_Ipw_Types.h have different vendor ids"
#endif

/* Check if Mcu_Ipw.h file and Mcu_Ipw_Types.h file are of the same Autosar version */
#if ((MCU_IPW_AR_RELEASE_MAJOR_VERSION != MCU_IPW_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (MCU_IPW_AR_RELEASE_MINOR_VERSION != MCU_IPW_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (MCU_IPW_AR_RELEASE_REVISION_VERSION != MCU_IPW_TYPES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Mcu_Ipw.h and Mcu_Ipw_Types.h are different"
#endif

/* Check if Mcu_Ipw.h file and Mcu_Ipw_Types.h file are of the same Software version */
#if ((MCU_IPW_SW_MAJOR_VERSION != MCU_IPW_TYPES_SW_MAJOR_VERSION) || \
     (MCU_IPW_SW_MINOR_VERSION != MCU_IPW_TYPES_SW_MINOR_VERSION) || \
     (MCU_IPW_SW_PATCH_VERSION != MCU_IPW_TYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Mcu_Ipw.h and Mcu_Ipw_Types.h are different"
#endif

/* Check if Mcu_Ipw.h file and Mcu_EnvCfg.h file are of the same vendor */
#if (MCU_IPW_VENDOR_ID != MCU_ENVCFG_VENDOR_ID)
    #error "Mcu_Ipw.h and Mcu_EnvCfg.h have different vendor ids"
#endif

/* Check if Mcu_Ipw.h file and Mcu_EnvCfg.h file are of the same Autosar version */
#if ((MCU_IPW_AR_RELEASE_MAJOR_VERSION != MCU_ENVCFG_AR_RELEASE_MAJOR_VERSION) || \
     (MCU_IPW_AR_RELEASE_MINOR_VERSION != MCU_ENVCFG_AR_RELEASE_MINOR_VERSION) || \
     (MCU_IPW_AR_RELEASE_REVISION_VERSION != MCU_ENVCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Mcu_Ipw.h and Mcu_EnvCfg.h are different"
#endif

/* Check if Mcu_Ipw.h file and Mcu_EnvCfg.h file are of the same Software version */
#if ((MCU_IPW_SW_MAJOR_VERSION != MCU_ENVCFG_SW_MAJOR_VERSION) || \
     (MCU_IPW_SW_MINOR_VERSION != MCU_ENVCFG_SW_MINOR_VERSION) || \
     (MCU_IPW_SW_PATCH_VERSION != MCU_ENVCFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Mcu_Ipw.h and Mcu_EnvCfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Mcu_Ipw.h file and Mcal.h file are of the same Autosar version */
#if ((MCU_IPW_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
     (MCU_IPW_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Mcu_Ipw.h and Mcal.h are different"
#endif
#endif

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/


/*==================================================================================================
                                             ENUMS
==================================================================================================*/


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"


void Mcu_Ipw_Init(const Mcu_HwIPsConfigType * HwIPsConfigPtr);

void Mcu_Ipw_SetMode(const Mcu_ModeConfigType * ModeConfigPtr);

#ifndef MCU_MAX_NORAMCONFIGS
Std_ReturnType Mcu_Ipw_InitRamSection(const Mcu_RamConfigType * RamConfigPtr);
#endif /* ifndef MCU_MAX_NORAMCONFIGS */

#if (MCU_INIT_CLOCK == STD_ON)
void Mcu_Ipw_InitClock(const Mcu_ClockConfigType * ClockConfigPtr);
#endif /* (MCU_INIT_CLOCK == STD_ON) */

#if (MCU_INIT_CLOCK == STD_ON)
    #if (MCU_NO_PLL == STD_OFF)
void Mcu_Ipw_DistributePllClock(void);
    #endif /* (MCU_NO_PLL == STD_OFF) */
#endif /* (MCU_INIT_CLOCK == STD_ON) */

#if (MCU_NO_PLL == STD_OFF)
Mcu_PllStatusType Mcu_Ipw_GetPllStatus(void);
#endif /* (MCU_NO_PLL == STD_OFF) */

#if MCU_PERFORM_RESET_API == STD_ON
void Mcu_Ipw_PerformReset(const Mcu_HwIPsConfigType * HwIPsConfigPtr);
#endif /* (MCU_PERFORM_RESET_API == STD_ON) */

Mcu_ResetType Mcu_Ipw_GetResetReason(void);

Mcu_RawResetType Mcu_Ipw_GetResetRawValue(void);

#if (MCU_GET_RAM_STATE_API == STD_ON)
Mcu_RamStateType Mcu_Ipw_GetRamState(void);
#endif /* (MCU_GET_RAM_STATE_API == STD_ON) */

#if (MCU_GET_PERIPH_STATE_API == STD_ON)
Std_ReturnType Mcu_Ipw_GetPeripheralState(Mcu_PeripheralIdType McuPeriphId);
#endif /* (MCU_GET_PERIPH_STATE_API == STD_ON) */

#if (MCU_POWERMODE_STATE_API == STD_ON)
Mcu_PowerModeStateType Mcu_Ipw_GetPowerModeState(void);
#endif /* (MCU_POWERMODE_STATE_API == STD_ON) */

#if (MCU_GET_POWER_DOMAIN_API == STD_ON)
Std_ReturnType Mcu_Ipw_GetPowerDomainState(void);
#endif /* (MCU_GET_POWER_DOMAIN_API == STD_ON) */

#if (MCU_GET_MIDR_API == STD_ON)
void Mcu_Ipw_GetMidrStructure(Mcu_MidrReturnType * MidrPtr);
#endif /*(MCU_GET_MIDR_API == STD_ON)*/

#ifdef MCU_DISABLE_CMU_API
#if (MCU_DISABLE_CMU_API == STD_ON)
void Mcu_Ipw_DisableCmu(Clock_Ip_NameType ClockName);
#endif
#endif

#ifdef MCU_GET_CLOCK_FREQUENCY_API
#if (MCU_GET_CLOCK_FREQUENCY_API == STD_ON)
uint32 MCU_Ipw_GetClockFrequency(Clock_Ip_NameType ClockName);
#endif /* (MCU_GET_CLOCK_FREQUENCY_API == STD_ON) */
#endif /* MCU_GET_CLOCK_FREQUENCY_API */

#ifdef MCU_SLEEPONEXIT_SUPPORT
  #if (MCU_SLEEPONEXIT_SUPPORT == STD_ON)
void Mcu_Ipw_SleepOnExit(Mcu_SleepOnExitType SleepOnExit);
  #endif
#endif

#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */
#endif /* MCU_IPW_H */

