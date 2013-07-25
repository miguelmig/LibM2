#ifndef __LIBM2_GAME_CATTRIBUTE_HPP
#define __LIBM2_GAME_CATTRIBUTE_HPP
#include "stdInclude.hpp"
namespace libm2{
class CAttribute {
  private:
    int dataType;
    DWORD defaultAttr;
    DWORD width;
    DWORD height;
    void *data;
    BYTE **bytePtr;
    WORD **wordPtr;
    DWORD **dwordPtr;

  public:
    CAttribute(DWORD, DWORD);
    CAttribute(DWORD *, DWORD, DWORD);
    ~CAttribute();
    void Alloc(void);
    int GetDataType(void);
    void * GetDataPtr(void);
    void Set(DWORD, DWORD, DWORD);
    void Remove(DWORD, DWORD, DWORD);
    DWORD Get(DWORD, DWORD);
    void CopyRow(DWORD, DWORD *);
  private:
    void Initialize(DWORD, DWORD);
};
}
#endif // __LIBM2_GAME_CATTRIBUTE_HPP
