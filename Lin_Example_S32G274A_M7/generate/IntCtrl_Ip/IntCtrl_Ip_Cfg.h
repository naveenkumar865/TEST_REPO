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

#ifndef INTCTRL_IP_CFG_H_
#define INTCTRL_IP_CFG_H_

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "IntCtrl_Ip_TypesDef.h"

#ifdef S32K116
    #include "S32K116_COMMON.h"
#endif
#ifdef S32K118
    #include "S32K118_COMMON.h"
#endif
#ifdef S32K142
    #include "S32K142_COMMON.h"
#endif
#ifdef S32K142W
    #include "S32K142W_COMMON.h"
#endif
#ifdef S32K144
    #include "S32K144_COMMON.h"
#endif
#ifdef S32K144W
    #include "S32K144W_COMMON.h"
#endif
#ifdef S32K146
    #include "S32K146_COMMON.h"
#endif
#ifdef S32K148
    #include "S32K148_COMMON.h"
#endif
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_INTCTRL_IP_CFG_VENDOR_ID                          43
#define PLATFORM_INTCTRL_IP_CFG_SW_MAJOR_VERSION                   3
#define PLATFORM_INTCTRL_IP_CFG_SW_MINOR_VERSION                   0
#define PLATFORM_INTCTRL_IP_CFG_SW_PATCH_VERSION                   2
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and IntCtrl_Ip_TypesDef header file are of the same vendor */
#if (PLATFORM_INTCTRL_IP_CFG_VENDOR_ID != PLATFORM_INTCTRL_IP_TYPESDEF_TYPES_VENDOR_ID)
    #error "IntCtrl_Ip_Cfg.h and IntCtrl_Ip_TypesDef.h have different vendor ids"
#endif

/* Check if current file and Fls header file are of the same Software version */
#if ((PLATFORM_INTCTRL_IP_CFG_SW_MAJOR_VERSION != PLATFORM_INTCTRL_IP_TYPESDEF_SW_MAJOR_VERSION) || \
     (PLATFORM_INTCTRL_IP_CFG_SW_MINOR_VERSION != PLATFORM_INTCTRL_IP_TYPESDEF_SW_MINOR_VERSION) || \
     (PLATFORM_INTCTRL_IP_CFG_SW_PATCH_VERSION != PLATFORM_INTCTRL_IP_TYPESDEF_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of IntCtrl_Ip_Cfg.h and IntCtrl_Ip_TypesDef.h are different"
#endif
/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
#define PLATFORM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

/* Declaration of the configuration structure for Interrupt Controller (core related) */
extern const IntCtrl_Ip_CtrlConfigType intCtrlConfig;
/* Declaration of the generic configuration structure for interrupts (not core related) */
extern const IntCtrl_Ip_GlobalRouteConfigType intRouteConfig;
            extern void undefined_handler(void);
                        extern void LIN_LINFLEXD2_IRQHandler(void);
            
#define PLATFORM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

#endif /* INTCTRL_IP_CFG_H_ */

