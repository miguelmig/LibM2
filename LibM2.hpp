#ifndef __LIBM2_LIBM2_HPP
#define __LIBM2_LIBM2_HPP
#include "game/stdInclude.hpp"
#include "Command.hpp"
#include "lib/singleton.hpp"
#include "utils/detours.h"
#include "lib/hook.hpp"
namespace libm2{
typedef void(*tInterpretCommand)(LPCHARACTER,const char*, size_t);
class LibM2: public singleton<LibM2>{
  protected:
    std::map<std::string,ICommand*> m_map_command;
    MologieDetours::Detour<tInterpretCommand>*detour_interpretCommand;
  public:
    LibM2();
    static void interpretCommand(LPCHARACTER ch,const char* data, size_t len);
    static void addCommand(std::string name,ICommand* cmd);
};
}
#endif // __LIBM2_LIBM2_HPP
