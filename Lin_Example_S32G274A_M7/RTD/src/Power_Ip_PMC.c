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
/**
*   @file       Power_Ip_PMC.c
*   @version    3.0.2
*
*   @brief
*   @brief   POWER driver implementations.
*   @details POWER driver implementations.
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
#include "Power_Ip_Private.h"
#include "Power_Ip_PMC.h"

#if (defined(POWER_IP_ENABLE_USER_MODE_SUPPORT) && (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT))
  #if (defined(MCAL_PMC_REG_PROT_AVAILABLE))
    #if (STD_ON == MCAL_PMC_REG_PROT_AVAILABLE)
      #define USER_MODE_REG_PROT_ENABLED      (STD_ON)
      #include "RegLockMacros.h"
    #endif /* (STD_ON == MCAL_PMC_REG_PROT_AVAILABLE) */
  #endif
#endif /* (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT) */

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define POWER_IP_PMC_VENDOR_ID_C                      43
#define POWER_IP_PMC_AR_RELEASE_MAJOR_VERSION_C       4
#define POWER_IP_PMC_AR_RELEASE_MINOR_VERSION_C       4
#define POWER_IP_PMC_AR_RELEASE_REVISION_VERSION_C    0
#define POWER_IP_PMC_SW_MAJOR_VERSION_C               3
#define POWER_IP_PMC_SW_MINOR_VERSION_C               0
#define POWER_IP_PMC_SW_PATCH_VERSION_C               2

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Power_Ip_PMC.c file and Power_Ip_Private.h file are of the same vendor */
#if (POWER_IP_PMC_VENDOR_ID_C != POWER_IP_PRIVATE_VENDOR_ID)
    #error "Power_Ip_PMC.c and Power_Ip_Private.h have different vendor ids"
#endif

/* Check if Power_Ip_PMC.c file and Power_Ip_Private.h file are of the same Autosar version */
#if ((POWER_IP_PMC_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_PMC_AR_RELEASE_MINOR_VERSION_C != POWER_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_PMC_AR_RELEASE_REVISION_VERSION_C != POWER_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip_PMC.c and Power_Ip_Private.h are different"
#endif

/* Check if Power_Ip_PMC.c file and Power_Ip_Private.h file are of the same Software version */
#if ((POWER_IP_PMC_SW_MAJOR_VERSION_C != POWER_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (POWER_IP_PMC_SW_MINOR_VERSION_C != POWER_IP_PRIVATE_SW_MINOR_VERSION) || \
     (POWER_IP_PMC_SW_PATCH_VERSION_C != POWER_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip_PMC.c and Power_Ip_Private.h are different"
#endif

/* Check if Power_Ip_PMC.c file and Power_Ip_PMC.h file are of the same vendor */
#if (POWER_IP_PMC_VENDOR_ID_C != POWER_IP_PMC_VENDOR_ID)
    #error "Power_Ip_PMC.c and Power_Ip_PMC.h have different vendor ids"
#endif

/* Check if Power_Ip_PMC.c file and Power_Ip_PMC.h file are of the same Autosar version */
#if ((POWER_IP_PMC_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_PMC_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_PMC_AR_RELEASE_MINOR_VERSION_C != POWER_IP_PMC_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_PMC_AR_RELEASE_REVISION_VERSION_C != POWER_IP_PMC_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip_PMC.c and Power_Ip_PMC.h are different"
#endif

/* Check if Power_Ip_PMC.c file and Power_Ip_PMC.h file are of the same Software version */
#if ((POWER_IP_PMC_SW_MAJOR_VERSION_C != POWER_IP_PMC_SW_MAJOR_VERSION) || \
     (POWER_IP_PMC_SW_MINOR_VERSION_C != POWER_IP_PMC_SW_MINOR_VERSION) || \
     (POWER_IP_PMC_SW_PATCH_VERSION_C != POWER_IP_PMC_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip_PMC.c and Power_Ip_PMC.h are different"
#endif

#if (defined(POWER_IP_ENABLE_USER_MODE_SUPPORT) && (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT))
  #if (defined(MCAL_PMC_REG_PROT_AVAILABLE))
    #if (STD_ON == MCAL_PMC_REG_PROT_AVAILABLE)
        #ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
        /* Check if Power_Ip_PMC.c file and RegLockMacros.h file are of the same Autosar version */
            #if ((POWER_IP_PMC_AR_RELEASE_MAJOR_VERSION_C    != REGLOCKMACROS_AR_RELEASE_MAJOR_VERSION) || \
                (POWER_IP_PMC_AR_RELEASE_MINOR_VERSION_C    != REGLOCKMACROS_AR_RELEASE_MINOR_VERSION))
                #error "AutoSar Version Numbers of Power_Ip_PMC.c and RegLockMacros.h are different"
            #endif
        #endif
    #endif /* (STD_ON == MCAL_PMC_REG_PROT_AVAILABLE) */
  #endif
#endif /* (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT) */
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


/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
#if (defined(POWER_IP_ENABLE_USER_MODE_SUPPORT) && (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT))
  #if (defined(MCAL_PMC_REG_PROT_AVAILABLE))
    #if (STD_ON == MCAL_PMC_REG_PROT_AVAILABLE)
/**
* @brief            This function will enable writing in User mode by configuring REG_PROT
*/
void Power_Ip_PMC_SetUserAccessAllowed(void)
{
#if (defined(IP_PMC_BASE))
    SET_USER_ACCESS_ALLOWED(IP_PMC_BASE, PMC_PROT_MEM_U32);
#endif
}
    #endif /* (STD_ON == MCAL_PMC_REG_PROT_AVAILABLE) */
  #endif
#endif /* (STD_ON == POWER_IP_ENABLE_USER_MODE_SUPPORT) */


/**
* @brief            This function configure the Power Management Controller
* @details          The operating voltages are monitored by a set of on-chip supervisory circuits
*                   to ensure that this device works within the correct voltage range.
*
* @param[in]        ConfigPtr   Pointer to PMC configuration structure.
*
* @return           void
*
*/
void Power_Ip_PMC_PowerInit(const Power_Ip_PMC_ConfigType * ConfigPtr)
{
    IP_PMC->NCSPD_CTL = ConfigPtr->NcspdCtrl;
}


#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */
