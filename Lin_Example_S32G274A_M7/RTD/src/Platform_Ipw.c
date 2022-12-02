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
*   @file
*
*   @internal
*   @addtogroup Platform_Ipw
*   @{
*/

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Platform_TypesDef.h"
#include "Platform_Ipw.h"
#include "Mcal.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_PLATFORM_IPW_VENDOR_ID_C                   43
#define PLATFORM_PLATFORM_IPW_AR_RELEASE_MAJOR_VERSION_C    4
#define PLATFORM_PLATFORM_IPW_AR_RELEASE_MINOR_VERSION_C    4
#define PLATFORM_PLATFORM_IPW_AR_RELEASE_REVISION_VERSION_C 0
#define PLATFORM_PLATFORM_IPW_SW_MAJOR_VERSION_C            3
#define PLATFORM_PLATFORM_IPW_SW_MINOR_VERSION_C            0
#define PLATFORM_PLATFORM_IPW_SW_PATCH_VERSION_C            2

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Platform_TypesDef header file are of the same vendor */
#if (PLATFORM_PLATFORM_IPW_VENDOR_ID_C != PLATFORM_TYPESDEF_VENDOR_ID)
#error "Platform_Ipw.c and Platform_TypesDef.h have different vendor ids"
#endif
/* Check if current file and Platform_TypesDef header file are of the same Autosar version */
#if ((PLATFORM_PLATFORM_IPW_AR_RELEASE_MAJOR_VERSION_C != PLATFORM_TYPESDEF_AR_RELEASE_MAJOR_VERSION) ||\
    (PLATFORM_PLATFORM_IPW_AR_RELEASE_MINOR_VERSION_C != PLATFORM_TYPESDEF_AR_RELEASE_MINOR_VERSION) ||\
    (PLATFORM_PLATFORM_IPW_AR_RELEASE_REVISION_VERSION_C != PLATFORM_TYPESDEF_AR_RELEASE_REVISION_VERSION)\
    )
#error "AutoSar Version Numbers of Platform_Ipw.c and Platform_TypesDef.h are different"
#endif
/* Check if current file and Platform_Ipw_Cfg header file are of the same Software version */
#if ((PLATFORM_PLATFORM_IPW_SW_MAJOR_VERSION_C != PLATFORM_TYPESDEF_SW_MAJOR_VERSION) ||\
    (PLATFORM_PLATFORM_IPW_SW_MINOR_VERSION_C != PLATFORM_TYPESDEF_SW_MINOR_VERSION) ||\
    (PLATFORM_PLATFORM_IPW_SW_PATCH_VERSION_C != PLATFORM_TYPESDEF_SW_PATCH_VERSION)\
    )
#error "Software Version Numbers of Platform_Ipw.c and Platform_TypesDef.h are different"
#endif


/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Platform_Ipw header file are of the same vendor */
#if (PLATFORM_PLATFORM_IPW_VENDOR_ID_C != PLATFORM_IPW_CFG_VENDOR_ID)
#error "Platform_Ipw.c and Platform_Ipw.h have different vendor ids"
#endif
/* Check if current file and Platform_Ipw header file are of the same Autosar version */
#if ((PLATFORM_PLATFORM_IPW_AR_RELEASE_MAJOR_VERSION_C != PLATFORM_PLATFORM_IPW_AR_RELEASE_MAJOR_VERSION) ||\
    (PLATFORM_PLATFORM_IPW_AR_RELEASE_MINOR_VERSION_C != PLATFORM_PLATFORM_IPW_AR_RELEASE_MINOR_VERSION) ||\
    (PLATFORM_PLATFORM_IPW_AR_RELEASE_REVISION_VERSION_C != PLATFORM_PLATFORM_IPW_AR_RELEASE_REVISION_VERSION)\
    )
#error "AutoSar Version Numbers of Platform_Ipw.c and Platform_Ipw.h are different"
#endif
/* Check if current file and Platform_Ipw header file are of the same Software version */
#if ((PLATFORM_PLATFORM_IPW_SW_MAJOR_VERSION_C != PLATFORM_PLATFORM_IPW_SW_MAJOR_VERSION) ||\
    (PLATFORM_PLATFORM_IPW_SW_MINOR_VERSION_C != PLATFORM_PLATFORM_IPW_SW_MINOR_VERSION) ||\
    (PLATFORM_PLATFORM_IPW_SW_PATCH_VERSION_C != PLATFORM_PLATFORM_IPW_SW_PATCH_VERSION)\
    )
#error "Software Version Numbers of Platform_Ipw.c and Platform_Ipw.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if header file and Platform_Ipw.c header file are of the same Autosar version */
#if ((PLATFORM_PLATFORM_IPW_AR_RELEASE_MAJOR_VERSION_C != MCAL_AR_RELEASE_MAJOR_VERSION) ||\
    (PLATFORM_PLATFORM_IPW_AR_RELEASE_MINOR_VERSION_C != MCAL_AR_RELEASE_MINOR_VERSION)\
    )
#error "AutoSar Version Numbers of Platform_Ipw.c and Mcal.h are different"
#endif
#endif


/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#define PLATFORM_START_SEC_CODE
#include "Platform_MemMap.h"

#if ((STD_ON == PLATFORM_ENABLE_USER_MODE_SUPPORT) && (defined (MCAL_ENABLE_USER_MODE_SUPPORT)))
#define Call_System_Ip_ConfigIrq(eIrq, bEnable)       OsIf_Trusted_Call2params(System_Ip_ConfigIrq, (eIrq), (bEnable))
#define Call_System_Ip_SetAhbSlavePriority(bPriority) OsIf_Trusted_Call1param(System_Ip_SetAhbSlavePriority, (bPriority))
#else
#define Call_System_Ip_ConfigIrq(eIrq, bEnable)       System_Ip_ConfigIrq((eIrq), (bEnable))
#define Call_System_Ip_SetAhbSlavePriority(bPriority) System_Ip_SetAhbSlavePriority((bPriority))
#endif


static Std_ReturnType Platform_Ipw_InitIntCtrl(const IntCtrl_Ip_CtrlConfigType * pIntCtrlCtrlConfig)
{
    /* Initializes the configured interrupts at interrupt controller level */
    (void)IntCtrl_Ip_Init(pIntCtrlCtrlConfig);
    /* return value */
    return E_OK;
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
 * @brief         Initializes the platform settings based on user configuration.
 */
void Platform_Ipw_Init(const Platform_Ipw_ConfigType * pConfig)
{
#if (PLATFORM_SYS_CFG == STD_ON)
    uint8 irqIdx;
#endif
    Std_ReturnType ret = (Std_ReturnType)E_OK;

    /* Initialize interrupts at interrupt controller level */
    if (NULL_PTR != pConfig->pIntCtrlConfig)
    {
        ret = Platform_Ipw_InitIntCtrl(pConfig->pIntCtrlConfig);
    }
    /* Configure core-related interrupt requests */
    if (ret ==(Std_ReturnType)E_OK)
    {
#if (PLATFORM_SYS_CFG == STD_ON)
        if (pConfig->aSystemConfig != NULL_PTR)
        {
            for (irqIdx = 0u; irqIdx < (pConfig->aSystemConfig)->u8SysIrqsCount; irqIdx++)
            {
                Call_System_Ip_ConfigIrq((pConfig->aSystemConfig)->aSystemIrqs[irqIdx].eIrq, (pConfig->aSystemConfig)->aSystemIrqs[irqIdx].bEnable);
            }   
            Call_System_Ip_SetAhbSlavePriority((pConfig->aSystemConfig)->bAhbSlavePriority);
        }
#endif /* if (PLATFORM_SYS_CFG == STD_ON) */
    }
}

#if (PLATFORM_MSCM_CFG == STD_ON)
/**
 * @brief         Initializes the platform settings for non-core elements  based on user configuration.
 */

void Platform_Ipw_InitNonCore(const Platform_Ipw_NonCoreConfigType * pConfig)
{
    uint32 irqIdx;
    if (pConfig->pIntRouteConfig != NULL_PTR)
    {
        for (irqIdx = 0; irqIdx < (pConfig->pIntRouteConfig)->u32ConfigIrqCount; irqIdx++)
        {
            IntCtrl_Ip_SetTargetCores(pConfig->pIntRouteConfig->aIrqConfig[irqIdx].eIrqNumber,
                                      pConfig->pIntRouteConfig->aIrqConfig[irqIdx].u8TargetCores);
            IntCtrl_Ip_InstallHandler(pConfig->pIntRouteConfig->aIrqConfig[irqIdx].eIrqNumber,
                                      pConfig->pIntRouteConfig->aIrqConfig[irqIdx].pfHandler,
                                      NULL_PTR);
        }
    }
}

#endif /* if (PLATFORM_MSCM_CFG == STD_ON) */

#define PLATFORM_STOP_SEC_CODE
#include "Platform_MemMap.h"
