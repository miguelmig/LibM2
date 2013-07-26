#ifndef __LIBM2_GAME_QUEST_AARGSCRIPT_HPP
#define __LIBM2_GAME_QUEST_AARGSCRIPT_HPP
#include "AStateScriptType.hpp"
#include <vector>
namespace libm2{
namespace quest{
class AArgScript {
    std::string arg;
    std::vector<char> when_condition;
    AStateScriptType script;
    unsigned int quest_index;
    int state_index;
  public:
    AArgScript(void);
};
}
}
#endif // __LIBM2_GAME_QUEST_AARGSCRIPT_HPP
