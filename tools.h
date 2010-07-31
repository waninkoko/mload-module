/*   
	Custom IOS Module (MLOAD)

	Copyright (C) 2008 neimod.
	Copyright (C) 2010 Hermes.
	Copyright (C) 2010 Waninkoko.

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _TOOLS_H_
#define _TOOLS_H_

#include "types.h"


/* Directr syscalls */
void DCInvalidateRange(void* ptr, int size);
void DCFlushRange(void* ptr, int size);
void ICInvalidate(void);

/* MLoad syscalls */
s32 Swi_MLoad(u32 arg0, u32 arg1, u32 arg2, u32 arg3);

/* ARM permissions */
u32  Perms_Read(void);
void Perms_Write(u32 flags);

/* MEM2 routines */
void MEM2_Prot(u32 flag);

/* Tools */
void *VirtToPhys(void *address);
void *PhysToVirt(void *address);

#endif

