/*
 * arch/s390/include/asm/linkage.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#include <linux/stringify.h>

#define __ALIGN .align 4, 0x07
#define __ALIGN_STR __stringify(__ALIGN)

#endif
