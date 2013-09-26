/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "misc.hpp"
#include "../addr.hpp"
namespace libm2{
int get_global_time(){
    return ((int(*)(void))Addr::misc::get_global_time)();
}
const char* locale_find(const char* data){
    return ((const char* (*)(const char*))Addr::misc::locale_find)(data);
}
const char* two_arguments(const char * src, char * one, size_t size_one, char * two, size_t size_two){
    return ((const char *(*)(const char *, char *, size_t, char *, size_t))Addr::misc::two_arguments)(src, one, size_one, two, size_two);
}
DWORD thecore_random(){
    return ((DWORD(*)(void))Addr::misc::thecore_random)();
}
int number_ex(int from,int to,const char* file, int line){
    return ((int(*)(int, int, const char*, int))Addr::misc::number_ex)(from,to,file,line);
}
void sys_err(const char *func, int line, const char *format, ...){
	va_list args;
	va_start(args, format);
	char buffer[1024];
	vsnprintf(buffer, 1024, format, args);
	((void(*)(const char*, int, const char*))Addr::misc::sys_err)(func, line, buffer);
	va_end(args);
}
void sys_log(unsigned int bit, char const* format, ...){
	va_list args;
	va_start(args, format);
	char buffer[1024];
	vsnprintf(buffer, 1024, format, args);
	((void(*)(unsigned int, char const*))Addr::misc::sys_log)(bit, buffer);
	va_end(args);
}
}
