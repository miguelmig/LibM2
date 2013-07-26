#ifndef __LIBGAME_GAME_QUEST_ASTATESCRIPT_HPP
#define __LIBGAME_GAME_QUEST_ASTATESCRIPT_HPP
#include <vector>
namespace libm2{
namespace quest{
class AStateScriptType {
    std::vector<char> m_code;
  public:
    int GetSize(void) const;
    const char * GetCode(void) const;
};
}
}

#endif // __LIBGAME_GAME_QUEST_ASTATESCRIPT_HPP
