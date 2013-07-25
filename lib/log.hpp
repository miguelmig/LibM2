#ifndef __LIBM2_LIB_LOG_HPP
#define __LIBM2_LIB_LOG_HPP
#include <string>
#include <fstream>
namespace libm2{
const std::string CurrentDateTime();

extern std::ofstream slog;
extern std::ofstream serr;

#define SYSLOG slog << CurrentDateTime() << ":" << __LINE__ << " :: "
#define SYSERR serr << CurrentDateTime() << ":" << __LINE__ << " :: "
}
#endif // __LIBM2_LIB_LOG_HPP
