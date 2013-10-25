#include "SECTREE.hpp"
#include "../addr.hpp"
namespace libm2{
void SECTREE::IncreasePC() {
	((void(*)(SECTREE *))Addr::SECTREE::IncreasePC)(this);
}

void SECTREE::BindAttribute(CAttribute * a0) {
	((void(*)(SECTREE *, CAttribute *))Addr::SECTREE::BindAttribute)(this, a0);
}

void SECTREE::CloneAttribute(LPSECTREE a0) {
	((void(*)(SECTREE *, LPSECTREE))Addr::SECTREE::CloneAttribute)(this, a0);
}

void SECTREE::DecreasePC() {
	((void(*)(SECTREE *))Addr::SECTREE::DecreasePC)(this);
}

void SECTREE::RemoveAttribute(DWORD a0, DWORD a1, DWORD a2) {
	((void(*)(SECTREE *, DWORD, DWORD, DWORD))Addr::SECTREE::RemoveAttribute)(this, a0, a1, a2);
}

DWORD SECTREE::GetAttribute(long a0, long a1) {
	return ((DWORD(*)(SECTREE *, long, long))Addr::SECTREE::GetAttribute)(this, a0, a1);
}

void SECTREE::SetAttribute(DWORD a0, DWORD a1, DWORD a2) {
	((void(*)(SECTREE *, DWORD, DWORD, DWORD))Addr::SECTREE::SetAttribute)(this, a0, a1, a2);
}

void SECTREE::RemoveEntity(LPENTITY a0) {
	((void(*)(SECTREE *, LPENTITY))Addr::SECTREE::RemoveEntity)(this, a0);
}

SECTREEID SECTREE::GetID() {
	return ((SECTREEID(*)(SECTREE *))Addr::SECTREE::GetID)(this);
}

bool SECTREE::IsAttr(long a0, long a1, DWORD a2) {
	return ((bool(*)(SECTREE *, long, long, DWORD))Addr::SECTREE::IsAttr)(this, a0, a1, a2);
}

SECTREE::SECTREE() {
	((void(*)(SECTREE *))Addr::SECTREE::SECTREE)(this);
}

bool SECTREE::InsertEntity(LPENTITY a0) {
	return ((bool(*)(SECTREE *, LPENTITY))Addr::SECTREE::InsertEntity)(this, a0);
}

void SECTREE::Initialize() {
	((void(*)(SECTREE *))Addr::SECTREE::Initialize)(this);
}

void SECTREE::Destroy() {
	((void(*)(SECTREE *))Addr::SECTREE::Destroy)(this);
}

int SECTREE::GetEventAttribute(long a0, long a1) {
	return ((int(*)(SECTREE *, long, long))Addr::SECTREE::GetEventAttribute)(this, a0, a1);
}

SECTREE::~SECTREE() {
	((void(*)(SECTREE *))Addr::SECTREE::__SECTREE)(this);
}


}