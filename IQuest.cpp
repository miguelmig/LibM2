#include "IQuest.hpp"
tQuestTable IQuest::getTable(){return qTable;}
void IQuest::add(std::string name,lua_CFunction func){
    qTable.insert(std::pair<std::string,lua_CFunction>(name,func));
}
