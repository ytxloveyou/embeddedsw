/******************************************************************************
*
* Copyright (C) 2018 Xilinx, Inc.  All rights reserved.
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
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/

/*****************************************************************************/
/**
* @file xaiegbl_defs.h
* @{
*
* This file contains the generic definitions for the AIE drivers.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who     Date     Changes
* ----- ------  -------- -----------------------------------------------------
* 1.0  Naresh  03/23/2018  Initial creation
* 1.1  Naresh  07/11/2018  Updated copyright info
* 1.2  Hyun    10/10/2018  Added the mask write API
* 1.3  Nishad  12/05/2018  Renamed ME attributes to AIE
* </pre>
*
******************************************************************************/
#ifndef XAIEGBL_DEFS_H
#define XAIEGBL_DEFS_H

/***************************** Include Files *********************************/
#include "xaielib.h"

/************************** Constant Definitions *****************************/
#define XAIE_SUCCESS			XAIELIB_SUCCESS
#define XAIE_FAILURE			XAIELIB_FAILURE
#define XAIE_COMPONENT_IS_READY		XAIELIB_COMPONENT_IS_READY

#define XAIE_NULL			(void *)0U
#define XAIE_ENABLE			1U
#define XAIE_DISABLE			0U
#define XAIE_RESETENABLE			1U
#define XAIE_RESETDISABLE		0U

#define XAIEGBL_CMDIO_COMMAND_SETSTACK	XAIELIB_CMDIO_COMMAND_SETSTACK
#define XAIEGBL_CMDIO_COMMAND_LOADSYM	XAIELIB_CMDIO_COMMAND_LOADSYM
#define XAIEGBL_TILE_BASE_ADDRESS        XAIELIB_TILE_BASE_ADDRESS

#define XAie_print			XAieLib_print
#define XAie_usleep			XAieLib_usleep
#define XAie_AssertNonvoid		XAieLib_AssertNonvoid
#define XAie_AssertVoid			XAieLib_AssertVoid

#define XAie_SetField(Val, Lsb, Mask)	(((u32)Val << Lsb) & Mask)
#define XAie_GetField(Val, Lsb, Mask)	(((u32)Val & Mask) >> Lsb)

#define XAieGbl_Read32                   XAieLib_Read32
#define XAieGbl_Read128                  XAieLib_Read128
#define XAieGbl_Write32                  XAieLib_Write32
#define XAieGbl_MaskWrite32              XAieLib_MaskWrite32
#define XAieGbl_Write128                 XAieLib_Write128
#define XAieGbl_WriteCmd                 XAieLib_WriteCmd
#define XAieGbl_LoadElf                  XAieLib_LoadElf

#define XAieGbl_MemInst                  XAieLib_MemInst
#define XAieGbl_MemInit                  XAieLib_MemInit
#define XAieGbl_MemFinish                XAieLib_MemFinish
#define XAieGbl_MemGetSize               XAieLib_MemGetSize
#define XAieGbl_MemGetVaddr              XAieLib_MemGetVaddr
#define XAieGbl_MemGetPaddr              XAieLib_MemGetPaddr
#define XAieGbl_MemRead32                XAieLib_MemRead32
#define XAieGbl_MemWrite32               XAieLib_MemWrite32

/************************** Variable Definitions *****************************/

/************************** Function Prototypes  *****************************/

#endif		/* end of protection macro */
/** @} */

