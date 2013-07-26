/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
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
