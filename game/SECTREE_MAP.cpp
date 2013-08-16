#include "SECTREE_MAP.hpp"
#include "../addr.hpp"
namespace libm2{

SECTREE_MAP::SECTREE_MAP(SECTREE_MAP & a0) {
	((void(*)(SECTREE_MAP *, SECTREE_MAP &))Addr::SECTREE_MAP::SECTREE_MAP)(this, a0);
}

SECTREE_MAP::~SECTREE_MAP() {
	((void(*)(SECTREE_MAP *))Addr::SECTREE_MAP::__SECTREE_MAP)(this);
}

LPSECTREE SECTREE_MAP::Find(DWORD a0, DWORD a1) {
	return ((LPSECTREE(*)(SECTREE_MAP *, DWORD, DWORD))Addr::SECTREE_MAP::Find__12564)(this, a0, a1);
}

void SECTREE_MAP::Build() {
	((void(*)(SECTREE_MAP *))Addr::SECTREE_MAP::Build)(this);
}

void SECTREE_MAP::DumpAllToSysErr() {
	((void(*)(SECTREE_MAP *))Addr::SECTREE_MAP::DumpAllToSysErr)(this);
}

LPSECTREE SECTREE_MAP::Find(DWORD a0) {
	return ((LPSECTREE(*)(SECTREE_MAP *, DWORD))Addr::SECTREE_MAP::Find)(this, a0);
}
}
