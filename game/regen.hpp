#ifndef __LIBM2_GAME_REGEN_HPP
#define __LIBM2_GAME_REGEN_HPP
namespace libm2{
typedef struct regen* LPREGEN;
struct regen {
    LPREGEN prev;
    LPREGEN next;
    long lMapIndex;
    int type;
    int sx;
    int sy;
    int ex;
    int ey;
    BYTE z_section;
    BYTE direction;
    DWORD time;
    int max_count;
    int count;
    int vnum;
    bool is_aggressive;
    LPEVENT event;
    size_t id;
  public:
    regen(void);
};
}
#endif // __LIBM2_GAME_REGEN_HPP
