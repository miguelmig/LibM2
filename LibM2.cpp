#include "LibM2.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include "lib/log.hpp"

namespace libm2{
LibM2::LibM2(): singleton::singleton(){
    detour_interpretCommand=simpleHook<tInterpretCommand>((unsigned int)Addr::misc::interpret_command,interpretCommand);
}
void LibM2::interpretCommand(LPCHARACTER ch,const char* data, size_t len){
    LibM2* self=instance();
    std::istringstream iss(std::string(data,len));
    std::vector<std::string> arguments;
    copy(std::istream_iterator<std::string>(iss),std::istream_iterator<std::string>(),std::back_inserter<std::vector<std::string> >(arguments));
    if (self->m_map_command.find(arguments.front())!=self->m_map_command.end()){
        ICommand* cmd = self->m_map_command[arguments.front()];
        if (cmd->usableFor(ch)){
            cmd->use(ch, arguments);
            return;
        }else if(cmd->isReplaced()){
            ch->ChatPacket(1,locale_find("그런 명령어는 없습니다"));
            return;
        }
    }
    self->detour_interpretCommand->GetOriginalFunction()(ch,data,len);
}
void LibM2::addCommand(std::string name,ICommand* cmd){
    std::cout << "**** Added custom command: " << name << std::endl;
    instance()->m_map_command.insert(std::pair<std::string,ICommand*>(name,cmd));
}
}
