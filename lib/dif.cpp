#include "dif.hpp"
#include <cstring>
#include <sys/mman.h>
#include <iostream>
#include <cstdlib>
#include <errno.h>
namespace libm2{
void dif(void* addr, void* data, size_t len){
        if (int res=mprotect(addr, len, PROT_READ|PROT_WRITE|PROT_EXEC)  != 0){
            std::cout << "FATAL dif(" << std::hex <<addr <<", " << data << ", " << std::dec << len << ") = " << res << " ERRNO " << errno << std::endl;
            abort();
        }
        memcpy(addr, data, len);
};
}
