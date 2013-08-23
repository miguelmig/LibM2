#include "TEMP_BUFFER.hpp"
#include "../addr.hpp"
namespace libm2{
void TEMP_BUFFER::reset() {
	((void(*)(TEMP_BUFFER *))Addr::TEMP_BUFFER::reset)(this);
}

TEMP_BUFFER::TEMP_BUFFER(int size, bool forceDelete) {
	((void(*)(TEMP_BUFFER *, int, bool))Addr::TEMP_BUFFER::TEMP_BUFFER)(this, size, forceDelete);
}

const void * TEMP_BUFFER::read_peek() {
	return ((const void *(*)(TEMP_BUFFER *))Addr::TEMP_BUFFER::read_peek)(this);
}

void TEMP_BUFFER::write(const void * a0, int a1) {
	((void(*)(TEMP_BUFFER *, const void *, int))Addr::TEMP_BUFFER::write)(this, a0, a1);
}

TEMP_BUFFER::~TEMP_BUFFER() {
	((void(*)(TEMP_BUFFER *))Addr::TEMP_BUFFER::__TEMP_BUFFER)(this);
}

int TEMP_BUFFER::size() {
	return ((int(*)(TEMP_BUFFER *))Addr::TEMP_BUFFER::size)(this);
}
LPBUFFER TEMP_BUFFER::getptr(){
    return buf;
}

}
