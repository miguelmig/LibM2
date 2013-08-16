#include "SECTREE_MANAGER.hpp"
#include "../addr.hpp"
namespace libm2{
bool SECTREE_MANAGER::GetRecallPositionByEmpire(int a0, BYTE a1, PIXEL_POSITION & a2) {
	return ((bool(*)(SECTREE_MANAGER *, int, BYTE, PIXEL_POSITION &))Addr::SECTREE_MANAGER::GetRecallPositionByEmpire)(this, a0, a1, a2);
}

void SECTREE_MANAGER::PurgeMonstersInMap(long a0) {
	((void(*)(SECTREE_MANAGER *, long))Addr::SECTREE_MANAGER::PurgeMonstersInMap)(this, a0);
}

int SECTREE_MANAGER::LoadSettingFile(long a0, const char * a1, TMapSetting & a2) {
	return ((int(*)(SECTREE_MANAGER *, long, const char *, TMapSetting &))Addr::SECTREE_MANAGER::LoadSettingFile)(this, a0, a1, a2);
}

LPSECTREE SECTREE_MANAGER::Get(DWORD a0, DWORD a1, DWORD a2) {
	return ((LPSECTREE(*)(SECTREE_MANAGER *, DWORD, DWORD, DWORD))Addr::SECTREE_MANAGER::Get__28899)(this, a0, a1, a2);
}

bool SECTREE_MANAGER::IsMovablePosition(long a0, long a1, long a2) {
	return ((bool(*)(SECTREE_MANAGER *, long, long, long))Addr::SECTREE_MANAGER::IsMovablePosition)(this, a0, a1, a2);
}

bool SECTREE_MANAGER::GetCenterPositionOfMap(BYTE a0, PIXEL_POSITION & a1) {
	return ((bool(*)(SECTREE_MANAGER *, BYTE, PIXEL_POSITION &))Addr::SECTREE_MANAGER::GetCenterPositionOfMap)(this, a0, a1);
}

SECTREE_MANAGER::SECTREE_MANAGER() {
	((void(*)(SECTREE_MANAGER *))Addr::SECTREE_MANAGER::SECTREE_MANAGER)(this);
}

int SECTREE_MANAGER::Build(const char * a0, const char * a1) {
	return ((int(*)(SECTREE_MANAGER *, const char *, const char *))Addr::SECTREE_MANAGER::Build)(this, a0, a1);
}

bool SECTREE_MANAGER::GetValidLocation(long a0, long a1, long a2, long & a3, PIXEL_POSITION & a4, BYTE a5) {
	return ((bool(*)(SECTREE_MANAGER *, long, long, long, long &, PIXEL_POSITION &, BYTE))Addr::SECTREE_MANAGER::GetValidLocation)(this, a0, a1, a2, a3, a4, a5);
}

void SECTREE_MANAGER::PurgeNPCsInMap(long a0) {
	((void(*)(SECTREE_MANAGER *, long))Addr::SECTREE_MANAGER::PurgeNPCsInMap)(this, a0);
}

bool SECTREE_MANAGER::SaveAttributeToImage(int a0, const char * a1, LPSECTREE_MAP a2) {
	return ((bool(*)(SECTREE_MANAGER *, int, const char *, LPSECTREE_MAP))Addr::SECTREE_MANAGER::SaveAttributeToImage)(this, a0, a1, a2);
}

LPSECTREE_MAP SECTREE_MANAGER::BuildSectreeFromSetting(TMapSetting & a0) {
	return ((LPSECTREE_MAP(*)(SECTREE_MANAGER *, TMapSetting &))Addr::SECTREE_MANAGER::BuildSectreeFromSetting)(this, a0);
}

LPSECTREE_MAP SECTREE_MANAGER::GetMap(long a0) {
	return ((LPSECTREE_MAP(*)(SECTREE_MANAGER *, long))Addr::SECTREE_MANAGER::GetMap)(this, a0);
}

const TMapRegion * SECTREE_MANAGER::GetMapRegion(long a0) {
	return ((const TMapRegion *(*)(SECTREE_MANAGER *, long))Addr::SECTREE_MANAGER::GetMapRegion)(this, a0);
}

LPSECTREE SECTREE_MANAGER::Get(DWORD a0, DWORD a1) {
	return ((LPSECTREE(*)(SECTREE_MANAGER *, DWORD, DWORD))Addr::SECTREE_MANAGER::Get)(this, a0, a1);
}

int SECTREE_MANAGER::GetMapIndex(long a0, long a1) {
	return ((int(*)(SECTREE_MANAGER *, long, long))Addr::SECTREE_MANAGER::GetMapIndex)(this, a0, a1);
}

SECTREE_MANAGER::~SECTREE_MANAGER() {
	((void(*)(SECTREE_MANAGER *))Addr::SECTREE_MANAGER::__SECTREE_MANAGER)(this);
}

bool SECTREE_MANAGER::GetSpawnPosition(long a0, long a1, PIXEL_POSITION & a2) {
	return ((bool(*)(SECTREE_MANAGER *, long, long, PIXEL_POSITION &))Addr::SECTREE_MANAGER::GetSpawnPosition)(this, a0, a1, a2);
}

void SECTREE_MANAGER::LoadDungeon(int a0, const char * a1) {
	((void(*)(SECTREE_MANAGER *, int, const char *))Addr::SECTREE_MANAGER::LoadDungeon)(this, a0, a1);
}

size_t SECTREE_MANAGER::GetMonsterCountInMap(long a0) {
	return ((size_t(*)(SECTREE_MANAGER *, long))Addr::SECTREE_MANAGER::GetMonsterCountInMap__21633)(this, a0);
}

long SECTREE_MANAGER::CreatePrivateMap(long a0) {
	return ((long(*)(SECTREE_MANAGER *, long))Addr::SECTREE_MANAGER::CreatePrivateMap)(this, a0);
}

void SECTREE_MANAGER::InsertNPCPosition(long a0, BYTE a1, const char * a2, long a3, long a4) {
	((void(*)(SECTREE_MANAGER *, long, BYTE, const char *, long, long))Addr::SECTREE_MANAGER::InsertNPCPosition)(this, a0, a1, a2, a3, a4);
}

bool SECTREE_MANAGER::GetMovablePosition(long a0, long a1, long a2, PIXEL_POSITION & a3) {
	return ((bool(*)(SECTREE_MANAGER *, long, long, long, PIXEL_POSITION &))Addr::SECTREE_MANAGER::GetMovablePosition)(this, a0, a1, a2, a3);
}

bool SECTREE_MANAGER::ForAttrRegionRightAngle(long a0, long a1, long a2, long a3, long a4, long a5, DWORD a6, EAttrRegionMode a7) {
	return ((bool(*)(SECTREE_MANAGER *, long, long, long, long, long, long, DWORD, EAttrRegionMode))Addr::SECTREE_MANAGER::ForAttrRegionRightAngle)(this, a0, a1, a2, a3, a4, a5, a6, a7);
}

const TMapRegion * SECTREE_MANAGER::FindRegionByPartialName(const char * a0) {
	return ((const TMapRegion *(*)(SECTREE_MANAGER *, const char *))Addr::SECTREE_MANAGER::FindRegionByPartialName)(this, a0);
}

void SECTREE_MANAGER::SendNPCPosition(LPCHARACTER a0) {
	((void(*)(SECTREE_MANAGER *, LPCHARACTER))Addr::SECTREE_MANAGER::SendNPCPosition)(this, a0);
}

void SECTREE_MANAGER::PurgeStonesInMap(long a0) {
	((void(*)(SECTREE_MANAGER *, long))Addr::SECTREE_MANAGER::PurgeStonesInMap)(this, a0);
}

bool SECTREE_MANAGER::GetRandomLocation(long a0, PIXEL_POSITION & a1, DWORD a2, DWORD a3, int a4) {
	return ((bool(*)(SECTREE_MANAGER *, long, PIXEL_POSITION &, DWORD, DWORD, int))Addr::SECTREE_MANAGER::GetRandomLocation)(this, a0, a1, a2, a3, a4);
}

void SECTREE_MANAGER::DestroyPrivateMap(long a0) {
	((void(*)(SECTREE_MANAGER *, long))Addr::SECTREE_MANAGER::DestroyPrivateMap)(this, a0);
}

bool SECTREE_MANAGER::LoadMapRegion(const char * a0, TMapSetting & a1, const char * a2) {
	return ((bool(*)(SECTREE_MANAGER *, const char *, TMapSetting &, const char *))Addr::SECTREE_MANAGER::LoadMapRegion)(this, a0, a1, a2);
}

size_t SECTREE_MANAGER::GetMonsterCountInMap(long a0, DWORD a1) {
	return ((size_t(*)(SECTREE_MANAGER *, long, DWORD))Addr::SECTREE_MANAGER::GetMonsterCountInMap)(this, a0, a1);
}

bool SECTREE_MANAGER::LoadAttribute(LPSECTREE_MAP a0, const char * a1, TMapSetting & a2) {
	return ((bool(*)(SECTREE_MANAGER *, LPSECTREE_MAP, const char *, TMapSetting &))Addr::SECTREE_MANAGER::LoadAttribute)(this, a0, a1, a2);
}

TAreaMap & SECTREE_MANAGER::GetDungeonArea(long a0) {
	return ((TAreaMap &(*)(SECTREE_MANAGER *, long))Addr::SECTREE_MANAGER::GetDungeonArea)(this, a0);
}

bool SECTREE_MANAGER::GetSpawnPositionByMapIndex(long a0, PIXEL_POSITION & a1) {
	return ((bool(*)(SECTREE_MANAGER *, long, PIXEL_POSITION &))Addr::SECTREE_MANAGER::GetSpawnPositionByMapIndex)(this, a0, a1);
}

bool SECTREE_MANAGER::ForAttrRegionCell(long a0, long a1, long a2, DWORD a3, EAttrRegionMode a4) {
	return ((bool(*)(SECTREE_MANAGER *, long, long, long, DWORD, EAttrRegionMode))Addr::SECTREE_MANAGER::ForAttrRegionCell)(this, a0, a1, a2, a3, a4);
}

BYTE SECTREE_MANAGER::GetEmpireFromMapIndex(long a0) {
	return ((BYTE(*)(SECTREE_MANAGER *, long))Addr::SECTREE_MANAGER::GetEmpireFromMapIndex)(this, a0);
}

bool SECTREE_MANAGER::GetMapBasePositionByMapIndex(long a0, PIXEL_POSITION & a1) {
	return ((bool(*)(SECTREE_MANAGER *, long, PIXEL_POSITION &))Addr::SECTREE_MANAGER::GetMapBasePositionByMapIndex)(this, a0, a1);
}

bool SECTREE_MANAGER::GetMapBasePosition(long a0, long a1, PIXEL_POSITION & a2) {
	return ((bool(*)(SECTREE_MANAGER *, long, long, PIXEL_POSITION &))Addr::SECTREE_MANAGER::GetMapBasePosition)(this, a0, a1, a2);
}

bool SECTREE_MANAGER::ForAttrRegion(long a0, long a1, long a2, long a3, long a4, long a5, DWORD a6, EAttrRegionMode a7) {
	return ((bool(*)(SECTREE_MANAGER *, long, long, long, long, long, long, DWORD, EAttrRegionMode))Addr::SECTREE_MANAGER::ForAttrRegion)(this, a0, a1, a2, a3, a4, a5, a6, a7);
}

bool SECTREE_MANAGER::ForAttrRegionFreeAngle(long a0, long a1, long a2, long a3, long a4, long a5, DWORD a6, EAttrRegionMode a7) {
	return ((bool(*)(SECTREE_MANAGER *, long, long, long, long, long, long, DWORD, EAttrRegionMode))Addr::SECTREE_MANAGER::ForAttrRegionFreeAngle)(this, a0, a1, a2, a3, a4, a5, a6, a7);
}
}
