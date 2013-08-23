#ifndef __LIBM2_GAME_P2P_MANAGER_HPP
#define __LIBM2_GAME_P2P_MANAGER_HPP
#include "stdInclude.hpp"
#include "../lib/GameSingleton.hpp"
#include "../addr.hpp"
#include "_CCI.hpp"
#include "packet.hpp"
namespace libm2{
class P2P_MANAGER : public GameSingleton<P2P_MANAGER,(unsigned int)Addr::P2P_MANAGER::singleton> {
  private:
    CInputProcessor *m_pkInputProcessor;
    int m_iHandleCount;
    std::tr1::unordered_set<DESC*> m_set_pkPeers;
    boost::unordered_map<std::string, _CCI*> m_map_pkCCI;
    boost::unordered_map<unsigned int, _CCI*> m_map_dwPID_pkCCI;
    int m_aiEmpireUserCount[4];

  public:
    P2P_MANAGER(void);
    ~P2P_MANAGER();
    void RegisterAcceptor(LPDESC);
    void UnregisterAcceptor(LPDESC);
    void RegisterConnector(LPDESC);
    void UnregisterConnector(LPDESC);
    void EraseUserByDesc(LPDESC);
    void FlushOutput(void);
    void Boot(LPDESC);
    void Send(const void *, int, LPDESC);
    void Login(LPDESC, const TPacketGGLogin *);
    void Logout(const char *);
  private:
    void Logout(CCI *);
  public:
    CCI * Find(const char *);
    CCI * FindByPID(DWORD);
    int GetCount(void);
    int GetEmpireUserCount(int);
};
}
#endif // __LIBM2_GAME_P2P_MANAGER_HPP
