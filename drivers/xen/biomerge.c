/*
 * drivers/xen/biomerge.c
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#include <linux/bio.h>
#include <linux/io.h>
#include <linux/export.h>
#include <xen/page.h>

bool xen_biovec_phys_mergeable(const struct bio_vec *vec1,
			       const struct bio_vec *vec2)
{
	unsigned long mfn1 = pfn_to_mfn(page_to_pfn(vec1->bv_page));
	unsigned long mfn2 = pfn_to_mfn(page_to_pfn(vec2->bv_page));

	return __BIOVEC_PHYS_MERGEABLE(vec1, vec2) &&
		((mfn1 == mfn2) || ((mfn1+1) == mfn2));
}
EXPORT_SYMBOL(xen_biovec_phys_mergeable);
