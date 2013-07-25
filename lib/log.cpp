#include "log.hpp"
namespace libm2{
const std::string CurrentDateTime(){
    struct tm tstruct;
    char buf[80];
    time_t t;
    time(&t);
    tstruct = *localtime(&t);
    strftime(buf, sizeof(buf), "%Y-%m-%d %X", &tstruct);

    return buf;
};
std::ofstream slog("libgame.stdlog.txt", std::ios_base::app | std::ios_base::out);
std::ofstream serr("libgame.stderr.txt", std::ios_base::app | std::ios_base::out);
}
