#include "CPetActor.hpp"
#include "../addr.hpp"
namespace libm2 {
    CPetActor::CPetActor(LPCHARACTER a0, DWORD a1, DWORD a2) {
        ((void(*)(CPetActor *, LPCHARACTER, DWORD, DWORD))Addr::CPetActor::CPetActor)(this, a0, a1, a2);
    }

    void CPetActor::GiveBuff() {
        ((void(*)(CPetActor *))Addr::CPetActor::GiveBuff)(this);
    }
    void CPetActor::Unmount() {
        ((void(*)(CPetActor *))Addr::CPetActor::Unmount)(this);
    }

    void CPetActor::ClearBuff() {
        ((void(*)(CPetActor *))Addr::CPetActor::ClearBuff)(this);
    }

    void CPetActor::SetName(const char * a0) {
        ((void(*)(CPetActor *, const char *))Addr::CPetActor::SetName)(this, a0);
    }

    void CPetActor::SetSummonItem(LPITEM a0) {
        ((void(*)(CPetActor *, LPITEM))Addr::CPetActor::SetSummonItem)(this, a0);
    }

    bool CPetActor::Mount() {
        return ((bool(*)(CPetActor *))Addr::CPetActor::Mount)(this);
    }

    bool CPetActor::Update(DWORD a0) {
        return ((bool(*)(CPetActor *, DWORD))Addr::CPetActor::Update)(this, a0);
    }

    DWORD CPetActor::Summon(const char * a0, LPITEM a1, bool a2) {
        return ((DWORD(*)(CPetActor *, const char *, LPITEM, bool))Addr::CPetActor::Summon)(this, a0, a1, a2);
    }

    bool CPetActor::_UpdatAloneActionAI(float a0, float a1) {
        return ((bool(*)(CPetActor *, float, float))Addr::CPetActor::_UpdatAloneActionAI)(this, a0, a1);
    }

    CPetActor::~CPetActor() {
        ((void(*)(CPetActor *))Addr::CPetActor::__CPetActor)(this);
    }

    bool CPetActor::Follow(float a0) {
        return ((bool(*)(CPetActor *, float))Addr::CPetActor::Follow)(this, a0);
    }

    void CPetActor::Unsummon() {
        ((void(*)(CPetActor *))Addr::CPetActor::Unsummon)(this);
    }

    bool CPetActor::_UpdateFollowAI() {
        return ((bool(*)(CPetActor *))Addr::CPetActor::_UpdateFollowAI)(this);
    }
} 