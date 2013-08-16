#ifndef __LIBM2_GAME_TAREAINFO_HPP
#define __LIBM2_GAME_TAREAINFO_HPP
class TAreaInfo {
    int sx;
    int sy;
    int ex;
    int ey;
    int dir;
  public:
    TAreaInfo(int, int, int, int, int);
};
typedef std::map<std::string, TAreaInfo> TAreaMap;
#endif // __LIBM2_GAME_TAREAINFO_HPP
