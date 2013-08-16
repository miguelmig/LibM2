#ifndef __LIBM2_GAME_NPC_INFO_HPP
#define __LIBM2_GAME_NPC_INFO_HPP
namespace libm2{
class npc_info {
    BYTE bType;
    const char *name;
    long x;
    long y;
  public:
    npc_info(BYTE, const char *, long, long);
};
}
#endif // __LIBM2_GAME_NPC_INFO_HPP
