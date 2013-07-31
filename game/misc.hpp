/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_MISC_HPP
#define __LIBM2_GAME_MISC_HPP
namespace libm2{
enum e_overtime {OT_NONE, OT_3HOUR, OT_5HOUR};
int get_global_time();
const char* locale_find(const char*);
}
#endif // __LIBM2_GAME_MISC_HPP
