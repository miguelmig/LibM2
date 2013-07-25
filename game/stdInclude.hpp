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
