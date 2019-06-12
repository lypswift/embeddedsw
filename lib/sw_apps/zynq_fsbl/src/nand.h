/******************************************************************************
*
* Copyright (C) 2012 - 2014 Xilinx, Inc.  All rights reserved.
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
/*****************************************************************************/
/**
*
* @file nand.h
*
* This file contains the interface for the NAND FLASH functionality
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver	Who	Date		Changes
* ----- ---- -------- -------------------------------------------------------
* 1.00a ecm	01/10/10 Initial release
* 2.00a mb	30/05/12 added the flag XPAR_PS7_NAND_0_BASEADDR
* 10.00a kc 08/04/14 Fix for CR#809336 - Removed smc.h
* </pre>
*
* @note
*
******************************************************************************/
#ifndef ___NAND_H___
#define ___NAND_H___


#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/


#ifdef XPAR_PS7_NAND_0_BASEADDR

#include "xnandps.h"
#include "xnandps_bbm.h"
/**************************** Type Definitions *******************************/

/************************** Constant Definitions *****************************/

/**************************** Type Definitions *******************************/

/***************** Macros (Inline Functions) Definitions *********************/

/************************** Function Prototypes ******************************/
u32 InitNand(void);

u32 NandAccess( u32 SourceAddress,
                u32 DestinationAddress,
                u32 LengthWords);
#endif
/************************** Variable Definitions *****************************/


#ifdef __cplusplus
}
#endif


#endif /* ___NAND_H___ */

