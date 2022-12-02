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

#ifndef SYSTEM_IP_CFG_DEFINES_H_
#define SYSTEM_IP_CFG_DEFINES_H_

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "StandardTypes.h"
#include "System_Ip_DeviceRegisters.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_SYSTEM_IP_CFG_DEFINES_TYPES_VENDOR_ID                    43
#define PLATFORM_SYSTEM_IP_CFG_DEFINES_SW_MAJOR_VERSION                   3
#define PLATFORM_SYSTEM_IP_CFG_DEFINES_SW_MINOR_VERSION                   0
#define PLATFORM_SYSTEM_IP_CFG_DEFINES_SW_PATCH_VERSION                   2

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and System_Ip_DeviceRegisters header file are of the same vendor */
#if (PLATFORM_SYSTEM_IP_CFG_DEFINES_TYPES_VENDOR_ID != PLATFORM_SYSTEM_IP_DEVICE_REGISTERS_TYPES_VENDOR_ID)
    #error "System_Ip_Cfg.h and System_Ip_DeviceRegisters.h have different vendor ids"
#endif

/* Check if current file and System_Ip_DeviceRegisters header file are of the same Software version */
#if ((PLATFORM_SYSTEM_IP_CFG_DEFINES_SW_MAJOR_VERSION != PLATFORM_SYSTEM_IP_DEVICE_REGISTERS_SW_MAJOR_VERSION) || \
     (PLATFORM_SYSTEM_IP_CFG_DEFINES_SW_MINOR_VERSION != PLATFORM_SYSTEM_IP_DEVICE_REGISTERS_SW_MINOR_VERSION) || \
     (PLATFORM_SYSTEM_IP_CFG_DEFINES_SW_PATCH_VERSION != PLATFORM_SYSTEM_IP_DEVICE_REGISTERS_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of System_Ip_Cfg.h and System_Ip_DeviceRegisters.h are different"
#endif




    #include "S32G274A_MCM.h"
    
    #define MCM IP_MCM
    #define FPU_INPUT_DENORMAL_IRQ_SUPPORTED
    #define FPU_INEXACT_IRQ_SUPPORTED
    #define FPU_UNDERFLOW_IRQ_SUPPORTED
    #define FPU_OVERFLOW_IRQ_SUPPORTED
    #define FPU_DIVIDE_BY_ZERO_IRQ_SUPPORTED
    #define FPU_INVALID_OPERATION_IRQ_SUPPORTED
    #define TCM_WRITE_ABORT_IRQ_SUPPORTED

    #define MCM_HAS_WABS_SUPPORTED

    #define MCM_HAS_PLATFORM_REVISION
    /* Arm Cortex M4 */
#define SYSTEM_IP_ARM_CORTEXM                   (STD_ON)
#define SYSTEM_FPU_CFG                           (1)
#if ((SYSTEM_IP_ARM_CORTEXM == STD_ON) && (SYSTEM_FPU_CFG == STD_ON))
/**
* @brief      Enumeration listing available core-related interrupt requests
*             defined per each platform.
* @implements System_Ip_IrqType_typedef
*/    
typedef enum
{
#ifdef FPU_INPUT_DENORMAL_IRQ_SUPPORTED
    /** @brief FPU Input Denormal Interrupt */
    FPU_INPUT_DENORMAL_IRQ    = MCM_ISCR_FIDCE_SHIFT,
#endif	
#ifdef FPU_INEXACT_IRQ_SUPPORTED
    /** @brief FPU Inexact Interrupt */
    FPU_INEXACT_IRQ           = MCM_ISCR_FIXCE_SHIFT,
#endif
#ifdef FPU_UNDERFLOW_IRQ_SUPPORTED
    /** @brief FPU Underflow Interrupt */
    FPU_UNDERFLOW_IRQ         = MCM_ISCR_FUFCE_SHIFT,
#endif
#ifdef FPU_OVERFLOW_IRQ_SUPPORTED
    /** @brief FPU Overflow Interrupt */
    FPU_OVERFLOW_IRQ          = MCM_ISCR_FOFCE_SHIFT,
#endif
#ifdef FPU_DIVIDE_BY_ZERO_IRQ_SUPPORTED
    /** @brief FPU Divide-by-Zero Interrupt */
    FPU_DIVIDE_BY_ZERO_IRQ    = MCM_ISCR_FDZCE_SHIFT,
#endif
#ifdef FPU_INVALID_OPERATION_IRQ_SUPPORTED
    /** @brief FPU Invalid Operation Interrupt */
    FPU_INVALID_OPERATION_IRQ = MCM_ISCR_FIOCE_SHIFT,
#endif
#ifdef TCM_WRITE_ABORT_IRQ_SUPPORTED
    /** @brief TCM Write Abort Interrupt */
    TCM_WRITE_ABORT_IRQ       = MCM_ISCR_WABE_SHIFT
#endif
}System_Ip_IrqType;
#endif
#endif/* SYSTEM_IP_CFG_DEFINES_H_ */

