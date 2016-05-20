/*
 * Copyright 2010-2013 Intel Corporation.
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, version 2.1.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA.
 *
 * Disclaimer: The codes contained in these modules may be specific
 * to the Intel Software Development Platform codenamed Knights Ferry,
 * and the Intel product codenamed Knights Corner, and are not backward
 * compatible with other Intel products. Additionally, Intel will NOT
 * support the codes or instruction set in future products.
 *
 * Intel offers no warranty of any kind regarding the code. This code is
 * licensed on an "AS IS" basis and Intel is not obligated to provide
 * any support, assistance, installation, training, or other services
 * of any kind. Intel is also not obligated to provide any updates,
 * enhancements or extensions. Intel specifically disclaims any warranty
 * of merchantability, non-infringement, fitness for any particular
 * purpose, and any other warranty.
 *
 * Further, Intel disclaims all liability of any kind, including but
 * not limited to liability for infringement of any proprietary rights,
 * relating to the use of the code, even if Intel is notified of the
 * possibility of such liability. Except as expressly stated in an Intel
 * license agreement provided with this code and agreed upon with Intel,
 * no license, express or implied, by estoppel or otherwise, to any
 * intellectual property rights is granted herein.
 */

#ifndef _COIENGINE_COMMON_H
#define _COIENGINE_COMMON_H

/** @ingroup COIEngine
 *  @addtogroup COIEnginecommon
@{
* @file common/COIEngine_common.h
*/
#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "../common/COITypes_common.h"
#include "../common/COIResult_common.h"

#ifdef __cplusplus
extern "C" {
#endif
#endif // DOXYGEN_SHOULD_SKIP_THIS

#define COI_MAX_ISA_x86_64_DEVICES 1
#define COI_MAX_ISA_MIC_DEVICES 128
#define COI_MAX_ISA_KNF_DEVICES COI_MAX_ISA_MIC_DEVICES
#define COI_MAX_ISA_KNC_DEVICES COI_MAX_ISA_MIC_DEVICES


///////////////////////////////////////////////////////////////////////////////
///
///  List of ISA types of supported engines.
///
typedef enum
{
    COI_ISA_INVALID = 0,        ///< Represents an invalid ISA.
    COI_ISA_x86_64,             ///< The ISA for an x86_64 host engine.
    COI_ISA_MIC,                ///< Special value used to represent any device
                                ///< in the Intel(R) Many Integrated Core
                                ///< architecture family.
    COI_ISA_KNF,                ///< ISA for L1OM devices.
    COI_ISA_KNC                 ///< ISA for K1OM devices.
} COI_ISA_TYPE;


///////////////////////////////////////////////////////////////////////////////
///
/// Get the information about the COIEngine executing this function call.
///
/// @param  out_pType
///         [out] The COI_ISA_TYPE of the engine.
///
/// @param  out_pIndex
///         [out] The zero-based index of this engine in the collection of
///         engines of the ISA returned in out_pType.
///
/// @return COI_INVALID_POINTER if the any of the parameters are NULL.
///
/// @return COI_SUCCESS
///
COIACCESSAPI
COIRESULT
COIEngineGetIndex(
            COI_ISA_TYPE*       out_pType,
            uint32_t*           out_pIndex);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _COIENGINE_COMMON_H */

/*! @} */
