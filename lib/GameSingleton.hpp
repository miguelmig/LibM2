#ifndef __LIBM2_LIB_GAMESINGLETON_HPP
#define __LIBM2_LIB_GAMESINGLETON_HPP
namespace libm2{
template <typename T, unsigned int TAddr>
class GameSingleton
{
  public:
    static T * ms_singleton;
    GameSingleton(void);
    ~GameSingleton();
    static T *instance(){
        if (!ms_singleton){
            ms_singleton=*(T**)TAddr;
        }
        return ms_singleton;
    };
};
template <typename T, unsigned int TAddr> T* GameSingleton<T,TAddr>::ms_singleton = NULL;
}
#endif // __LIBM2_LIB_GAMESINGLETON_HPP
