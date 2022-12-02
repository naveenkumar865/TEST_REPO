/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : SIUL2
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
*   @file    Port_Ipw.c
*
*   @internal
*   @addtogroup Port_IPW
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/
#include "Port_Ipw.h"
#include "Port.h"
#include "SchM_Port.h"
#if (STD_ON == PORT_DEV_ERROR_DETECT)
    #include "Det.h"
#endif
#include "Siul2_Port_Ip_TrustedFunctions.h"

/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/
#define PORT_VENDOR_ID_IPW_C                    43
#define PORT_AR_RELEASE_MAJOR_VERSION_IPW_C     4
#define PORT_AR_RELEASE_MINOR_VERSION_IPW_C     4
#define PORT_AR_RELEASE_REVISION_VERSION_IPW_C  0
#define PORT_SW_MAJOR_VERSION_IPW_C             3
#define PORT_SW_MINOR_VERSION_IPW_C             0
#define PORT_SW_PATCH_VERSION_IPW_C             2

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/
/* Check if Port_Ipw.c and Port_Ipw.h are of the same vendor */
#if (PORT_VENDOR_ID_IPW_C != PORT_VENDOR_ID_IPW_H)
    #error "Port_Ipw.c and Port_Ipw.h have different vendor ids"
#endif
/* Check if Port_Ipw.c and Port_Ipw.h are of the same Autosar version */
#if ((PORT_AR_RELEASE_MAJOR_VERSION_IPW_C    != PORT_AR_RELEASE_MAJOR_VERSION_IPW_H) || \
     (PORT_AR_RELEASE_MINOR_VERSION_IPW_C    != PORT_AR_RELEASE_MINOR_VERSION_IPW_H) || \
     (PORT_AR_RELEASE_REVISION_VERSION_IPW_C != PORT_AR_RELEASE_REVISION_VERSION_IPW_H) \
    )
    #error "AutoSar Version Numbers of Port_Ipw.c and Port_Ipw.h are different"
#endif

/* Check if Port_Ipw.c and Port_Ipw.h are of the same software version */
#if ((PORT_SW_MAJOR_VERSION_IPW_C != PORT_SW_MAJOR_VERSION_IPW_H) || \
     (PORT_SW_MINOR_VERSION_IPW_C != PORT_SW_MINOR_VERSION_IPW_H) || \
     (PORT_SW_PATCH_VERSION_IPW_C != PORT_SW_PATCH_VERSION_IPW_H)    \
    )
    #error "Software Version Numbers of Port_Ipw.c and Port_Ipw.h are different"
#endif

/* Check if Port_Ipw.c and Port.h are of the same vendor */
#if (PORT_VENDOR_ID_IPW_C != PORT_VENDOR_ID)
    #error "Port_Ipw.c and Port.h have different vendor ids"
#endif
/* Check if Port_Ipw.c and Port.h are of the same Autosar version */
#if ((PORT_AR_RELEASE_MAJOR_VERSION_IPW_C    != PORT_AR_RELEASE_MAJOR_VERSION) || \
     (PORT_AR_RELEASE_MINOR_VERSION_IPW_C    != PORT_AR_RELEASE_MINOR_VERSION) || \
     (PORT_AR_RELEASE_REVISION_VERSION_IPW_C != PORT_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Port_Ipw.c and Port.h are different"
#endif

/* Check if Port_Ipw.c and Port.h are of the same software version */
#if ((PORT_SW_MAJOR_VERSION_IPW_C != PORT_SW_MAJOR_VERSION) || \
     (PORT_SW_MINOR_VERSION_IPW_C != PORT_SW_MINOR_VERSION) || \
     (PORT_SW_PATCH_VERSION_IPW_C != PORT_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of Port_Ipw.c and Port.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if the Port_Ipw.c and SchM_Port.h file are of the same Autosar version */
    #if ((PORT_AR_RELEASE_MAJOR_VERSION_IPW_C != SCHM_PORT_AR_RELEASE_MAJOR_VERSION) || \
         (PORT_AR_RELEASE_MINOR_VERSION_IPW_C != SCHM_PORT_AR_RELEASE_MINOR_VERSION)    \
        )
        #error "AutoSar Version Numbers of Port_Ipw.c and SchM_Port.h are different"
    #endif
#endif
/*=================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/


/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/
#define PORT_START_SEC_VAR_CLEARED_16_NO_CACHEABLE
#include "Port_MemMap.h"

#if (STD_ON == PORT_DEV_ERROR_DETECT)
#if (STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API)
/**
* @brief    Segment descriptor for data arranged in array
* @detail   Port_Ipw_au16GPIODirChangeability variable is only used by PORT_Siul2_SetPinDirection
*           and PORT_Siul2_SetPinMode functions
*/
static uint16 Port_Ipw_au16GPIODirChangeability[PORT_NUM_SIUL2_INSTANCES_U8][PORT_NUM_16PIN_BLOCKS_U8];
#endif /* (STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API) */
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

#define PORT_STOP_SEC_VAR_CLEARED_16_NO_CACHEABLE
#include "Port_MemMap.h"

/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/
#define PORT_START_SEC_CODE
#include "Port_MemMap.h"

/*!
 * @brief
 *
 * @details
 *
 *
 * @param[in]
 *
 * @return void
 **/
static inline void Port_Ipw_Init_UnusedPins
(
    const Port_ConfigType * pConfigPtr
);

#if (STD_ON == PORT_SET_PIN_MODE_API)
/*!
 * @brief
 *
 * @details
 *
 *
 * @param[in]
 *
 * @return void
 *
 *
 **/
static uint16 Port_Ipw_GetIndexForInoutEntry
(
    uint8 u8MscrSiulInstance,
    uint16 u16MscrIdx,
    Port_PinModeType PinMode
);

/*!
 * @brief Port_Ipw_SetMode
 *
 * @details Port_Ipw_SetMode function
 *
 *
 * @param[in] u8MscrSiulInstance Mscr instance
 * @param[in] u16MscrIdx         Mscr ID
 * @param[in] PinIndex           Pin index
 * @param[in] PinMode            Mode
 * @param[in] pConfigPtr         A pointer to the structure which contains initialization parameters
 *
 * @return void
 **/
static inline void Port_Ipw_SetMode
(
    uint8 u8MscrSiulInstance,
    uint16 u16MscrIdx,
    Port_PinType PinIndex,
    Port_PinModeType PinMode,
    const Port_ConfigType * pConfigPtr
);

/*!
 * @brief Port_Ipw_SetInoutMode
 *
 * @details Port_Ipw_SetInoutMode function
 *
 *
 * @param[in] u8MscrSiulInstance Mscr instance
 * @param[in] u16MscrIdx Mscr ID
 * @param[in] PinMode      Mode
 *
 * @return void
 **/
static inline void Port_Ipw_SetInoutMode
(
    uint8 u8MscrSiulInstance,
    uint16 u16MscrIdx,
    Port_PinModeType PinMode
);

/*!
 * @brief Port_Ipw_SetInputMode
 *
 * @details Port_Ipw_SetInputMode function
 *
 *
 * @param[in] u8MscrSiulInstance Mscr instance
 * @param[in] u16MscrIdx Mscr ID
 * @param[in] PinMode      Mode
 *
 * @return void
 **/
static inline void Port_Ipw_SetInputMode
(
    uint8 u8MscrSiulInstance,
    uint16 u16MscrIdx,
    Port_PinModeType PinMode
);

/*!
 * @brief Port_Ipw_SetGpioMode
 *
 * @details Port_Ipw_SetGpioMode function
 *
 *
 * @param[in] u8MscrSiulInstance Mscr instance
 * @param[in] u16MscrIdx Mscr ID
 * @param[in] PinIndex Pin index
 * @param[in] pConfigPtr A pointer to the structure which contains initialization parameters
 *
 * @return void
 **/
static inline void Port_Ipw_SetGpioMode
(
    uint8 u8MscrSiulInstance,
    uint16 u16MscrIdx,
    Port_PinType PinIndex,
    const Port_ConfigType * pConfigPtr
);

/*!
 * @brief Port_Ipw_SetOnlyInputMode
 *
 * @details Port_Ipw_SetOnlyInputMode function
 *
 *
 * @param[in] u8MscrSiulInstance Mscr instance
 * @param[in] u16MscrIdx Mscr ID
 *
 * @return void
 **/
static inline void Port_Ipw_SetOnlyInputMode
(
    uint8 u8MscrSiulInstance,
    uint16 u16MscrIdx
);

/*!
 * @brief Port_Ipw_SetAltMode
 *
 * @details Port_Ipw_SetAltMode function
 *
 *
 * @param[in] u8MscrSiulInstance Mscr instance
 * @param[in] u16MscrIdx Mscr ID
 * @param[in] PinMode Mode
 *
 * @return void
 **/
static inline void Port_Ipw_SetAltMode
(
    uint8 u8MscrSiulInstance,
    uint16 u16MscrIdx,
    Port_PinModeType PinMode
);
#endif /* (STD_ON == PORT_SET_PIN_MODE_API) */


#if (STD_ON == PORT_SET_PIN_MODE_API)
#if (STD_ON == PORT_DEV_ERROR_DETECT)
/*!
 * @brief
 *
 * @details
 *
 *
 * @param[in]
 *
 * @return void
 *
 *
 **/
void Port_Ipw_SetGpioDirChangeability
(
    uint8 u8ImcrSiulInstance,
    uint16 u16MscrIdx,
    boolean bStatus
);
#endif
#endif
#if (STD_ON == PORT_SET_PIN_MODE_API)
#if (STD_OFF == PORT_SETPINMODE_DOES_NOT_TOUCH_GPIO_LEVEL)
/*!
 * @brief
 *
 * @details
 *
 *
 * @param[in]
 *
 * @return void
 *
 *
 **/
void Port_Ipw_SetGpioPadOutput
(
    Port_PinType PinIndex,
    const Port_ConfigType * pConfigPtr
);
#endif /* (STD_OFF == PORT_SETPINMODE_DOES_NOT_TOUCH_GPIO_LEVEL) */
#endif /* (STD_ON == PORT_SET_PIN_MODE_API) */


/*=================================================================================================
*                                      LOCAL FUNCTIONS
=================================================================================================*/

/**
* @brief        Initializes the PORT IP Driver
* @details      The function Port_Ipw_Init_UnusedPins will initialize ALL Unused Port Pins with the
*               configuration set pointed to by the parameter ConfigPtr.
*
* @param[in]    pConfigPtr  A pointer to the structure which contains initialization parameters
*
* @return       none
*
* @pre          none
* @post         No function of the driver is executed without the initialization of the module.
*
*
*/
static inline void Port_Ipw_Init_UnusedPins
(
    const Port_ConfigType * pConfigPtr
)
{
    uint16 u16PinIndex;
    uint16 u16NumUnusedPins     = (uint16)(pConfigPtr->u16NumUnusedPins);
    uint8 u8LocalPDO            = pConfigPtr->pUnusedPadConfig->u8PDO;
    uint32 u32LocalMSCR         = pConfigPtr->pUnusedPadConfig->u32MSCR;

    uint16 u16MscrIdx;
    uint8  u8MscrSiulInstance;

    /* Initialize All UnUsed Port Pins */
    for (u16PinIndex = (uint16)0U; u16PinIndex < u16NumUnusedPins; u16PinIndex++)
    {
        u16MscrIdx         = pConfigPtr->pUnusedPads[u16PinIndex].u16MscrIdx;
        u8MscrSiulInstance = pConfigPtr->pUnusedPads[u16PinIndex].u8MscrSiulInstance;

        if (u8LocalPDO != PORT_PIN_LEVEL_NOTCHANGED_U8)
        {
            /* Write the value into GPDO register */
            PORT_WRITE8(SIUL2_GPDO_ADDR8(u8MscrSiulInstance, u16MscrIdx), u8LocalPDO);
        }

        /* Write MSCR configuration from Configuration tool */
        PORT_WRITE32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx), u32LocalMSCR);
    }
}

#if (STD_ON == PORT_SET_PIN_MODE_API)
/**
* @brief   Searches index in Port_aPadFunctInoutMuxSettings table.
* @details Searches index of an entry having a given Pad number and a given PadMode in
*          Port_aPadFunctInoutMuxSettings[] table
* @pre     None

* @param[in] u16MscrIdx       Number of the pad for which index in Port_aPadFunctInoutMuxSettings is requested.
* @param[in] PinMode      Mode of the pad for which index in Port_aPadFunctInoutMuxSettings is requested
*
* @api
*/
static uint16 Port_Ipw_GetIndexForInoutEntry
(
    uint8 u8MscrSiulInstance,
    uint16 u16MscrIdx,
    Port_PinModeType PinMode
)
{
    uint16 u16ReturnIndex = (uint16)0;
    uint16 u16Counter;

    /* The loop to search index in Port_aPadFunctInoutMuxSettings table. */
    for (u16Counter = (uint16)0U; u16Counter < Port_au16NumInoutMuxSettings[u8MscrSiulInstance]; u16Counter++)
    {
        /* If the index was found by Mscr Id and Mode of the pin */
        if ((Port_apInoutMuxSettings[u8MscrSiulInstance][u16Counter].u16MscrIdx == u16MscrIdx) && (Port_apInoutMuxSettings[u8MscrSiulInstance][u16Counter].u8Mode == (uint8)PinMode))
        {
            u16ReturnIndex = u16Counter;
            /* Break the loop. Do not need to search in all elements of the table */
            break;
        }
    }
    return u16ReturnIndex;
}

/*!
 * @brief Port_Ipw_SetMode
 *
 * @details Port_Ipw_SetMode function
 *
 *
 * @param[in] u8MscrSiulInstance Mscr instance
 * @param[in] u16MscrIdx         Mscr ID
 * @param[in] PinIndex           Pin index
 * @param[in] PinMode            Mode
 * @param[in] pConfigPtr         A pointer to the structure which contains initialization parameters
 *
 * @return void
 **/
static inline void Port_Ipw_SetMode
(
    uint8 u8MscrSiulInstance,
    uint16 u16MscrIdx,
    Port_PinType PinIndex,
    Port_PinModeType PinMode,
    const Port_ConfigType * pConfigPtr
)
{
    switch (PinMode)
    {
        case PORT_INOUT1_MODE:
        case PORT_INOUT2_MODE:
        case PORT_INOUT3_MODE:
        case PORT_INOUT4_MODE:
        case PORT_INOUT5_MODE:
        case PORT_INOUT6_MODE:
            Port_Ipw_SetInoutMode(u8MscrSiulInstance, u16MscrIdx, PinMode);
            (void)PinIndex;
            (void)pConfigPtr;
            break;

        case PORT_INPUT1_MODE:
        case PORT_INPUT2_MODE:
        case PORT_INPUT3_MODE:
        case PORT_INPUT4_MODE:
        case PORT_INPUT5_MODE:
        case PORT_INPUT6_MODE:
        case PORT_INPUT7_MODE:
            Port_Ipw_SetInputMode(u8MscrSiulInstance, u16MscrIdx, PinMode);
            (void)PinIndex;
            (void)pConfigPtr;
            break;

        case PORT_GPIO_MODE:
            Port_Ipw_SetGpioMode(u8MscrSiulInstance, u16MscrIdx, PinIndex, pConfigPtr);
            (void)PinMode;
            break;

        case PORT_ONLY_INPUT_MODE:
            Port_Ipw_SetOnlyInputMode(u8MscrSiulInstance, u16MscrIdx);
            (void)PinIndex;
            (void)PinMode;
            (void)pConfigPtr;
            break;

        case PORT_ALT1_FUNC_MODE:
        case PORT_ALT2_FUNC_MODE:
        case PORT_ALT3_FUNC_MODE:
        case PORT_ALT4_FUNC_MODE:
        case PORT_ALT5_FUNC_MODE:
        case PORT_ALT6_FUNC_MODE:
            Port_Ipw_SetAltMode(u8MscrSiulInstance, u16MscrIdx, PinMode);
            (void)PinIndex;
            (void)pConfigPtr;
            break;
        default:
#if (STD_ON == PORT_DEV_ERROR_DETECT)
            Port_Ipw_SetGpioDirChangeability(u8MscrSiulInstance, u16MscrIdx, FALSE);
            (void)PinIndex;
            (void)PinMode;
            (void)pConfigPtr;
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
            break;
    }
}

/**
* @brief   Port_Ipw_SetInoutMode
* @details Port_Ipw_SetInoutMode function
* @pre     None
*
* @param[in] u8MscrSiulInstance Mscr instance
* @param[in] u16MscrIdx Mscr ID
* @param[in] PinMode      Mode
*
* @api
*/
static inline void Port_Ipw_SetInoutMode(
    uint8 u8MscrSiulInstance,
    uint16 u16MscrIdx,
    Port_PinModeType PinMode

)
{
    Port_InoutSettingType PadInoutData;
    uint32 MscrValue;
    uint16 u16Index;
    uint16 u16ImcrIdx           = 0U;
    uint32 ImcrValue            = 0UL;
    uint8 u8ImcrSiulInstance    = (uint8)0x0U;

    /* Return the value from MSCR register with MscrInstance */
    MscrValue = PORT_READ32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx));

    /* All the INOUT modes */
    u16Index           = Port_Ipw_GetIndexForInoutEntry(u8MscrSiulInstance, u16MscrIdx, PinMode);
    PadInoutData       = Port_apInoutMuxSettings[u8MscrSiulInstance][u16Index];
    u8ImcrSiulInstance = PadInoutData.u8ImcrSiulInstance;
    MscrValue          = (uint32)(((uint32)PinMode + 1UL) - (uint32)PORT_INOUT1_MODE);
    u16ImcrIdx         = (uint16)PadInoutData.u16ImcrIdx;
    ImcrValue          = PadInoutData.u8ImcrSSS;

    /* Write the value into IMCR register */
    PORT_WRITE32(SIUL2_IMCR_ADDR32(u8ImcrSiulInstance, (uint32)u16ImcrIdx), ImcrValue);

    /* Calculate  the MSCR value */
    MscrValue &= ~SIUL2_MSCR_SSS_U32;
    MscrValue |= (uint32)((uint32)(((uint32)PinMode + 1UL) - (uint32)PORT_INOUT1_MODE) << SIUL2_MSCR_SSS_OFFSET_U32);
    MscrValue |= (SIUL2_MSCR_OBE_U32 | SIUL2_MSCR_IBE_U32);

#if (STD_ON == PORT_DEV_ERROR_DETECT)
    Port_Ipw_SetGpioDirChangeability(u8MscrSiulInstance, u16MscrIdx, FALSE);
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

    /* Sets the port pin mode */
    PORT_WRITE32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx), MscrValue);

}

/**
* @brief   Port_Ipw_SetInputMode
* @details Port_Ipw_SetInputMode function
* @pre     None
*
* @param[in] u8MscrSiulInstance Mscr instance
* @param[in] u16MscrIdx Mscr ID
* @param[in] PinMode      Mode
*
* @api
*/
static inline void Port_Ipw_SetInputMode
(
    uint8 u8MscrSiulInstance,
    uint16 u16MscrIdx,
    Port_PinModeType PinMode
)
{
    uint16 u16Index;
    uint32 MscrValue;
    uint16 u16ImcrIdx           = 0U;
    uint32 ImcrValue            = 0UL;
    uint8 u8ImcrSiulInstance    = (uint8)0x0U;
    Port_InMuxSettingType PadInMuxData;

    /* Return the value from MSCR register with MscrInstance */
    MscrValue = PORT_READ32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx));

    u16Index           = Port_apInMuxSettingsIndex[u8MscrSiulInstance][u16MscrIdx];
    PadInMuxData       = Port_apInMuxSettings[u8MscrSiulInstance][(u16Index + PinMode) - PORT_INPUT1_MODE];
    u8ImcrSiulInstance = PadInMuxData.u8ImcrSiulInstance;
    u16ImcrIdx         = (uint16)PadInMuxData.u16ImcrIdx;
    ImcrValue          = PadInMuxData.u8ImcrSSS;

    /* Write the value into IMCR register */
    PORT_WRITE32(SIUL2_IMCR_ADDR32(u8ImcrSiulInstance, (uint32)u16ImcrIdx), ImcrValue);
    /* Calculate the MSCR value */
    MscrValue &= ~(SIUL2_MSCR_SSS_U32 | SIUL2_MSCR_OBE_U32);
    MscrValue |=  SIUL2_MSCR_IBE_U32;
#if (STD_ON == PORT_DEV_ERROR_DETECT)
    Port_Ipw_SetGpioDirChangeability(u8MscrSiulInstance, u16MscrIdx, FALSE);
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

    /* Sets the port pin mode */
    PORT_WRITE32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx), MscrValue);

}

/**
* @brief   Port_Ipw_SetGpioMode
* @details Port_Ipw_SetGpioMode function
* @pre     None
*
* @param[in] u8MscrSiulInstance Mscr instance
* @param[in] u16MscrIdx Mscr ID
* @param[in] PinIndex Pin index
* @param[in] pConfigPtr A pointer to the structure which contains initialization parameters
*
* @api
*/
static inline void Port_Ipw_SetGpioMode
(
    uint8 u8MscrSiulInstance,
    uint16 u16MscrIdx,
    Port_PinType PinIndex,
    const Port_ConfigType * pConfigPtr
)
{

    Port_PinDirectionType ePadDirection;
    uint32 MscrValue;

    /* Return the value from MSCR register with MscrInstance */
    MscrValue = PORT_READ32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx));

#if (STD_ON == PORT_DEV_ERROR_DETECT)
    Port_Ipw_SetGpioDirChangeability(u8MscrSiulInstance, u16MscrIdx, TRUE);
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
    ePadDirection = pConfigPtr->pUsedPadConfig[PinIndex].ePadDir;
    MscrValue &= ~SIUL2_MSCR_SSS_U32;
    if(PORT_PIN_OUT == ePadDirection)
    {
        MscrValue |= SIUL2_MSCR_OBE_U32;
#if (STD_OFF == PORT_SETPINMODE_DOES_NOT_TOUCH_GPIO_LEVEL)
        Port_Ipw_SetGpioPadOutput(PinIndex, pConfigPtr);
#endif /* (STD_OFF == PORT_SETPINMODE_DOES_NOT_TOUCH_GPIO_LEVEL) */
    }
    else if(PORT_PIN_IN == ePadDirection)
    {
        MscrValue |= SIUL2_MSCR_IBE_U32;
    }
    else if(PORT_PIN_INOUT == ePadDirection)
    {
        MscrValue |= (SIUL2_MSCR_OBE_U32 | SIUL2_MSCR_IBE_U32);
#if (STD_OFF == PORT_SETPINMODE_DOES_NOT_TOUCH_GPIO_LEVEL)
        Port_Ipw_SetGpioPadOutput(PinIndex, pConfigPtr);
#endif /* (STD_OFF == PORT_SETPINMODE_DOES_NOT_TOUCH_GPIO_LEVEL) */
    }
    else /* PORT_PIN_HIGH_Z */
    {
        MscrValue &= ~(SIUL2_MSCR_OBE_U32 | SIUL2_MSCR_IBE_U32);
    }

    (void)Port_Ipw_SetPinDirection(PinIndex, ePadDirection, pConfigPtr);

    /* Sets the port pin mode */
    PORT_WRITE32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx), MscrValue);
}

/**
* @brief   Port_Ipw_SetOnlyInputMode
* @details Port_Ipw_SetOnlyInputMode function
* @pre     None
*
* @param[in] u8MscrSiulInstance Mscr instance
* @param[in] u16MscrIdx Mscr ID
*
* @api
*/
static inline void Port_Ipw_SetOnlyInputMode
(
    uint8 u8MscrSiulInstance,
    uint16 u16MscrIdx
)
{
    uint32 MscrValue;

    /* Return the value from MSCR register with MscrInstance */
    MscrValue = PORT_READ32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx));

    /* Calculate the MSCR value */
    MscrValue &= ~(SIUL2_MSCR_SSS_U32 | SIUL2_MSCR_OBE_U32);
    MscrValue |=  SIUL2_MSCR_IBE_U32;
#if (STD_ON == PORT_DEV_ERROR_DETECT)
    Port_Ipw_SetGpioDirChangeability(u8MscrSiulInstance, u16MscrIdx, FALSE);
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

    /* Sets the port pin mode */
    PORT_WRITE32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx), MscrValue);
}

/**
* @brief   Port_Ipw_SetAltMode
* @details Port_Ipw_SetAltMode function
* @pre     None
*
* @param[in] u8MscrSiulInstance Mscr instance
* @param[in] u16MscrIdx Mscr ID
* @param[in] PinMode Mode
*
* @api
*/
static inline void Port_Ipw_SetAltMode
(
    uint8 u8MscrSiulInstance,
    uint16 u16MscrIdx,
    Port_PinModeType PinMode
)
{
    uint32 MscrValue;

    /* Return the value from MSCR register with MscrInstance */
    MscrValue = PORT_READ32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx));

    /* Calculate the MSCR value */
    MscrValue &= ~(SIUL2_MSCR_SSS_U32);
    MscrValue |= ((uint32)PinMode << SIUL2_MSCR_SSS_OFFSET_U32);
    MscrValue |= SIUL2_MSCR_OBE_U32;

    /* Sets the port pin mode */
    PORT_WRITE32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx), MscrValue);
}
#endif /* (STD_ON == PORT_SET_PIN_MODE_API) */

/*=================================================================================================
*                                      GLOBAL FUNCTIONS
=================================================================================================*/
/**
* @brief        Initializes the PORT IPW Driver
* @details      The function Port_Ipw_Init will initialize ALL ports and port pins with the
*               configuration set pointed to by the parameter pConfigPtr.
*
* @param[in]    pConfigPtr  A pointer to the structure which contains initialization parameters
*
* @return none
*
* @pre    none
* @post   No function of the driver is executed without the initialization of the module.
*
*
*/
void Port_Ipw_Init
(
    const Port_ConfigType * pConfigPtr
)
{
#if (STD_ON == PORT_DEV_ERROR_DETECT)
#if (STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API)
    uint16 u16Counter;
#endif
#endif
    uint8 u8ImcrSiulInstance;
    uint16 u16ImcrIdx;
    uint8 u8Imcr;
#ifdef IP_SIUL2_0_BASE
    SIUL2_Type * imcrBase = (SIUL2_Type *)IP_SIUL2_0_BASE;
#endif /* IP_SIUL2_0_BASE */
#ifdef IP_SIUL2_BASE
    SIUL2_Type * imcrBase = (SIUL2_Type *)IP_SIUL2_BASE;
#endif /* IP_SIUL2_BASE */

#if (defined(MCAL_ENABLE_USER_MODE_SUPPORT) && defined(PORT_ENABLE_USER_MODE_SUPPORT) && (STD_ON == PORT_ENABLE_USER_MODE_SUPPORT))
#if (defined(MCAL_SIUL2_REG_PROT_AVAILABLE) && (STD_ON == MCAL_SIUL2_REG_PROT_AVAILABLE))
    /* Enable register access from user mode, if enabled from configuration file */
    OsIf_Trusted_Call(Siul2_Port_Ip_SetUserAccessAllowed);
#endif /* (defined(MCAL_SIUL2_REG_PROT_AVAILABLE) && (STD_ON == MCAL_SIUL2_REG_PROT_AVAILABLE)) */
#endif /* (defined(MCAL_ENABLE_USER_MODE_SUPPORT) && defined(PORT_ENABLE_USER_MODE_SUPPORT) && (STD_ON == PORT_ENABLE_USER_MODE_SUPPORT)) */

    /* Clear IMCR configuration registers */
    for (u8ImcrSiulInstance = (uint8)0U; u8ImcrSiulInstance < PORT_NUM_SIUL2_INSTANCES_U8; u8ImcrSiulInstance++)
    {
        for (u16ImcrIdx = (uint16)0U; u16ImcrIdx < pConfigPtr->au16NumImcrs[u8ImcrSiulInstance]; u16ImcrIdx++)
        {
            u8Imcr = pConfigPtr->pImcrConfig[u8ImcrSiulInstance][u16ImcrIdx];
            if (SIUL2_UNUSED_IMCR_PATTERN_U8 != u8Imcr)
            {
                if (u16ImcrIdx < PORT_SIUL2_0_NUM_IMCRS_U16)
                {
                    /* Use the base address of SIUL2_0 */
#ifdef IP_SIUL2_0_BASE
                    imcrBase = (SIUL2_Type *)IP_SIUL2_0_BASE;
#endif /* IP_SIUL2_0_BASE */
#ifdef SIUL2_BASE
                    imcrBase = (SIUL2_Type *)SIUL2_BASE;
#endif /* SIUL2_BASE */
                }
#ifdef IP_SIUL2_1_BASE
                else
                {
                    /* Use the base address of SIUL2_1 */
                    imcrBase = (SIUL2_Type *)IP_SIUL2_1_BASE;
                }
#endif /* IP_SIUL2_1_BASE */
                /* Clear all input signals */
                if (u16ImcrIdx < SIUL2_IMCR_COUNT)
                {
                    imcrBase->IMCR[u16ImcrIdx % SIUL2_MAX_NUM_OF_IMCR_REG] = 0U;
                }
            }
        }
    }

    /* Initialize All Configured Port Pins */
    (void)Siul2_Port_Ip_Init(NUM_OF_CONFIGURED_PINS,pConfigPtr->IpConfigPtr);

    /* Initialize All UnUsed Port Pins */
    Port_Ipw_Init_UnusedPins(pConfigPtr);

#if (STD_ON == PORT_DEV_ERROR_DETECT)
#if (STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API)
    /* Port_Ipw_au16GPIODirChangeability is only used by PORT_Siul_SetPinDirection and PORT_Siul_SetPinMode functions */
    /* Initialize the Array with Change Direction Flags for GPIO */
    for (u8ImcrSiulInstance = (uint8)0U; u8ImcrSiulInstance < PORT_NUM_SIUL2_INSTANCES_U8; u8ImcrSiulInstance++)
    {
        for (u16Counter = (uint16)0U; u16Counter < PORT_NUM_16PIN_BLOCKS_U8; u16Counter++)
        {
            Port_Ipw_au16GPIODirChangeability[u8ImcrSiulInstance][u16Counter] = (uint16)0UL;
        }
    }
#endif /* (STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API) */
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
}

#if (STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API)
/**
* @brief   Sets the port pin direction
* @details Sets the pin direction at runtime, changing it only if the pin is configurated as
*          changeable.
*
* @param[in]     PinIndex        Pin ID number
* @param[in]     eDirection      Port Pin direction
* @param[in]     pConfigPtr      A pointer to the structure which contains initialization parameters
*
* @return Error code after execution
* @retval 0   No error occured
* @retval 1   Pin direction cannot be changed
*
* @pre Port_Init must have been called
* @post none
*
*
*/
Std_ReturnType Port_Ipw_SetPinDirection
(
    Port_PinType PinIndex,
    Port_PinDirectionType eDirection,
    const Port_ConfigType * pConfigPtr
)
{
    /* Point to the Port Pin MSCR register address */
    uint16 u16MscrIdx         = pConfigPtr->pUsedPadConfig[PinIndex].u16MscrIdx;
    uint8 u8MscrSiulInstance  = pConfigPtr->pUsedPadConfig[PinIndex].u8MscrSiulInstance;
    uint32 u32LocalMSCR;
    /* Return value */
    Std_ReturnType PinDirError = (Std_ReturnType)E_OK;

#if (STD_ON == PORT_DEV_ERROR_DETECT)

    uint8 CoreId;
    CoreId = (uint8)Port_GetCoreID();

    if (PinIndex >= (Port_PinType)pConfigPtr->u16NumPins)
    {
        (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)PORT_SETPINDIRECTION_ID, (uint8)PORT_E_PARAM_PIN);
    }
    /* Check port pin validity */
    else if ((uint32)1 != (((pConfigPtr->pau32Port_PinToPartitionMap[PinIndex]) & ((uint32)1 << CoreId)) >> CoreId))
    {
        (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)PORT_SETPINDIRECTION_ID, (uint8)PORT_E_PARAM_CONFIG);
    }
    else
    {
        /* Bit Offset and Table value for change direction flag word*/
        uint8 u8PinDescBitOffset = (uint8)((uint8)u16MscrIdx & SIUL2_BIT_OFFSET_MASK_U8);
        uint16 u16PinChangeDirFlagWord = Port_Ipw_au16GPIODirChangeability[u8MscrSiulInstance][(uint8)(u16MscrIdx>>4)];
        /* Check the Direction changeability option */
        if ((TRUE == pConfigPtr->pUsedPadConfig[PinIndex].bDC) || \
            ((uint16)0 != (u16PinChangeDirFlagWord & (uint16)(1UL<<u8PinDescBitOffset))))
        {
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

            /* Return the value from MSCR register with MscrInstance */
            u32LocalMSCR = PORT_READ32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx));
            /* Configures Port Pin as Output */
            if (PORT_PIN_OUT == eDirection)
            {
                u32LocalMSCR = u32LocalMSCR & ~(SIUL2_MSCR_IBE_ON_U32);
                u32LocalMSCR = u32LocalMSCR | SIUL2_MSCR_OBE_ON_U32;
            }
            /* Configures Port Pin as Input */
            else if (PORT_PIN_IN == eDirection)
            {
                u32LocalMSCR = u32LocalMSCR | SIUL2_MSCR_IBE_ON_U32;
                u32LocalMSCR = u32LocalMSCR & ~(SIUL2_MSCR_OBE_ON_U32);
            }
            else if (PORT_PIN_INOUT == eDirection)
            {
                u32LocalMSCR = u32LocalMSCR | SIUL2_MSCR_IBE_ON_U32;
                u32LocalMSCR = u32LocalMSCR | SIUL2_MSCR_OBE_ON_U32;
            }
            else /* PORT_PIN_HIGH_Z */
            {
                u32LocalMSCR = u32LocalMSCR & ~(SIUL2_MSCR_IBE_ON_U32);
                u32LocalMSCR = u32LocalMSCR & ~(SIUL2_MSCR_OBE_ON_U32);
            }
            PORT_WRITE32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx), u32LocalMSCR);

#if (STD_ON == PORT_DEV_ERROR_DETECT)
        }
        /* Direction changeability is NOT supported */
        else
        {
            PinDirError = (Std_ReturnType)E_NOT_OK;
        }
    }
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
    return PinDirError;
}
#endif /* (STD_ON == PORT_SET_PIN_DIRECTION_API) || (STD_ON == PORT_SET_PIN_MODE_API) */

#if (STD_ON == PORT_SET_PIN_MODE_API)
/**
* @brief   Sets the port pin mode.
* @details The function @p Port_Ipw_SetPinMode will set the port pin mode of the
*          referenced pin during runtime.
* @pre     @p Port_Init() must have been called first.

* @param[in] PinIndex       Pin ID number.
* @param[in] PinMode        New Port Pin mode to be set on port pin.
* @param[in] pConfigPtr     Pointer to the initialization data structure
*
* @implements PORT_IPW_SetPinMode_Activity
* @api
*/
Std_ReturnType Port_Ipw_SetPinMode
(
    Port_PinType PinIndex,
    Port_PinModeType PinMode,
    const Port_ConfigType * pConfigPtr
)
{
    Std_ReturnType PinModeError = (Std_ReturnType)0UL;
    uint16 u16MscrIdx           = pConfigPtr->pUsedPadConfig[PinIndex].u16MscrIdx;
    uint8 u8MscrSiulInstance    = pConfigPtr->pUsedPadConfig[PinIndex].u8MscrSiulInstance;
    uint16 u16PinDescWord;
    uint8 u8PinDescBitOffset;

#if (STD_ON == PORT_DEV_ERROR_DETECT)
    uint8 CoreId;
    CoreId = (uint8)Port_GetCoreID();

    if (PinIndex >= (Port_PinType)pConfigPtr->u16NumPins)
    {
        (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)PORT_SETPINMODE_ID, (uint8)PORT_E_PARAM_PIN);
    }
    /* Check if this function was called with wrong core */
    else if ((uint32)1 != (((pConfigPtr->pau32Port_PinToPartitionMap[PinIndex]) & ((uint32)1 << CoreId)) >> CoreId))
    {
        (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)PORT_SETPINMODE_ID, (uint8)PORT_E_PARAM_CONFIG);
    }
    /* Check port pin mode Unchangeable */
    else if (FALSE ==  pConfigPtr->pUsedPadConfig[PinIndex].bMC)
    {
        (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)PORT_SETPINMODE_ID, (uint8)PORT_E_MODE_UNCHANGEABLE);
    }
    else
    {
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

        if (PORT_NUM_PIN_MODES_U8 <= PinMode)
        {
            PinModeError = PORT_E_PARAM_INVALID_MODE;
        }
        else
        {
            /* Bit offset of Pin index inside the pin description matrix */
            u8PinDescBitOffset = (uint8)(u16MscrIdx & SIUL2_MODE_BIT_OFFSET_MASK_U8);
            /* Selected word inside the pin description matrix */
            u16PinDescWord = (uint16)((*(Port_apSiul2InstancePinModeAvailability[u8MscrSiulInstance]))[(uint8)PinMode][u16MscrIdx>>4]);

            /* Check if desired mode is valid for selected pin */
            if ((uint16)0UL != (u16PinDescWord & (uint16)(1UL << u8PinDescBitOffset)))
            {
                Port_Ipw_SetMode(u8MscrSiulInstance, u16MscrIdx, PinIndex, PinMode, pConfigPtr);
            }
            else
            {
                PinModeError = PORT_E_PARAM_INVALID_MODE;
            }
        }
#if (STD_ON == PORT_DEV_ERROR_DETECT)
    }
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
    return (PinModeError);

}
#endif /* (STD_ON == PORT_SET_PIN_MODE_API) */

#if (STD_ON == PORT_SET_PIN_MODE_API)
#if (STD_ON == PORT_DEV_ERROR_DETECT)
/**
* @brief    Sets or resets the direction changeability for pads in GPIO mode.
* @details  The function will update the direction changeabilty for the pads whose mode is changed
*
* @param[in] u16MscrIdx     Index of the pin's Mscr.
* @param[in] bStatus        The new value true or falsr for directuion changeability.
*
* @return    None
*
* @pre  none
* @post none
*
*
*/
void Port_Ipw_SetGpioDirChangeability
(
    uint8 u8ImcrSiulInstance,
    uint16 u16MscrIdx,
    boolean bStatus
)
{
    /* Pin description variables */
    uint16 u16PinDirFlagWord;
    uint8 u8PinBitOffset;

    /* Enter critical region */
    SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00();
    /* Bit offset of Pin index inside the pin description matrix */
    u8PinBitOffset    = (uint8)((uint8)u16MscrIdx & SIUL2_BIT_OFFSET_MASK_U8);
    u16PinDirFlagWord = Port_Ipw_au16GPIODirChangeability[u8ImcrSiulInstance][(uint8)((uint8)u16MscrIdx>>4)];

    if (TRUE == bStatus)
    {
        /* Set the change direction flag */
        u16PinDirFlagWord |= (uint16)(1UL<<u8PinBitOffset);
    }
    else
    {   /* Reset the change direction flag */
        u16PinDirFlagWord &= (uint16)(~((uint16)(1UL<<u8PinBitOffset)));
    }
    Port_Ipw_au16GPIODirChangeability[u8ImcrSiulInstance][(uint8)((uint8)u16MscrIdx>>4)] = u16PinDirFlagWord;
    /* Exit critical region */
    SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00();
}
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

#if (STD_OFF == PORT_SETPINMODE_DOES_NOT_TOUCH_GPIO_LEVEL)
/**
* @brief    Sets the output status of the pads in GPIO mode.
* @details  The function will update the output for the pads whose mode is changed
*
* @param[in] PinIndex       Pin ID number.
* @param[in] pConfigPtr     A pointer to the structure which contains initialization parameters
*
*
* @return    None
*
* @pre  none
* @post none
*
*
*/
void Port_Ipw_SetGpioPadOutput
(
    Port_PinType PinIndex,
    const Port_ConfigType * pConfigPtr
)
{

    uint16 u16MscrIdx         = pConfigPtr->pUsedPadConfig[PinIndex].u16MscrIdx;
    uint8 u8MscrSiulInstance  = pConfigPtr->pUsedPadConfig[PinIndex].u8MscrSiulInstance;
    uint8 u8LocalPDO          = pConfigPtr->pUsedPadConfig[PinIndex].u8PDO;

    if (u8LocalPDO != PORT_PIN_LEVEL_NOTCHANGED_U8)
    {
        /* Write the value into GPDO register */
        PORT_WRITE8(SIUL2_GPDO_ADDR8(u8MscrSiulInstance, u16MscrIdx), u8LocalPDO);
    }

}
#endif /* (STD_OFF == PORT_SETPINMODE_DOES_NOT_TOUCH_GPIO_LEVEL) */
#endif /* (STD_ON == PORT_SET_PIN_MODE_API) */

/**
* @brief   Refreshes port direction.
* @details This service shall refresh the direction of all configured ports to the configured
*          direction. The PORT driver shall exclude from refreshing those port pins that are
*          configured as pin direction changeable during runtime.
*
* @param[in]     numPins    Number of pins to be refreshed
* @return none
*
* @pre Port_Init must have been called
* @post none
*
*/
void Port_Ipw_RefreshPortDirection
(
    const Port_ConfigType * pConfigPtr
)
{

    uint16 u16NumPins = pConfigPtr->u16NumPins;
    /* Index of the port table */
    uint16 u16PinIndex;
    uint16 u16MscrIdx;
    uint8 u8MscrSiulInstance;
    uint32 u32LocalMSCR;
    /* Initialize All Configured Port Pins that aren't direction changable */
    for (u16PinIndex = (uint16)0U; u16PinIndex < u16NumPins; u16PinIndex++)
    {
        if (FALSE == pConfigPtr->pUsedPadConfig[u16PinIndex].bDC)
        {
            /* Point to the Port Pin MSCR register address */
            u16MscrIdx         = pConfigPtr->pUsedPadConfig[u16PinIndex].u16MscrIdx;
            u8MscrSiulInstance = pConfigPtr->pUsedPadConfig[u16PinIndex].u8MscrSiulInstance;

            /* Return the value from MSCR register with MscrInstance */
            u32LocalMSCR = PORT_READ32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx));

            /* Configures Port Pin as Output */
            if (0x0U != (pConfigPtr->pUsedPadConfig[u16PinIndex].u32MSCR & SIUL2_MSCR_OBE_U32))
            {
                u32LocalMSCR = u32LocalMSCR | SIUL2_MSCR_OBE_ON_U32;
            }
            else
            {
                u32LocalMSCR = u32LocalMSCR & ~(SIUL2_MSCR_OBE_ON_U32);
            }

            /* Configures Port Pin as Input */
            if (0x0U != (pConfigPtr->pUsedPadConfig[u16PinIndex].u32MSCR & SIUL2_MSCR_IBE_U32))
            {
                u32LocalMSCR = u32LocalMSCR | SIUL2_MSCR_IBE_ON_U32;
            }
            else
            {
                u32LocalMSCR = u32LocalMSCR & ~(SIUL2_MSCR_IBE_ON_U32);
            }
            PORT_WRITE32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx), u32LocalMSCR);
        }
    }
}

#ifdef PORT_SET_AS_UNUSED_PIN_API
#if (STD_ON == PORT_SET_AS_UNUSED_PIN_API)
/**
* @brief   Set as unused pin.
* @details This function shall configure the referenced pin with all
*          the properties specified in the NotUsedPortPin container.
*
* @param[in] PinIndex       Pin ID number.
* @param[in] pConfigPtr     A pointer to the structure which contains initialization parameters
*
* @return none
*
* @pre Port_Init must have been called
* @post none
*/
void Port_Ipw_SetAsUnusedPin
(
    Port_PinType PinIndex,
    const Port_ConfigType *pConfigPtr
)
{
    uint16 u16MscrIdx           = pConfigPtr->pUsedPadConfig[PinIndex].u16MscrIdx;
    uint8 u8LocalPDO            = pConfigPtr->pUnusedPadConfig->u8PDO;
    uint32 u32LocalMSCR         = pConfigPtr->pUnusedPadConfig->u32MSCR;
    uint8 u8MscrSiulInstance;

    u8MscrSiulInstance          = pConfigPtr->pUsedPadConfig[PinIndex].u8MscrSiulInstance;

#if (STD_ON == PORT_DEV_ERROR_DETECT)
    uint8 CoreId;
    CoreId = (uint8)Port_GetCoreID();

    if (PinIndex >= (Port_PinType)pConfigPtr->u16NumPins)
    {
        (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)PORT_SETASUNUSEDPIN_ID, (uint8)PORT_E_PARAM_PIN);
    }
    /* Check if this function was called with wrong core */
    else if ((uint32)1 != (((pConfigPtr->pau32Port_PinToPartitionMap[PinIndex]) & ((uint32)1 << CoreId)) >> CoreId))
    {
        (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)PORT_SETASUNUSEDPIN_ID, (uint8)PORT_E_PARAM_CONFIG);
    }
    /* Check port pin mode Unchangeable */
    else if (FALSE ==  pConfigPtr->pUsedPadConfig[PinIndex].bMC)
    {
        (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)PORT_SETASUNUSEDPIN_ID, (uint8)PORT_E_MODE_UNCHANGEABLE);
    }
    else
    {
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

        if (u8LocalPDO != PORT_PIN_LEVEL_NOTCHANGED_U8)
        {
            /* Write the value into GPDO register */
            PORT_WRITE8(SIUL2_GPDO_ADDR8(u8MscrSiulInstance, u16MscrIdx), u8LocalPDO);
        }

        /* Write MSCR configuration from Configuration tool */
        PORT_WRITE32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx), u32LocalMSCR);
#if (STD_ON == PORT_DEV_ERROR_DETECT)
    }
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
}

/**
* @brief   Set as used pin.
* @details This function shall configure the referenced pin with
*          all the properties that where set during the Port_Init operation.
*
* @param[in] PinIndex     Pin ID number.
* @param[in] pConfigPtr     A pointer to the structure which contains initialization parameters
*
* @return none
*
* @pre Port_Init must have been called
* @post none
*/
void Port_Ipw_SetAsUsedPin
(
    Port_PinType PinIndex,
    const Port_ConfigType *pConfigPtr
)
{
    uint16 u16MscrIdx           = pConfigPtr->pUsedPadConfig[PinIndex].u16MscrIdx;
    uint8 u8LocalPDO            = pConfigPtr->pUsedPadConfig[PinIndex].u8PDO;
    uint32 u32LocalMSCR         = pConfigPtr->pUsedPadConfig[PinIndex].u32MSCR;
    uint8 u8MscrSiulInstance;
    u8MscrSiulInstance          = pConfigPtr->pUsedPadConfig[PinIndex].u8MscrSiulInstance;

#if (STD_ON == PORT_DEV_ERROR_DETECT)
    uint8 CoreId;
    CoreId = (uint8)Port_GetCoreID();

    if (PinIndex >= (Port_PinType)pConfigPtr->u16NumPins)
    {
        (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)PORT_SETASUSEDPIN_ID, (uint8)PORT_E_PARAM_PIN);
    }
    /* Check if this function was called with wrong core */
    else if ((uint32)1 != (((pConfigPtr->pau32Port_PinToPartitionMap[PinIndex]) & ((uint32)1 << CoreId)) >> CoreId))
    {
        (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)PORT_SETASUSEDPIN_ID, (uint8)PORT_E_PARAM_CONFIG);
    }
    /* Check port pin mode Unchangeable */
    else if (FALSE ==  pConfigPtr->pUsedPadConfig[PinIndex].bMC)
    {
        (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)PORT_SETASUSEDPIN_ID, (uint8)PORT_E_MODE_UNCHANGEABLE);
    }
    else
    {
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

        /* If a pin is GPIO mode */
        if (TRUE == pConfigPtr->pUsedPadConfig[PinIndex].bGPIO)
        {
            if (u8LocalPDO != PORT_PIN_LEVEL_NOTCHANGED_U8)
            {
                /* Write the value into GPDO register */
                PORT_WRITE8(SIUL2_GPDO_ADDR8(u8MscrSiulInstance, u16MscrIdx), u8LocalPDO);
            }
        }
        PORT_WRITE32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx), u32LocalMSCR);
#if (STD_ON == PORT_DEV_ERROR_DETECT)
    }
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
}
#endif /* (STD_ON == PORT_SET_AS_UNUSED_PIN_API) */
#endif

#ifdef PORT_RESET_PIN_MODE_API
#if (STD_ON == PORT_RESET_PIN_MODE_API)

/**
* @brief   Reset Pin Mode.
* @details This function shall revert the port pin mode of the referenced pin
*          to the value that was set by Port_Init operation.
*
* @param[in] PinIndex       Pin ID number.
* @param[in] pConfigPtr     A pointer to the structure which contains initialization parameters
*
* @return none
*
* @pre Port_Init must have been called
* @post none
*/
void Port_Ipw_ResetPinMode
(
    Port_PinType PinIndex,
    const Port_ConfigType * pConfigPtr
)
{
    uint16 u16MscrIdx           = pConfigPtr->pUsedPadConfig[PinIndex].u16MscrIdx;
    uint16 u16ImcrIdx           = pConfigPtr->pUsedPadConfig[PinIndex].u16ImcrIdx;
    uint32 u32LocalMSCR         = pConfigPtr->pUsedPadConfig[PinIndex].u32MSCR;
    uint32 u32MscrMode;
    uint32 u32LocalVar;
    uint8 u8Imcr;
    uint32 u32Imcr;
    uint8 u8MscrSiulInstance;
    uint8 u8ImcrSiulInstance;

#if (STD_ON == PORT_DEV_ERROR_DETECT)
    uint8 CoreId;
    CoreId = (uint8)Port_GetCoreID();

    if ((PinIndex >= (Port_PinType)pConfigPtr->u16NumPins))
    {
        (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)PORT_RESETPINMODE_ID, (uint8)PORT_E_PARAM_PIN);
    }
    /* Check if this function was called with wrong core */
    else if ((uint32)1 != (((pConfigPtr->pau32Port_PinToPartitionMap[PinIndex]) & ((uint32)1 << CoreId)) >> CoreId))
    {
        (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)PORT_RESETPINMODE_ID, (uint8)PORT_E_PARAM_CONFIG);
    }
    /* Check port pin mode Unchangeable */
    else if (FALSE ==  pConfigPtr->pUsedPadConfig[PinIndex].bMC)
    {
        (void)Det_ReportError((uint16)PORT_MODULE_ID, (uint8)PORT_INSTANCE_ID, (uint8)PORT_RESETPINMODE_ID, (uint8)PORT_E_MODE_UNCHANGEABLE);
    }
    else
    {
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */

        u8ImcrSiulInstance = PORT_SIUL2_0_U8;
        u32MscrMode        = u32LocalMSCR & (SIUL2_MSCR_SSS_U32 | SIUL2_MSCR_OBE_U32 | SIUL2_MSCR_IBE_U32 | SIUL2_MSCR_SMC_MASK);
        u8MscrSiulInstance = pConfigPtr->pUsedPadConfig[PinIndex].u8MscrSiulInstance;

        /* Return the value from MSCR register with MscrInstance */
        u32LocalVar = PORT_READ32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx));

        /* Revert the MSCR value of the reference pin */
        u32LocalVar &= ~(SIUL2_MSCR_SSS_U32 | SIUL2_MSCR_OBE_U32 | SIUL2_MSCR_IBE_U32 | SIUL2_MSCR_SMC_MASK);
        u32LocalVar = u32LocalVar | u32MscrMode;

        PORT_WRITE32(SIUL2_MSCR_ADDR32(u8MscrSiulInstance, (uint32)u16MscrIdx), u32LocalVar);

        /* Revert the IMCR value of the reference pin */
        /* If that pin is in the mode which the IMCR is existed */
        if (TRUE == pConfigPtr->pUsedPadConfig[PinIndex].bImcr)
        {
            if (u16ImcrIdx < PORT_SIUL2_0_NUM_IMCRS_U16)
            {
                u8ImcrSiulInstance = PORT_SIUL2_0_U8;
                u8Imcr = pConfigPtr->pImcrConfig[PORT_SIUL2_0_U8][u16ImcrIdx];
            }
#ifdef PORT_SIUL2_1_U8
            else
            {
                u8ImcrSiulInstance = PORT_SIUL2_1_U8;
                u8Imcr = pConfigPtr->pImcrConfig[PORT_SIUL2_1_U8][u16ImcrIdx];
            }
#endif /* PORT_SIUL2_1_U8 */
            if (SIUL2_UNUSED_IMCR_PATTERN_U8 != u8Imcr)
            {
                u32Imcr = ((((uint32)u8Imcr) << SIUL2_IMCR_SSS_OFFSET_U32) & SIUL2_IMCR_SSS_U32);

                /* Write the value into IMCR register */
                PORT_WRITE32(SIUL2_IMCR_ADDR32(u8ImcrSiulInstance, (uint32)u16ImcrIdx), u32Imcr);
            }
        }
#if (STD_ON == PORT_DEV_ERROR_DETECT)
    }
#endif /* (STD_ON == PORT_DEV_ERROR_DETECT) */
}
#endif /* (STD_ON == PORT_RESET_PIN_MODE_API) */
#endif

#define PORT_STOP_SEC_CODE
#include "Port_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */

/* End of File */
