#include "MyCommand.hpp"
bool MyCommand::isReplaced(){
    return false;
};
bool MyCommand::usableFor(LPCHARACTER ch){
    return true;
};
void MyCommand::use(LPCHARACTER ch,std::vector<std::string> args){
    if (args.size() != 2){
        ch->ChatPacket(1,"Usage: go <msg>");
        return;
    }
    ch->ChatPacket(1,args[1]);
};
