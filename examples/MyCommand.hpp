#ifndef _EXAMPLES_MYCOMMAND_HPP
#define _EXAMPLES_MYCOMMAND_HPP
#include "../Command.hpp"
using namespace libm2;
class MyCommand: public ICommand{
    bool isReplaced();
    bool usableFor(LPCHARACTER);
    void use(LPCHARACTER,std::vector<std::string> args);
};
#endif // _EXAMPLES_MYCOMMAND_HPP
