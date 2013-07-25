#ifndef __LIBM2_GAME_CINPUTPROCESSOR_HPP
#define __LIBM2_GAME_CINPUTPROCESSOR_HPP
#include "stdInclude.hpp"
//#include "DESC.hpp"
#include "CPacketInfo.hpp"
namespace libm2{
class CInputProcessor {
  protected:
    CPacketInfo *m_pPacketInfo;
    int m_iBufferLeft;
    CPacketInfoCG m_packetInfoCG;

  public:
    CInputProcessor();
    ~CInputProcessor();
    virtual bool Process(LPDESC, const void *, int, int &);
    virtual BYTE GetType(void);
    void BindPacketInfo(CPacketInfo *);
    void Pong(LPDESC);
    void Handshake(LPDESC, const char *);
    void Version(LPCHARACTER, const char *);
  protected:
    virtual int Analyze(LPDESC, BYTE, const char *);
};
}
#endif // __LIBM2_GAME_CINPUTPROCESSOR_HPP
