/*
 *  Copyright (c) 2016, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 */

#ifndef FATAL_INCLUDE_fatal_type_fold_h
#define FATAL_INCLUDE_fatal_type_fold_h

#include <fatal/type/impl/fold.h>

namespace fatal {

template <typename Seed, typename Fn, typename T>
using fold = typename impl_fld::F<Seed, Fn, T>::type;

} // namespace fatal {

#endif // FATAL_INCLUDE_fatal_type_fold_h
