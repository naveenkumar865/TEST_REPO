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

#ifndef IPW_PLATFORM_IPW_TYPESDEF_H_
#define IPW_PLATFORM_IPW_TYPESDEF_H_

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

#include "Platform_CfgDefines.h"
#if (PLATFORM_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif
#include "IntCtrl_Ip_TypesDef.h"
#include "System_Ip_CfgDefines.h"

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define PLATFORM_IPW_TYPESDEF_VENDOR_ID                       43
#define PLATFORM_IPW_TYPESDEF_AR_RELEASE_MAJOR_VERSION        4
#define PLATFORM_IPW_TYPESDEF_AR_RELEASE_MINOR_VERSION        4
#define PLATFORM_IPW_TYPESDEF_AR_RELEASE_REVISION_VERSION     0
#define PLATFORM_IPW_TYPESDEF_SW_MAJOR_VERSION                3
#define PLATFORM_IPW_TYPESDEF_SW_MINOR_VERSION                0
#define PLATFORM_IPW_TYPESDEF_SW_PATCH_VERSION                2


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and IntCtrl_Ip_TypesDef header file are of the same vendor */
#if (PLATFORM_IPW_TYPESDEF_VENDOR_ID != PLATFORM_INTCTRL_IP_TYPESDEF_TYPES_VENDOR_ID)
    #error "Platform_Ipw_TypesDef.c and IntCtrl_Ip_TypesDef.h have different vendor ids"
#endif

/* Check if current file and IntCtrl_Ip_TypesDef header file are of the same Software version */
#if ((PLATFORM_IPW_TYPESDEF_SW_MAJOR_VERSION != PLATFORM_INTCTRL_IP_TYPESDEF_SW_MAJOR_VERSION) || \
     (PLATFORM_IPW_TYPESDEF_SW_MINOR_VERSION != PLATFORM_INTCTRL_IP_TYPESDEF_SW_MINOR_VERSION) || \
     (PLATFORM_IPW_TYPESDEF_SW_PATCH_VERSION != PLATFORM_INTCTRL_IP_TYPESDEF_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Platform_Ipw_TypesDef.h and IntCtrl_Ip_TypesDef.h are different"
#endif


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and System_Ip_TypesDef header file are of the same vendor */
#if (PLATFORM_IPW_TYPESDEF_VENDOR_ID != PLATFORM_SYSTEM_IP_CFG_DEFINES_TYPES_VENDOR_ID)
    #error "Platform_Ipw_TypesDef.c and System_Ip_TypesDef.h have different vendor ids"
#endif

/* Check if current file and System_Ip_TypesDef header file are of the same Software version */
#if ((PLATFORM_IPW_TYPESDEF_SW_MAJOR_VERSION != PLATFORM_SYSTEM_IP_CFG_DEFINES_SW_MAJOR_VERSION) || \
     (PLATFORM_IPW_TYPESDEF_SW_MINOR_VERSION != PLATFORM_SYSTEM_IP_CFG_DEFINES_SW_MINOR_VERSION) || \
     (PLATFORM_IPW_TYPESDEF_SW_PATCH_VERSION != PLATFORM_SYSTEM_IP_CFG_DEFINES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Platform_Ipw_TypesDef.h and System_Ip_TypesDef.h are different"
#endif


/*==================================================================================================
 *                              TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/**
 * @internal
 * @brief          Configuration structure core-related interrupt requests.
 */
typedef struct
{
    System_Ip_IrqType eIrq;
    boolean bEnable;
}Platform_SystemIrqConfigType;

/**
 * @internal
 * @brief          Configuration structure system settings.
 */
typedef struct
{
    const Platform_SystemIrqConfigType *aSystemIrqs;
    uint8 u8SysIrqsCount;
    boolean bAhbSlavePriority;
}Platform_SystemConfigType;

/**
 * @internal
 * @brief          Configuration structure system settings.
 */
typedef struct
{
    /** @brief Target cores for the interrupt */
    const IntCtrl_Ip_GlobalRouteConfigType *pIntRouteConfig;
}Platform_Ipw_NonCoreConfigType;

/**
 * @internal
 * @brief          Configuration structure for PLATFORM IP wrapper.
 */
typedef struct
{
    const IntCtrl_Ip_CtrlConfigType *pIntCtrlConfig;
    const Platform_SystemConfigType *aSystemConfig;
} Platform_Ipw_ConfigType;

#endif /* IPW_PLATFORM_IPW_TYPESDEF_H_ */
