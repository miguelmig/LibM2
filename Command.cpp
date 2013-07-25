#include "Command.hpp"
namespace libm2{
bool ICommand::replace(){
    return false;
}
bool GMCommand::usableFor(LPCHARACTER ch){
    if (ch->GetGMLevel()>=minLevel){
        return true;
    }
    return false;
}

}
