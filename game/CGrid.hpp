#ifndef __LIBM2_GAME_CGRID_HPP
#define __LIBM2_GAME_CGRID_HPP
#include "stdInclude.hpp"
namespace libm2{
class CGrid {
  protected:
    int m_iWidth;
    int m_iHeight;
    char *m_pGrid;
  public:
    CGrid(int, int);
    CGrid(CGrid *, int, int);
    ~CGrid();
    void Clear(void);
    int FindBlank(int, int);
    bool IsEmpty(int, int, int);
    bool Put(int, int, int);
    void Get(int, int, int);
    void Print(void);
    unsigned int GetSize(void);
};
}
#endif // __LIBM2_GAME_CGRID_HPP
