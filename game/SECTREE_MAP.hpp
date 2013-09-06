#ifndef __LIBM2_GAME_SECTREE_MAP_HPP
#define __LIBM2_GAME_SECTREE_MAP_HPP
#include "SECTREE.hpp"
#include <algorithm>
#include "SSetting.hpp"
namespace libm2{
class SECTREE_MAP {
  public:
    TMapSetting m_setting;
  private:
    std::map<unsigned int, SECTREE*> map_;

  public:
    SECTREE_MAP(void);
    SECTREE_MAP(SECTREE_MAP &);
    ~SECTREE_MAP();
    bool Add(DWORD, LPSECTREE);
    std::map<unsigned int, SECTREE*> GetSectreeMap(void);
    LPSECTREE Find(DWORD);
    LPSECTREE Find(DWORD, DWORD);
    void Build(void);
    void DumpAllToSysErr(void);
    /*void for_each<FCountSpecifiedMonster>(FCountSpecifiedMonster &);
    void for_each<FCountMonsters>(FCountMonsters &);
    void for_each<FPurgeNPCs>(FPurgeNPCs &);
    void for_each<FPurgeStones>(FPurgeStones &);
    void for_each<FPurgeMonsters>(FPurgeMonsters &);
    void for_each<FDestroyPrivateMapEntity>(FDestroyPrivateMapEntity &);*/
} typedef * LPSECTREE_MAP;
}

#endif // __LIBM2_GAME_SECTREE_MAP_HPP
