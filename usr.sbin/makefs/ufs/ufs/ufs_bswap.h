/*	$OpenBSD: ufs_bswap.h,v 1.4 2016/10/16 22:23:08 tedu Exp $	*/
/*	$NetBSD: ufs_bswap.h,v 1.21 2016/04/29 03:05:04 christos Exp $	*/

/*
 * Copyright (c) 1998 Manuel Bouyer.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef _UFS_UFS_BSWAP_H_
#define _UFS_UFS_BSWAP_H_

#include <sys/endian.h>

/* inlines for access to swapped data */
static inline u_int16_t
ufs_rw16(uint16_t a, int ns)
{
	return a;
}

static inline u_int32_t
ufs_rw32(uint32_t a, int ns)
{
	return a;
}

static inline u_int64_t
ufs_rw64(uint64_t a, int ns)
{
	return a;
}

#define ufs_add32(a, b, ns) \
	(a) = ufs_rw32(ufs_rw32((a), (ns)) + (b), (ns))
#define ufs_add64(a, b, ns) \
	(a) = ufs_rw64(ufs_rw64((a), (ns)) + (b), (ns))

#endif /* !_UFS_UFS_BSWAP_H_ */
