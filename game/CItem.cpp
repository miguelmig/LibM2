#include "CItem.hpp"
#include "../addr.hpp"
#include "CEntity.hpp"
#include "CHARACTER.hpp"
#include "PIXEL_POSITION.hpp"
namespace libm2{
void CItem::SetAttribute(int a0, BYTE a1, short a2) {
	((void(*)(CItem *, int, BYTE, short))Addr::CItem::SetAttribute)(this, a0, a1, a2);
}

LPITEM CItem::RemoveFromGround() {
	return ((LPITEM(*)(CItem *))Addr::CItem::RemoveFromGround)(this);
}

void CItem::SetDestroyEvent(LPEVENT a0) {
	((void(*)(CItem *, LPEVENT))Addr::CItem::SetDestroyEvent)(this, a0);
}

void CItem::AttrLog() {
	((void(*)(CItem *))Addr::CItem::AttrLog)(this);
}

void CItem::StartTimerBasedOnWearExpireEvent() {
	((void(*)(CItem *))Addr::CItem::StartTimerBasedOnWearExpireEvent)(this);
}

void CItem::AlterToSocketItem(int a0) {
	((void(*)(CItem *, int))Addr::CItem::AlterToSocketItem)(this, a0);
}

void CItem::StartRealTimeExpireEvent() {
	((void(*)(CItem *))Addr::CItem::StartRealTimeExpireEvent)(this);
}

void CItem::Initialize() {
	((void(*)(CItem *))Addr::CItem::Initialize)(this);
}

bool CItem::IsPolymorphItem() {
	return ((bool(*)(CItem *))Addr::CItem::IsPolymorphItem)(this);
}

void CItem::SetOwnershipEvent(LPEVENT a0) {
	((void(*)(CItem *, LPEVENT))Addr::CItem::SetOwnershipEvent)(this, a0);
}

void CItem::ClearMountAttributeAndAffect() {
	((void(*)(CItem *))Addr::CItem::ClearMountAttributeAndAffect)(this);
}

void CItem::SetForceAttribute(int a0, BYTE a1, short a2) {
	((void(*)(CItem *, int, BYTE, short))Addr::CItem::SetForceAttribute)(this, a0, a1, a2);
}

bool CItem::CanUsedBy(LPCHARACTER a0) {
	return ((bool(*)(CItem *, LPCHARACTER))Addr::CItem::CanUsedBy)(this, a0);
}

void CItem::AddFlag(long a0) {
	((void(*)(CItem *, long))Addr::CItem::AddFlag)(this, a0);
}

int CItem::GetSpecialGroup() {
	return ((int(*)(CItem *))Addr::CItem::GetSpecialGroup)(this);
}

int CItem::GetAccessorySocketGrade() {
	return ((int(*)(CItem *))Addr::CItem::GetAccessorySocketGrade)(this);
}

bool CItem::RemoveAttributeType(BYTE a0) {
	return ((bool(*)(CItem *, BYTE))Addr::CItem::RemoveAttributeType)(this, a0);
}

void CItem::RemoveFlag(long a0) {
	((void(*)(CItem *, long))Addr::CItem::RemoveFlag)(this, a0);
}

void CItem::SetAccessorySocketGrade(int a0) {
	((void(*)(CItem *, int))Addr::CItem::SetAccessorySocketGrade)(this, a0);
}

bool CItem::AddToGround(long a0, const PIXEL_POSITION & a1, bool a2) {
	return ((bool(*)(CItem *, long, const PIXEL_POSITION &, bool))Addr::CItem::AddToGround)(this, a0, a1, a2);
}

bool CItem::IsRamadanRing() {
	return ((bool(*)(CItem *))Addr::CItem::IsRamadanRing)(this);
}

int CItem::GetRareAttrCount() {
	return ((int(*)(CItem *))Addr::CItem::GetRareAttrCount)(this);
}

LPITEM CItem::RemoveFromCharacter() {
	return ((LPITEM(*)(CItem *))Addr::CItem::RemoveFromCharacter)(this);
}

void CItem::PutAttributeWithLevel(BYTE a0) {
	((void(*)(CItem *, BYTE))Addr::CItem::PutAttributeWithLevel)(this, a0);
}

bool CItem::IsEquipable() const {
	return ((bool(*)(const CItem *))Addr::CItem::IsEquipable)(this);
}

void CItem::CopyAttributeTo(LPITEM a0) {
	((void(*)(CItem *, LPITEM))Addr::CItem::CopyAttributeTo)(this, a0);
}

DWORD CItem::GetRefineFromVnum() {
	return ((DWORD(*)(CItem *))Addr::CItem::GetRefineFromVnum)(this);
}

void CItem::SetSockets(const long * a0) {
	((void(*)(CItem *, const long *))Addr::CItem::SetSockets)(this, a0);
}

int CItem::GetAttributeSetIndex() {
	return ((int(*)(CItem *))Addr::CItem::GetAttributeSetIndex)(this);
}

void CItem::Destroy() {
	((void(*)(CItem *))Addr::CItem::Destroy)(this);
}

void CItem::Save() {
	((void(*)(CItem *))Addr::CItem::Save)(this);
}

void CItem::SetUniqueExpireEvent(LPEVENT a0) {
	((void(*)(CItem *, LPEVENT))Addr::CItem::SetUniqueExpireEvent)(this, a0);
}

bool CItem::HasAttr(BYTE a0) {
	return ((bool(*)(CItem *, BYTE))Addr::CItem::HasAttr)(this, a0);
}

void CItem::AccessorySocketDegrade() {
	((void(*)(CItem *))Addr::CItem::AccessorySocketDegrade)(this);
}

void CItem::PutAttribute(const int * a0) {
	((void(*)(CItem *, const int *))Addr::CItem::PutAttribute)(this, a0);
}

int CItem::FindAttribute(BYTE a0) {
	return ((int(*)(CItem *, BYTE))Addr::CItem::FindAttribute)(this, a0);
}

bool CItem::CreateSocket(BYTE a0, BYTE a1) {
	return ((bool(*)(CItem *, BYTE, BYTE))Addr::CItem::CreateSocket)(this, a0, a1);
}

void CItem::SetAccessorySocketExpireEvent(LPEVENT a0) {
	((void(*)(CItem *, LPEVENT))Addr::CItem::SetAccessorySocketExpireEvent)(this, a0);
}

bool CItem::AddRareAttribute() {
	return ((bool(*)(CItem *))Addr::CItem::AddRareAttribute)(this);
}

bool CItem::IsOwnership(LPCHARACTER a0) {
	return ((bool(*)(CItem *, LPCHARACTER))Addr::CItem::IsOwnership)(this, a0);
}

bool CItem::IsNewMountItem() {
	return ((bool(*)(CItem *))Addr::CItem::IsNewMountItem)(this);
}

int CItem::GetAccessorySocketMaxGrade() {
	return ((int(*)(CItem *))Addr::CItem::GetAccessorySocketMaxGrade)(this);
}

bool CItem::AddSocket() {
	return ((bool(*)(CItem *))Addr::CItem::AddSocket)(this);
}


DWORD CItem::GetCount() {
	return ((DWORD(*)(CItem *))Addr::CItem::GetCount)(this);
}

int CItem::GetAccessorySocketDownGradeTime() {
	return ((int(*)(CItem *))Addr::CItem::GetAccessorySocketDownGradeTime)(this);
}

int CItem::GetLevelLimit() {
	return ((int(*)(CItem *))Addr::CItem::GetLevelLimit)(this);
}

void CItem::StopTimerBasedOnWearExpireEvent() {
	((void(*)(CItem *))Addr::CItem::StopTimerBasedOnWearExpireEvent)(this);
}

bool CItem::SetCount(DWORD a0) {
	return ((bool(*)(CItem *, DWORD))Addr::CItem::SetCount)(this, a0);
}

void CItem::EncodeRemovePacket(LPENTITY a0) {
	((void(*)(CItem *, LPENTITY))Addr::CItem::EncodeRemovePacket)(this, a0);
}

void CItem::SetAttributes(const TPlayerItemAttribute * a0) {
	((void(*)(CItem *, const TPlayerItemAttribute *))Addr::CItem::SetAttributes)(this, a0);
}

void CItem::ChangeAttribute(const int * a0) {
	((void(*)(CItem *, const int *))Addr::CItem::ChangeAttribute)(this, a0);
}

long CItem::GetValue(DWORD a0) {
	return ((long(*)(CItem *, DWORD))Addr::CItem::GetValue)(this, a0);
}

void CItem::SetAccessorySocketMaxGrade(int a0) {
	((void(*)(CItem *, int))Addr::CItem::SetAccessorySocketMaxGrade)(this, a0);
}

bool CItem::HasRareAttr(BYTE a0) {
	return ((bool(*)(CItem *, BYTE))Addr::CItem::HasRareAttr)(this, a0);
}

void CItem::SetExchanging(bool a0) {
	((void(*)(CItem *, bool))Addr::CItem::SetExchanging)(this, a0);
}

void CItem::SetAccessorySocketDownGradeTime(DWORD a0) {
	((void(*)(CItem *, DWORD))Addr::CItem::SetAccessorySocketDownGradeTime)(this, a0);
}

void CItem::AddAttribute(BYTE a0, short a1) {
	((void(*)(CItem *, BYTE, short))Addr::CItem::AddAttribute)(this, a0, a1);
}

bool CItem::IsPCBangItem() {
	return ((bool(*)(CItem *))Addr::CItem::IsPCBangItem)(this);
}

void CItem::EncodeInsertPacket(LPENTITY a0) {
	((void(*)(CItem *, LPENTITY))Addr::CItem::EncodeInsertPacket)(this, a0);
}

void CItem::StartDestroyEvent(int a0) {
	((void(*)(CItem *, int))Addr::CItem::StartDestroyEvent)(this, a0);
}

void CItem::ClearAttribute() {
	((void(*)(CItem *))Addr::CItem::ClearAttribute)(this);
}

bool CItem::DistanceValid(LPCHARACTER a0) {
	return ((bool(*)(CItem *, LPCHARACTER))Addr::CItem::DistanceValid)(this, a0);
}

void CItem::SetOwnership(LPCHARACTER a0, int a1) {
	((void(*)(CItem *, LPCHARACTER, int))Addr::CItem::SetOwnership)(this, a0, a1);
}

void CItem::ApplyAddon(int a0) {
	((void(*)(CItem *, int))Addr::CItem::ApplyAddon)(this, a0);
}

void CItem::UsePacketEncode(LPCHARACTER a0, LPCHARACTER a1, packet_item_use * a2) {
	((void(*)(CItem *, LPCHARACTER, LPCHARACTER, packet_item_use *))Addr::CItem::UsePacketEncode)(this, a0, a1, a2);
}

void CItem::StopAccessorySocketExpireEvent() {
	((void(*)(CItem *))Addr::CItem::StopAccessorySocketExpireEvent)(this);
}

void CItem::StopUniqueExpireEvent() {
	((void(*)(CItem *))Addr::CItem::StopUniqueExpireEvent)(this);
}

void CItem::SetSocket(int a0, long a1, bool a2) {
	((void(*)(CItem *, int, long, bool))Addr::CItem::SetSocket)(this, a0, a1, a2);
}

bool CItem::IsAccessoryForSocket() {
	return ((bool(*)(CItem *))Addr::CItem::IsAccessoryForSocket)(this);
}

long CItem::FindApplyValue(BYTE a0) {
	return ((long(*)(CItem *, BYTE))Addr::CItem::FindApplyValue)(this, a0);
}

bool CItem::CanPutInto(LPITEM a0) {
	return ((bool(*)(CItem *, LPITEM))Addr::CItem::CanPutInto)(this, a0);
}

void CItem::ModifyPoints(bool a0) {
	((void(*)(CItem *, bool))Addr::CItem::ModifyPoints)(this, a0);
}

void CItem::AddAttr(BYTE a0, BYTE a1) {
	((void(*)(CItem *, BYTE, BYTE))Addr::CItem::AddAttr)(this, a0, a1);
}

bool CItem::EquipTo(LPCHARACTER a0, BYTE a1) {
	return ((bool(*)(CItem *, LPCHARACTER, BYTE))Addr::CItem::EquipTo)(this, a0, a1);
}

bool CItem::ChangeRareAttribute() {
	return ((bool(*)(CItem *))Addr::CItem::ChangeRareAttribute)(this);
}

void CItem::CopySocketTo(LPITEM a0) {
	((void(*)(CItem *, LPITEM))Addr::CItem::CopySocketTo)(this, a0);
}

void CItem::SetProto(const TItemTable * a0) {
	((void(*)(CItem *, const TItemTable *))Addr::CItem::SetProto)(this, a0);
}

bool CItem::Unequip() {
	return ((bool(*)(CItem *))Addr::CItem::Unequip)(this);
}

void CItem::SetTimerBasedOnWearExpireEvent(LPEVENT a0) {
	((void(*)(CItem *, LPEVENT))Addr::CItem::SetTimerBasedOnWearExpireEvent)(this, a0);
}

int CItem::GetShopBuyPrice() {
	return ((int(*)(CItem *))Addr::CItem::GetShopBuyPrice)(this);
}

CItem::CItem() {
	((void(*)(CItem *))Addr::CItem::CItem)(this);
}

void CItem::AlterToMagicItem() {
	((void(*)(CItem *))Addr::CItem::AlterToMagicItem)(this);
}

int CItem::GetGold() {
	return ((int(*)(CItem *))Addr::CItem::GetGold)(this);
}

int CItem::FindEquipCell(LPCHARACTER a0) {
	return ((int(*)(CItem *, LPCHARACTER))Addr::CItem::FindEquipCell)(this, a0);
}

int CItem::GetAttributeCount() {
	return ((int(*)(CItem *))Addr::CItem::GetAttributeCount)(this);
}

int CItem::GetRefineLevel() {
	return ((int(*)(CItem *))Addr::CItem::GetRefineLevel)(this);
}

bool CItem::CheckItemUseLevel(int a0) {
	return ((bool(*)(CItem *, int))Addr::CItem::CheckItemUseLevel)(this, a0);
}

void CItem::StartAccessorySocketExpireEvent() {
	((void(*)(CItem *))Addr::CItem::StartAccessorySocketExpireEvent)(this);
}

void CItem::StartUniqueExpireEvent() {
	((void(*)(CItem *))Addr::CItem::StartUniqueExpireEvent)(this);
}

bool CItem::IsRealTimeItem() {
	return ((bool(*)(CItem *))Addr::CItem::IsRealTimeItem)(this);
}

bool CItem::AddToCharacter(LPCHARACTER a0, BYTE a1, bool a2) {
	return ((bool(*)(CItem *, LPCHARACTER, BYTE, bool))Addr::CItem::AddToCharacter)(this, a0, a1, a2);
}

void CItem::UpdatePacket() {
	((void(*)(CItem *))Addr::CItem::UpdatePacket)(this);
}

bool CItem::IsRideItem() {
	return ((bool(*)(CItem *))Addr::CItem::IsRideItem)(this);
}

int CItem::GetSocketCount() {
	return ((int(*)(CItem *))Addr::CItem::GetSocketCount)(this);
}

bool CItem::OnAfterCreatedItem() {
	return ((bool(*)(CItem *))Addr::CItem::OnAfterCreatedItem)(this);
}
const TItemTable* CItem::GetProto(){
    return m_pProto;
}
DWORD CItem::GetMaskVnum(){
    return m_dwMaskVnum;
}
long CItem::GetSocket(int pos){
    if (pos < 3){
        return m_alSockets[pos];
    }
    return 0;
}
const TPlayerItemAttribute * CItem::GetAttributes(){
    return this->m_aAttr;
}
const TPlayerItemAttribute & CItem::GetAttribute(int attr){
    return this->m_aAttr[attr];
}
BYTE CItem::GetAttributeType(int attr){
    return this->m_aAttr[attr].bType;
}
short CItem::GetAttributeValue(int attr){
    return this->m_aAttr[attr].sValue;
}
DWORD CItem::GetVnum(void) const {
	return this->m_pProto->dwVnum;
}
BYTE CItem::GetType() const{
    return this->m_pProto->bType;
}
BYTE CItem::GetSize(){
    return this->m_pProto->bSize;
}
void CItem::AddAttribute(void){
    ((void(*)(CItem *))Addr::CItem::AddAttributeVoid)(this);
}
const char * CItem::GetName(){
    return this->m_pProto->szLocaleName;
}
const char * CItem::GetBaseName(){
    return this->m_pProto->szName;
}
}
