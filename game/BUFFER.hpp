#ifndef __LIBM2_GAME_BUFFER_HPP
#define __LIBM2_GAME_BUFFER_HPP
namespace libm2{
typedef struct buffer {
    buffer *next;
    char *write_point;
    int write_point_pos;
    const char *read_point;
    int length;
    char *mem_data;
    int mem_size;
    long flag;
} BUFFER, * LPBUFFER;
}
#endif // __LIBM2_GAME_BUFFER_HPP
