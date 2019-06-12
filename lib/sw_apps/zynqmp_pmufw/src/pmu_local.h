/******************************************************************************
*
* Copyright (C) 2015-2019 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMANGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*
*
*
******************************************************************************/
#ifndef _PMU_LOCAL_H_
#define _PMU_LOCAL_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * PMU_LOCAL Base Address
 */
#define PMU_LOCAL_BASEADDR      ((u32)0XFFD60000U)

/**
 * Register: PMU_LOCAL_DOMAIN_ISO_CNTRL
 */
#define PMU_LOCAL_DOMAIN_ISO_CNTRL    ( ( PMU_LOCAL_BASEADDR ) + ((u32)0X000000F0U) )

#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_FP_LOCKED_SHIFT   31
#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_FP_LOCKED_WIDTH   1
#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_FP_LOCKED_MASK    ((u32)0X80000000U)

#define PMU_LOCAL_DOMAIN_ISO_CNTRL_FP_PL_SHIFT   5
#define PMU_LOCAL_DOMAIN_ISO_CNTRL_FP_PL_WIDTH   1
#define PMU_LOCAL_DOMAIN_ISO_CNTRL_FP_PL_MASK    ((u32)0X00000020U)

#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_PL_PCAP_SHIFT   4
#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_PL_PCAP_WIDTH   1
#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_PL_PCAP_MASK    ((u32)0X00000010U)

#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_PL_NON_PCAP_SHIFT   3
#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_PL_NON_PCAP_WIDTH   1
#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_PL_NON_PCAP_MASK    ((u32)0X00000008U)

#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_FP_2_SHIFT   2
#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_FP_2_WIDTH   1
#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_FP_2_MASK    ((u32)0X00000004U)

#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_FP_1_SHIFT   1
#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_FP_1_WIDTH   1
#define PMU_LOCAL_DOMAIN_ISO_CNTRL_LP_FP_1_MASK    ((u32)0X00000002U)

#define PMU_LOCAL_DOMAIN_ISO_CNTRL_PMU_SHIFT   0
#define PMU_LOCAL_DOMAIN_ISO_CNTRL_PMU_WIDTH   1
#define PMU_LOCAL_DOMAIN_ISO_CNTRL_PMU_MASK    ((u32)0X00000001U)

/**
 * Register: PMU_LOCAL_GPO1_READ
 */
#define PMU_LOCAL_GPO1_READ    ( ( PMU_LOCAL_BASEADDR ) + ((u32)0X00000214U) )

#define PMU_LOCAL_GPO1_READ_MIO_GPO_SHIFT   0
#define PMU_LOCAL_GPO1_READ_MIO_GPO_WIDTH   6
#define PMU_LOCAL_GPO1_READ_MIO_GPO_MASK    ((u32)0X0000003FU)

/**
 * Register: PMU_LOCAL_GPO2_READ
 */
#define PMU_LOCAL_GPO2_READ    ( ( PMU_LOCAL_BASEADDR ) + ((u32)0X00000218U) )

#define PMU_LOCAL_GPO2_READ_DAP_RPU_WAKE_ACK_SHIFT   9
#define PMU_LOCAL_GPO2_READ_DAP_RPU_WAKE_ACK_WIDTH   1
#define PMU_LOCAL_GPO2_READ_DAP_RPU_WAKE_ACK_MASK    ((u32)0X00000200U)

#define PMU_LOCAL_GPO2_READ_DAP_FP_WAKE_ACK_SHIFT   8
#define PMU_LOCAL_GPO2_READ_DAP_FP_WAKE_ACK_WIDTH   1
#define PMU_LOCAL_GPO2_READ_DAP_FP_WAKE_ACK_MASK    ((u32)0X00000100U)

#define PMU_LOCAL_GPO2_READ_PS_STATUS_SHIFT   7
#define PMU_LOCAL_GPO2_READ_PS_STATUS_WIDTH   1
#define PMU_LOCAL_GPO2_READ_PS_STATUS_MASK    ((u32)0X00000080U)

#define PMU_LOCAL_GPO2_READ_FP_LP_PWRDWN_REQ_SHIFT   6
#define PMU_LOCAL_GPO2_READ_FP_LP_PWRDWN_REQ_WIDTH   1
#define PMU_LOCAL_GPO2_READ_FP_LP_PWRDWN_REQ_MASK    ((u32)0X00000040U)

/**
 * Register: PMU_LOCAL_GPO3_READ
 */
#define PMU_LOCAL_GPO3_READ    ( ( PMU_LOCAL_BASEADDR ) + ((u32)0X0000021CU) )

#define PMU_LOCAL_GPO3_READ_PL_GPO_SHIFT   0
#define PMU_LOCAL_GPO3_READ_PL_GPO_WIDTH   32
#define PMU_LOCAL_GPO3_READ_PL_GPO_MASK    ((u32)0XFFFFFFFFU)

/**
 * Register: PMU_LOCAL_GPI1_ENABLE
 */
#define PMU_LOCAL_GPI1_ENABLE    ( ( PMU_LOCAL_BASEADDR ) + ((u32)0X00000224U) )

#define PMU_LOCAL_GPI1_ENABLE_APB_AIB_ERROR_SHIFT   31
#define PMU_LOCAL_GPI1_ENABLE_APB_AIB_ERROR_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_APB_AIB_ERROR_MASK    ((u32)0X80000000U)

#define PMU_LOCAL_GPI1_ENABLE_AXI_AIB_ERROR_SHIFT   30
#define PMU_LOCAL_GPI1_ENABLE_AXI_AIB_ERROR_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_AXI_AIB_ERROR_MASK    ((u32)0X40000000U)

#define PMU_LOCAL_GPI1_ENABLE_ERROR_REG2_INT_SHIFT   29
#define PMU_LOCAL_GPI1_ENABLE_ERROR_REG2_INT_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_ERROR_REG2_INT_MASK    ((u32)0X20000000U)

#define PMU_LOCAL_GPI1_ENABLE_ERROR_REG1_INT_SHIFT   28
#define PMU_LOCAL_GPI1_ENABLE_ERROR_REG1_INT_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_ERROR_REG1_INT_MASK    ((u32)0X10000000U)

#define PMU_LOCAL_GPI1_ENABLE_DBG_ACPU3_PWRUP_REQ_SHIFT   23
#define PMU_LOCAL_GPI1_ENABLE_DBG_ACPU3_PWRUP_REQ_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_DBG_ACPU3_PWRUP_REQ_MASK    ((u32)0X00800000U)

#define PMU_LOCAL_GPI1_ENABLE_DBG_ACPU2_PWRUP_REQ_SHIFT   22
#define PMU_LOCAL_GPI1_ENABLE_DBG_ACPU2_PWRUP_REQ_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_DBG_ACPU2_PWRUP_REQ_MASK    ((u32)0X00400000U)

#define PMU_LOCAL_GPI1_ENABLE_DBG_ACPU1_PWRUP_REQ_SHIFT   21
#define PMU_LOCAL_GPI1_ENABLE_DBG_ACPU1_PWRUP_REQ_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_DBG_ACPU1_PWRUP_REQ_MASK    ((u32)0X00200000U)

#define PMU_LOCAL_GPI1_ENABLE_DBG_ACPU0_PWRUP_REQ_SHIFT   20
#define PMU_LOCAL_GPI1_ENABLE_DBG_ACPU0_PWRUP_REQ_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_DBG_ACPU0_PWRUP_REQ_MASK    ((u32)0X00100000U)

#define PMU_LOCAL_GPI1_ENABLE_FPD_WAKE_GIC_PROX_SHIFT   16
#define PMU_LOCAL_GPI1_ENABLE_FPD_WAKE_GIC_PROX_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_FPD_WAKE_GIC_PROX_MASK    ((u32)0X00010000U)

#define PMU_LOCAL_GPI1_ENABLE_MIO_WAKE_SHIFT   10
#define PMU_LOCAL_GPI1_ENABLE_MIO_WAKE_WIDTH   6
#define PMU_LOCAL_GPI1_ENABLE_MIO_WAKE_MASK    ((u32)0X0000FC00U)

#define PMU_LOCAL_GPI1_ENABLE_DAP_RPU_WAKE_SHIFT   9
#define PMU_LOCAL_GPI1_ENABLE_DAP_RPU_WAKE_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_DAP_RPU_WAKE_MASK    ((u32)0X00000200U)

#define PMU_LOCAL_GPI1_ENABLE_DAP_FP_WAKE_SHIFT   8
#define PMU_LOCAL_GPI1_ENABLE_DAP_FP_WAKE_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_DAP_FP_WAKE_MASK    ((u32)0X00000100U)

#define PMU_LOCAL_GPI1_ENABLE_USB1_WAKE_SHIFT   7
#define PMU_LOCAL_GPI1_ENABLE_USB1_WAKE_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_USB1_WAKE_MASK    ((u32)0X00000080U)

#define PMU_LOCAL_GPI1_ENABLE_USB0_WAKE_SHIFT   6
#define PMU_LOCAL_GPI1_ENABLE_USB0_WAKE_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_USB0_WAKE_MASK    ((u32)0X00000040U)

#define PMU_LOCAL_GPI1_ENABLE_R5_1_WAKE_SHIFT   5
#define PMU_LOCAL_GPI1_ENABLE_R5_1_WAKE_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_R5_1_WAKE_MASK    ((u32)0X00000020U)

#define PMU_LOCAL_GPI1_ENABLE_R5_0_WAKE_SHIFT   4
#define PMU_LOCAL_GPI1_ENABLE_R5_0_WAKE_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_R5_0_WAKE_MASK    ((u32)0X00000010U)

#define PMU_LOCAL_GPI1_ENABLE_ACPU3_WAKE_SHIFT   3
#define PMU_LOCAL_GPI1_ENABLE_ACPU3_WAKE_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_ACPU3_WAKE_MASK    ((u32)0X00000008U)

#define PMU_LOCAL_GPI1_ENABLE_ACPU2_WAKE_SHIFT   2
#define PMU_LOCAL_GPI1_ENABLE_ACPU2_WAKE_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_ACPU2_WAKE_MASK    ((u32)0X00000004U)

#define PMU_LOCAL_GPI1_ENABLE_ACPU1_WAKE_SHIFT   1
#define PMU_LOCAL_GPI1_ENABLE_ACPU1_WAKE_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_ACPU1_WAKE_MASK    ((u32)0X00000002U)

#define PMU_LOCAL_GPI1_ENABLE_ACPU0_WAKE_SHIFT   0
#define PMU_LOCAL_GPI1_ENABLE_ACPU0_WAKE_WIDTH   1
#define PMU_LOCAL_GPI1_ENABLE_ACPU0_WAKE_MASK    ((u32)0X00000001U)

/**
 * Register: PMU_LOCAL_GPI2_ENABLE
 */
#define PMU_LOCAL_GPI2_ENABLE    ( ( PMU_LOCAL_BASEADDR ) + ((u32)0X00000228U) )

#define PMU_LOCAL_GPI2_ENABLE_VCC_PSINTFP_ALARM_SHIFT   31
#define PMU_LOCAL_GPI2_ENABLE_VCC_PSINTFP_ALARM_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_VCC_PSINTFP_ALARM_MASK    ((u32)0X80000000U)

#define PMU_LOCAL_GPI2_ENABLE_VCC_PSINT_ALARM_SHIFT   30
#define PMU_LOCAL_GPI2_ENABLE_VCC_PSINT_ALARM_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_VCC_PSINT_ALARM_MASK    ((u32)0X40000000U)

#define PMU_LOCAL_GPI2_ENABLE_VCC_PSAUX_ALARM_SHIFT   29
#define PMU_LOCAL_GPI2_ENABLE_VCC_PSAUX_ALARM_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_VCC_PSAUX_ALARM_MASK    ((u32)0X20000000U)

#define PMU_LOCAL_GPI2_ENABLE_DBG_ACPU3_RST_REQ_SHIFT   23
#define PMU_LOCAL_GPI2_ENABLE_DBG_ACPU3_RST_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_DBG_ACPU3_RST_REQ_MASK    ((u32)0X00800000U)

#define PMU_LOCAL_GPI2_ENABLE_DBG_ACPU2_RST_REQ_SHIFT   22
#define PMU_LOCAL_GPI2_ENABLE_DBG_ACPU2_RST_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_DBG_ACPU2_RST_REQ_MASK    ((u32)0X00400000U)

#define PMU_LOCAL_GPI2_ENABLE_DBG_ACPU1_RST_REQ_SHIFT   21
#define PMU_LOCAL_GPI2_ENABLE_DBG_ACPU1_RST_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_DBG_ACPU1_RST_REQ_MASK    ((u32)0X00200000U)

#define PMU_LOCAL_GPI2_ENABLE_DBG_ACPU0_RST_REQ_SHIFT   20
#define PMU_LOCAL_GPI2_ENABLE_DBG_ACPU0_RST_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_DBG_ACPU0_RST_REQ_MASK    ((u32)0X00100000U)

#define PMU_LOCAL_GPI2_ENABLE_CP_ACPU3_RST_REQ_SHIFT   19
#define PMU_LOCAL_GPI2_ENABLE_CP_ACPU3_RST_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_CP_ACPU3_RST_REQ_MASK    ((u32)0X00080000U)

#define PMU_LOCAL_GPI2_ENABLE_CP_ACPU2_RST_REQ_SHIFT   18
#define PMU_LOCAL_GPI2_ENABLE_CP_ACPU2_RST_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_CP_ACPU2_RST_REQ_MASK    ((u32)0X00040000U)

#define PMU_LOCAL_GPI2_ENABLE_CP_ACPU1_RST_REQ_SHIFT   17
#define PMU_LOCAL_GPI2_ENABLE_CP_ACPU1_RST_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_CP_ACPU1_RST_REQ_MASK    ((u32)0X00020000U)

#define PMU_LOCAL_GPI2_ENABLE_CP_ACPU0_RST_REQ_SHIFT   16
#define PMU_LOCAL_GPI2_ENABLE_CP_ACPU0_RST_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_CP_ACPU0_RST_REQ_MASK    ((u32)0X00010000U)

#define PMU_LOCAL_GPI2_ENABLE_DBG_RPU1_RST_REQ_SHIFT   9
#define PMU_LOCAL_GPI2_ENABLE_DBG_RPU1_RST_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_DBG_RPU1_RST_REQ_MASK    ((u32)0X00000200U)

#define PMU_LOCAL_GPI2_ENABLE_DBG_RPU0_RST_REQ_SHIFT   8
#define PMU_LOCAL_GPI2_ENABLE_DBG_RPU0_RST_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_DBG_RPU0_RST_REQ_MASK    ((u32)0X00000100U)

#define PMU_LOCAL_GPI2_ENABLE_FP_LP_PWRDWN_ACK_SHIFT   6
#define PMU_LOCAL_GPI2_ENABLE_FP_LP_PWRDWN_ACK_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_FP_LP_PWRDWN_ACK_MASK    ((u32)0X00000040U)

#define PMU_LOCAL_GPI2_ENABLE_R5_1_PWRDWN_REQ_SHIFT   5
#define PMU_LOCAL_GPI2_ENABLE_R5_1_PWRDWN_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_R5_1_PWRDWN_REQ_MASK    ((u32)0X00000020U)

#define PMU_LOCAL_GPI2_ENABLE_R5_0_PWRDWN_REQ_SHIFT   4
#define PMU_LOCAL_GPI2_ENABLE_R5_0_PWRDWN_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_R5_0_PWRDWN_REQ_MASK    ((u32)0X00000010U)

#define PMU_LOCAL_GPI2_ENABLE_ACPU3_PWRDWN_REQ_SHIFT   3
#define PMU_LOCAL_GPI2_ENABLE_ACPU3_PWRDWN_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_ACPU3_PWRDWN_REQ_MASK    ((u32)0X00000008U)

#define PMU_LOCAL_GPI2_ENABLE_ACPU2_PWRDWN_REQ_SHIFT   2
#define PMU_LOCAL_GPI2_ENABLE_ACPU2_PWRDWN_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_ACPU2_PWRDWN_REQ_MASK    ((u32)0X00000004U)

#define PMU_LOCAL_GPI2_ENABLE_ACPU1_PWRDWN_REQ_SHIFT   1
#define PMU_LOCAL_GPI2_ENABLE_ACPU1_PWRDWN_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_ACPU1_PWRDWN_REQ_MASK    ((u32)0X00000002U)

#define PMU_LOCAL_GPI2_ENABLE_ACPU0_PWRDWN_REQ_SHIFT   0
#define PMU_LOCAL_GPI2_ENABLE_ACPU0_PWRDWN_REQ_WIDTH   1
#define PMU_LOCAL_GPI2_ENABLE_ACPU0_PWRDWN_REQ_MASK    ((u32)0X00000001U)

/**
 * Register: PMU_LOCAL_GPI3_ENABLE
 */
#define PMU_LOCAL_GPI3_ENABLE    ( ( PMU_LOCAL_BASEADDR ) + ((u32)0X0000022CU) )

#define PMU_LOCAL_GPI3_ENABLE_PL_GPI_SHIFT   0
#define PMU_LOCAL_GPI3_ENABLE_PL_GPI_WIDTH   32
#define PMU_LOCAL_GPI3_ENABLE_PL_GPI_MASK    ((u32)0XFFFFFFFFU)

/**
 * Register: PMU_LOCAL_PMU_SERV_ERR
 */
#define PMU_LOCAL_PMU_SERV_ERR    ( ( PMU_LOCAL_BASEADDR ) + ((u32)0X0000033CU) )

#define PMU_LOCAL_PMU_SERV_ERR_FWERR3_SHIFT   31
#define PMU_LOCAL_PMU_SERV_ERR_FWERR3_WIDTH   1
#define PMU_LOCAL_PMU_SERV_ERR_FWERR3_MASK    ((u32)0X80000000U)

#define PMU_LOCAL_PMU_SERV_ERR_FWERR2_SHIFT   30
#define PMU_LOCAL_PMU_SERV_ERR_FWERR2_WIDTH   1
#define PMU_LOCAL_PMU_SERV_ERR_FWERR2_MASK    ((u32)0X40000000U)

#define PMU_LOCAL_PMU_SERV_ERR_FWERR1_SHIFT   29
#define PMU_LOCAL_PMU_SERV_ERR_FWERR1_WIDTH   1
#define PMU_LOCAL_PMU_SERV_ERR_FWERR1_MASK    ((u32)0X20000000U)

#define PMU_LOCAL_PMU_SERV_ERR_FWERR0_SHIFT   28
#define PMU_LOCAL_PMU_SERV_ERR_FWERR0_WIDTH   1
#define PMU_LOCAL_PMU_SERV_ERR_FWERR0_MASK    ((u32)0X10000000U)

#define PMU_LOCAL_PMU_SERV_ERR_SERVERR_FLAG_SHIFT   23
#define PMU_LOCAL_PMU_SERV_ERR_SERVERR_FLAG_WIDTH   1
#define PMU_LOCAL_PMU_SERV_ERR_SERVERR_FLAG_MASK    ((u32)0X00800000U)

#define PMU_LOCAL_PMU_SERV_ERR_SERVERR_DATA_SHIFT   0
#define PMU_LOCAL_PMU_SERV_ERR_SERVERR_DATA_WIDTH   20
#define PMU_LOCAL_PMU_SERV_ERR_SERVERR_DATA_MASK    ((u32)0X000FFFFFU)

#ifdef __cplusplus
}
#endif


#endif /* _PMU_LOCAL_H_ */
