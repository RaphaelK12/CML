/* -*- C++ -*- ------------------------------------------------------------
 @@COPYRIGHT@@
 *-----------------------------------------------------------------------*/
/** @file
 */

#pragma once

#ifndef	cml_common_fixed_selector_h
#define	cml_common_fixed_selector_h

#include <cml/common/size_tags.h>

namespace cml {

/** Specializable type for 1D or 2D storage via a fixed-size array.
 *
 * @tparam Size1 Fixed first dimension size.
 * @tparam Size2 Optional fixed second dimension size.
 *
 * @note Fixed-length 1D arrays must define a constant, array_size,
 * containing the array length.
 *
 * @note Fixed-length 2D arrays must define two constants, array_rows and
 * array_cols, containing the number of rows and columns.
 */
template<int Size1, int Size2 = -1> struct fixed;

} // namespace cml

#endif

// -------------------------------------------------------------------------
// vim:ft=cpp:sw=2