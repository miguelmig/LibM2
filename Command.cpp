#include "Command.hpp"
namespace libm2{
bool ICommand::isReplaced(){
    return false;
}
bool GMCommand::usableFor(LPCHARACTER ch){
    if (ch->GetGMLevel()>=minLevel){
        return true;
    }
    return false;
}

}
