#ifndef __LIBM2_GAME_MARRIAGE_TMARRIAGE_HPP
#define __LIBM2_GAME_MARRIAGE_TMARRIAGE_HPP
#include "../stdInclude.hpp"
#include "TWeddingInfo.hpp"
#include "../EVENT.hpp"
namespace libm2{
namespace marriage{
class TMarriage {
    DWORD m_pid1;
    DWORD m_pid2;
    int love_point;
    time_t marry_time;
    LPCHARACTER ch1;
    LPCHARACTER ch2;
    bool bSave;
    bool is_married;
    std::string name1;
    std::string name2;
    marriage::TWeddingInfo *pWeddingInfo;
    bool isLastNear;
    BYTE byLastLovePoint;
    LPEVENT eventNearCheck;
  public:
    TMarriage(DWORD, DWORD, int, time_t, const char *, const char *);
    ~TMarriage();
    void Login(LPCHARACTER);
    void Logout(DWORD);
    bool IsOnline(void);
    bool IsNear(void);
    DWORD GetOther(DWORD) const;
    int GetMarriagePoint(void);
    int GetMarriageGrade(void);
    int GetBonus(DWORD, bool, LPCHARACTER);
    void WarpToWeddingMap(DWORD);
    void Save(void);
    void SetMarried(void);
    void Update(DWORD);
    void RequestEndWedding(void);
    void StartNearCheckEvent(void);
    void StopNearCheckEvent(void);
    void NearCheck(void);
};
}
}
#endif // __LIBM2_GAME_MARRIAGE_TMARRIAGE_HPP
