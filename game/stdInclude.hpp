/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "fwDecl.hpp"
#ifndef __LIBM2_GAME_STDINCLUDE_HPP
#define __LIBM2_GAME_STDINCLUDE_HPP
namespace libm2{
// Typedefs
typedef int socket_t;
typedef uint8_t BYTE;
typedef uint16_t WORD;
typedef uint32_t DWORD;
typedef uint64_t QWORD;

typedef struct seq_t {
    BYTE hdr;
    BYTE seq;
} seq_t;

typedef std::vector<seq_t,std::allocator<seq_t> > seq_vector_t;
}
#endif // __LIBM2_GAME_STDINCLUDE_HPP
