/*********************************************************************************************************//**
 * @file    TM/TriggerCounter/ht32_board_config.h
 * @version $Rev:: 4696         $
 * @date    $Date:: 2020-03-14 #$
 * @brief   The header file of board configuration.
 *************************************************************************************************************
 * @attention
 *
 * Firmware Disclaimer Information
 *
 * 1. The customer hereby acknowledges and agrees that the program technical documentation, including the
 *    code, which is supplied by Holtek Semiconductor Inc., (hereinafter referred to as "HOLTEK") is the
 *    proprietary and confidential intellectual property of HOLTEK, and is protected by copyright law and
 *    other intellectual property laws.
 *
 * 2. The customer hereby acknowledges and agrees that the program technical documentation, including the
 *    code, is confidential information belonging to HOLTEK, and must not be disclosed to any third parties
 *    other than HOLTEK and the customer.
 *
 * 3. The program technical documentation, including the code, is provided "as is" and for customer reference
 *    only. After delivery by HOLTEK, the customer shall use the program technical documentation, including
 *    the code, at their own risk. HOLTEK disclaims any expressed, implied or statutory warranties, including
 *    the warranties of merchantability, satisfactory quality and fitness for a particular purpose.
 *
 * <h2><center>Copyright (C) Holtek Semiconductor Inc. All rights reserved</center></h2>
 ************************************************************************************************************/
/* Define to prevent recursive inclusion -------------------------------------------------------------------*/
#ifndef __HT32_BOARD_CONFIG_H
#define __HT32_BOARD_CONFIG_H

#ifdef __cplusplus
 extern "C" {
#endif


/* Settings ------------------------------------------------------------------------------------------------*/
#if defined(USE_HT32F52230_SK)
  #define _HTCFG_CAP_GPIOX                        A
  #define _HTCFG_CAP_GPION                        0
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#if defined(USE_HT32F52241_SK)
  #define _HTCFG_CAP_GPIOX                        A
  #define _HTCFG_CAP_GPION                        0
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#if defined(USE_HT32F52253_SK)
  #define _HTCFG_CAP_GPIOX                        A
  #define _HTCFG_CAP_GPION                        0
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#if defined(USE_HT32F52341_SK)
  #define _HTCFG_CAP_GPIOX                        A
  #define _HTCFG_CAP_GPION                        0
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#if defined(USE_HT32F52352_SK)
  #define _HTCFG_CAP_GPIOX                        C
  #define _HTCFG_CAP_GPION                        4
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#if defined(USE_HT32F0008_SK)
  #define _HTCFG_CAP_GPIOX                        A
  #define _HTCFG_CAP_GPION                        0
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#if defined(USE_HT32F50230_SK)
  #define _HTCFG_CAP_GPIOX                        A
  #define _HTCFG_CAP_GPION                        0
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#if defined(USE_HT32F50241_SK)
  #define _HTCFG_CAP_GPIOX                        A
  #define _HTCFG_CAP_GPION                        0
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#if defined(USE_HT32F52354_SK)
  #define _HTCFG_CAP_GPIOX                        A
  #define _HTCFG_CAP_GPION                        0
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#if defined(USE_HT32F0006_DVB)
  #define _HTCFG_CAP_GPIOX                        C
  #define _HTCFG_CAP_GPION                        4
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#if defined(USE_HT32F57341_SK)
  #define _HTCFG_CAP_GPIOX                        C
  #define _HTCFG_CAP_GPION                        10
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#if defined(USE_HT32F57352_SK)
  #define _HTCFG_CAP_GPIOX                        C
  #define _HTCFG_CAP_GPION                        10
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#if defined(USE_HT32F50343_SK)
  #define _HTCFG_CAP_GPIOX                        A
  #define _HTCFG_CAP_GPION                        0
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#if defined(USE_HT32F52367_SK)
  #define _HTCFG_CAP_GPIOX                        A
  #define _HTCFG_CAP_GPION                        0
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#if defined(USE_HT32F65240_DVB)
  #define _HTCFG_CAP_GPIOX                        A
  #define _HTCFG_CAP_GPION                        7
  #define  HTCFG_CAP_IPN                          GPTM0
#endif

#define HTCFG_CAP_GPIO_ID                         STRCAT2(GPIO_P,         _HTCFG_CAP_GPIOX)
#define HTCFG_CAP_AFIO_PIN                        STRCAT2(AFIO_PIN_,      _HTCFG_CAP_GPION)
#define HTCFG_CAP_PORT                            STRCAT2(HT_,             HTCFG_CAP_IPN)


#ifdef __cplusplus
}
#endif

#endif
