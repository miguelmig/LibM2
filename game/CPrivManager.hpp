#ifndef __LIBM2_GAME_CPRIVMANAGER_HPP
#define __LIBM2_GAME_CPRIVMANAGER_HPP
#include "../lib/GameSingleton.hpp"
#include "../addr.hpp"
#include "stdInclude.hpp"
namespace libm2{
struct CPrivManager : public GameSingleton<CPrivManager, (unsigned int)Addr::CPrivManager::singleton> {
  private:
    struct SPrivGuildData {
        int value;
        time_t end_time_sec;
    };
    struct SPrivEmpireData {
        int m_value;
        time_t m_end_time_sec;
    };
    SPrivEmpireData m_aakPrivEmpireData[5][4];
    std::map<unsigned int, SPrivGuildData> m_aPrivGuild[5];
    std::map<unsigned int, int> m_aPrivChar[5];

  public:
    CPrivManager(void);
    void RequestGiveGuildPriv(DWORD, BYTE, int, time_t);
    void RequestGiveEmpirePriv(BYTE, BYTE, int, time_t);
    void RequestGiveCharacterPriv(DWORD, BYTE, int);
    void GiveGuildPriv(DWORD, BYTE, int, BYTE, time_t);
    void GiveEmpirePriv(BYTE, BYTE, int, BYTE, time_t);
    void GiveCharacterPriv(DWORD, BYTE, int, BYTE);
    void RemoveGuildPriv(DWORD, BYTE);
    void RemoveEmpirePriv(BYTE, BYTE);
    void RemoveCharacterPriv(DWORD, BYTE);
    int GetPriv(LPCHARACTER, BYTE);
    int GetPrivByEmpire(BYTE, BYTE);
    int GetPrivByGuild(DWORD, BYTE);
    int GetPrivByCharacter(DWORD, BYTE);
    SPrivEmpireData * GetPrivByEmpireEx(BYTE, BYTE);
    const SPrivGuildData * GetPrivByGuildEx(DWORD, BYTE) const;
};
}
#endif // __LIBM2_GAME_CPRIVMANAGER_HPP
