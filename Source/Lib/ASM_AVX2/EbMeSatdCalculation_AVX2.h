/*
* Copyright(c) 2018 Intel Corporation
* SPDX - License - Identifier: BSD - 2 - Clause - Patent
*/

#ifndef EbMeSatdCalculation_AVX2_h
#define EbMeSatdCalculation_AVX2_h

#include "EbDefinitions.h"
#ifdef __cplusplus
extern "C" {
#endif

EB_U32 SatdCalculation_16x16_avx2(
	EB_U8   *src,
	EB_U32   srcStride,
	EB_U8   *ref,
	EB_U32   refStride);

#ifdef __cplusplus
}
#endif        
#endif // EbMeSadCalculation_C_h