/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * This file is part of the libabw project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef __LIBABW_INTERNAL_H__
#define __LIBABW_INTERNAL_H__

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

/* Various functions/defines that need not/should not be exported externally */

#if defined(HAVE_FUNC_ATTRIBUTE_FORMAT)
#define ABW_ATTRIBUTE_PRINTF(fmt, arg) __attribute__((format(printf, fmt, arg)))
#else
#define ABW_ATTRIBUTE_PRINTF(fmt, arg)
#endif

namespace libabw
{
void debugPrint(const char *format, ...) ABW_ATTRIBUTE_PRINTF(1, 2);
}

#ifdef DEBUG
#define ABW_DEBUG_MSG(M) libabw::debugPrint M
#else
#define ABW_DEBUG_MSG(M)
#endif

#define ABW_NUM_ELEMENTS(array) sizeof(array)/sizeof(array[0])

#endif /* LIBABW_INTERNAL_H */
/* vim:set shiftwidth=2 softtabstop=2 expandtab: */
