/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "CHARACTER.hpp"
#include "../addr.hpp"
#include "VID.hpp"
#include <cstdio>
namespace libm2{
void CHARACTER::ChatPacket(BYTE type, const char * msg, ...){
    va_list va;
    va_start(va, msg);
    char buffer[513];
    vsnprintf(buffer, 513, msg, va);
    va_end(va);
    ((void(*)(CHARACTER* pkCh,BYTE,const char*))(Addr::CHARACTER::ChatPacket))(this,type,buffer);
}
void CHARACTER::ChatPacket(BYTE type, std::string msg){
    this->ChatPacket(type, msg.c_str());
};
const char * CHARACTER::GetName(void) const{
    return this->m_stName.c_str();
}
bool CHARACTER::SetSyncOwner(LPCHARACTER ch, bool b){
    return ((bool(*)(LPCHARACTER,LPCHARACTER,bool))Addr::CHARACTER::SetSyncOwner)(this,ch,b);
}
BYTE CHARACTER::GetCharType(void){
    return ((BYTE(*)(LPCHARACTER))Addr::CHARACTER::GetCharType)(this);
}
bool CHARACTER::Sync(long x, long y){
    return ((bool(*)(LPCHARACTER,long,long))Addr::CHARACTER::Sync)(this,x,y);
};
BYTE CHARACTER::GetGMLevel(){
    return ((BYTE(*)(LPCHARACTER))Addr::CHARACTER::GetGMLevel)(this);
}
const VID& CHARACTER::GetVID(){
    return this->m_vid;
}
int CHARACTER::GetLevel() const{
    return m_points.level;
}
DWORD CHARACTER::GetPlayerID() const{
    return m_dwPlayerID;
}
void CHARACTER::SpecificEffectPacket(const char* path){
    ((void(*)(CHARACTER*,const char*))Addr::CHARACTER::SpecificEffectPacket)(this,path);
}
void CHARACTER::GoHome() {
	((void(*)(CHARACTER *))Addr::CHARACTER::GoHome)(this);
}

DWORD CHARACTER::GetStopTime() const {
	return ((DWORD(*)(const CHARACTER *))Addr::CHARACTER::GetStopTime)(this);
}

void CHARACTER::SetNowWalking(bool a0) {
	((void(*)(CHARACTER *, bool))Addr::CHARACTER::SetNowWalking)(this, a0);
}

void CHARACTER::SetRevive(bool a0) {
	((void(*)(CHARACTER *, bool))Addr::CHARACTER::SetRevive)(this, a0);
}

void CHARACTER::MonsterChat(BYTE a0) {
	((void(*)(CHARACTER *, BYTE))Addr::CHARACTER::MonsterChat)(this, a0);
}

void CHARACTER::StateIdle() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StateIdle)(this);
}

void CHARACTER::OpenMyShop(const char * a0, TShopItemTable * a1, BYTE a2) {
	((void(*)(CHARACTER *, const char *, TShopItemTable *, BYTE))Addr::CHARACTER::OpenMyShop)(this, a0, a1, a2);
}

void CHARACTER::SetWarMap(CWarMap * a0) {
	((void(*)(CHARACTER *, CWarMap *))Addr::CHARACTER::SetWarMap)(this, a0);
}

int CHARACTER::GetAlignment() const {
	return ((int(*)(const CHARACTER *))Addr::CHARACTER::GetAlignment)(this);
}

void CHARACTER::SetRegen(LPREGEN a0) {
	((void(*)(CHARACTER *, LPREGEN))Addr::CHARACTER::SetRegen)(this, a0);
}

DWORD CHARACTER::GetMobDropItemVnum() const {
	return ((DWORD(*)(const CHARACTER *))Addr::CHARACTER::GetMobDropItemVnum)(this);
}

void CHARACTER::RemoveSpecifyItem(DWORD a0, DWORD a1) {
	((void(*)(CHARACTER *, DWORD, DWORD))Addr::CHARACTER::RemoveSpecifyItem)(this, a0, a1);
}

bool CHARACTER::Shoot(BYTE a0) {
	return ((bool(*)(CHARACTER *, BYTE))Addr::CHARACTER::Shoot)(this, a0);
}

bool CHARACTER::Damage(LPCHARACTER a0, int a1, EDamageType a2) {
	return ((bool(*)(CHARACTER *, LPCHARACTER, int, EDamageType))Addr::CHARACTER::Damage)(this, a0, a1, a2);
}

void CHARACTER::SetSkillGroup(BYTE a0) {
	((void(*)(CHARACTER *, BYTE))Addr::CHARACTER::SetSkillGroup)(this, a0);
}

void CHARACTER::AttackedByPoison(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::AttackedByPoison)(this, a0);
}

bool CHARACTER::CanUseSkill(DWORD a0) const {
	return ((bool(*)(const CHARACTER *, DWORD))Addr::CHARACTER::CanUseSkill)(this, a0);
}

void CHARACTER::SetValidComboInterval(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::SetValidComboInterval)(this, a0);
}

void CHARACTER::__StateIdle_Stone() {
	((void(*)(CHARACTER *))Addr::CHARACTER::__StateIdle_Stone)(this);
}

LPCHARACTER CHARACTER::DistributeExp() {
	return ((LPCHARACTER(*)(CHARACTER *))Addr::CHARACTER::DistributeExp)(this);
}

DWORD CHARACTER::GetAID() const {
	return ((DWORD(*)(const CHARACTER *))Addr::CHARACTER::GetAID)(this);
}

void CHARACTER::SetLevel(BYTE a0) {
	((void(*)(CHARACTER *, BYTE))Addr::CHARACTER::SetLevel)(this, a0);
}

LPITEM CHARACTER::AutoGiveItem(DWORD a0, BYTE a1, int a2, bool a3) {
	return ((LPITEM(*)(CHARACTER *, DWORD, BYTE, int, bool))Addr::CHARACTER::AutoGiveItem)(this, a0, a1, a2, a3);
}

bool CHARACTER::IsRaceFlag(DWORD a0) const {
	return ((bool(*)(const CHARACTER *, DWORD))Addr::CHARACTER::IsRaceFlag)(this, a0);
}

void CHARACTER::__StateIdle_NPC() {
	((void(*)(CHARACTER *))Addr::CHARACTER::__StateIdle_NPC)(this);
}

void CHARACTER::SetAttackMob() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SetAttackMob)(this);
}

int CHARACTER::GetQuestFlag(const std::string & a0) const {
	return ((int(*)(const CHARACTER *, const std::string &))Addr::CHARACTER::GetQuestFlag)(this, a0);
}

CSafebox * CHARACTER::GetMall() const {
	return ((CSafebox *(*)(const CHARACTER *))Addr::CHARACTER::GetMall)(this);
}

void CHARACTER::SetShop(LPSHOP a0) {
	((void(*)(CHARACTER *, LPSHOP))Addr::CHARACTER::SetShop)(this, a0);
}

void CHARACTER::Disconnect(const char * a0) {
	((void(*)(CHARACTER *, const char *))Addr::CHARACTER::Disconnect)(this, a0);
}

void CHARACTER::PayRefineFee(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::PayRefineFee)(this, a0);
}

bool CHARACTER::GetQuickslot(BYTE a0, TQuickslot ** a1) {
	return ((bool(*)(CHARACTER *, BYTE, TQuickslot **))Addr::CHARACTER::GetQuickslot)(this, a0, a1);
}

void CHARACTER::SetSafeboxSize(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::SetSafeboxSize)(this, a0);
}

void CHARACTER::BeginFight(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::BeginFight)(this, a0);
}

bool CHARACTER::IsMCOK(CHARACTER::MONARCH_INDEX a0) const {
	return ((bool(*)(const CHARACTER *, CHARACTER::MONARCH_INDEX))Addr::CHARACTER::IsMCOK)(this, a0);
}

bool CHARACTER::CanReceiveItem(LPCHARACTER a0, LPITEM a1) const {
	return ((bool(*)(const CHARACTER *, LPCHARACTER, LPITEM))Addr::CHARACTER::CanReceiveItem)(this, a0, a1);
}

int CHARACTER::GetRealAlignment() const {
	return ((int(*)(const CHARACTER *))Addr::CHARACTER::GetRealAlignment)(this);
}

void CHARACTER::MountVnum(DWORD a0) {
	((void(*)(CHARACTER *, DWORD))Addr::CHARACTER::MountVnum)(this, a0);
}

void CHARACTER::ClearSubSkill() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ClearSubSkill)(this);
}

void CHARACTER::SetDungeon(LPDUNGEON a0) {
	((void(*)(CHARACTER *, LPDUNGEON))Addr::CHARACTER::SetDungeon)(this, a0);
}

float CHARACTER::GetMobDamageMultiply() const {
	return ((float(*)(const CHARACTER *))Addr::CHARACTER::GetMobDamageMultiply)(this);
}

void CHARACTER::CloseMall() {
	((void(*)(CHARACTER *))Addr::CHARACTER::CloseMall)(this);
}

void CHARACTER::StateBattle() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StateBattle)(this);
}

void CHARACTER::ComputePoints() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ComputePoints)(this);
}

int CHARACTER::GetUsedSkillMasterType(DWORD a0) {
	return ((int(*)(CHARACTER *, DWORD))Addr::CHARACTER::GetUsedSkillMasterType)(this, a0);
}

void CHARACTER::PointsPacket() {
	((void(*)(CHARACTER *))Addr::CHARACTER::PointsPacket)(this);
}

void CHARACTER::PullMonster() {
	((void(*)(CHARACTER *))Addr::CHARACTER::PullMonster)(this);
}

LPITEM CHARACTER::FindItemByID(DWORD a0) const {
	return ((LPITEM(*)(const CHARACTER *, DWORD))Addr::CHARACTER::FindItemByID)(this, a0);
}

void CHARACTER::ProcessRecallItem(LPITEM a0) {
	((void(*)(CHARACTER *, LPITEM))Addr::CHARACTER::ProcessRecallItem)(this, a0);
}

void CHARACTER::BroadcastTargetPacket() {
	((void(*)(CHARACTER *))Addr::CHARACTER::BroadcastTargetPacket)(this);
}

void CHARACTER::UseSilkBotaryReal(const TPacketMyshopPricelistHeader * a0) {
	((void(*)(CHARACTER *, const TPacketMyshopPricelistHeader *))Addr::CHARACTER::UseSilkBotaryReal)(this, a0);
}

void CHARACTER::SetSafeboxOpenPosition() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SetSafeboxOpenPosition)(this);
}

void CHARACTER::ClearTarget() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ClearTarget)(this);
}

bool CHARACTER::ExchangeStart(LPCHARACTER a0) {
	return ((bool(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::ExchangeStart)(this, a0);
}

void CHARACTER::SendGuildName(CGuild * a0) {
	((void(*)(CHARACTER *, CGuild *))Addr::CHARACTER::SendGuildName)(this, a0);
}

DWORD CHARACTER::GetMCL(CHARACTER::MONARCH_INDEX a0) const {
	return ((DWORD(*)(const CHARACTER *, CHARACTER::MONARCH_INDEX))Addr::CHARACTER::GetMCL)(this, a0);
}

void CHARACTER::Dead(LPCHARACTER a0, bool a1) {
	((void(*)(CHARACTER *, LPCHARACTER, bool))Addr::CHARACTER::Dead)(this, a0, a1);
}

CHARACTER::~CHARACTER() {
	((void(*)(CHARACTER *))Addr::CHARACTER::__CHARACTER)(this);
}

void CHARACTER::HorseSummon(bool a0, bool a1, DWORD a2, const char * a3) {
	((void(*)(CHARACTER *, bool, bool, DWORD, const char *))Addr::CHARACTER::HorseSummon)(this, a0, a1, a2, a3);
}

void CHARACTER::ResetPlayTime(DWORD a0) {
	((void(*)(CHARACTER *, DWORD))Addr::CHARACTER::ResetPlayTime)(this, a0);
}

bool CHARACTER::IsEmptyItemGrid(BYTE a0, BYTE a1, int a2) const {
	return ((bool(*)(const CHARACTER *, BYTE, BYTE, int))Addr::CHARACTER::IsEmptyItemGrid)(this, a0, a1, a2);
}

int CHARACTER::GetSkillMasterType(DWORD a0) const {
	return ((int(*)(const CHARACTER *, DWORD))Addr::CHARACTER::GetSkillMasterType)(this, a0);
}

LPCHARACTER CHARACTER::GetQuestNPC() const {
	return ((LPCHARACTER(*)(const CHARACTER *))Addr::CHARACTER::GetQuestNPC)(this);
}

void CHARACTER::SetVictim(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::SetVictim)(this, a0);
}

bool CHARACTER::HasReviverInParty() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::HasReviverInParty)(this);
}

DWORD CHARACTER::GetMCLTime(CHARACTER::MONARCH_INDEX a0) const {
	return ((DWORD(*)(const CHARACTER *, CHARACTER::MONARCH_INDEX))Addr::CHARACTER::GetMCLTime)(this, a0);
}

bool CHARACTER::RequestToParty(LPCHARACTER a0) {
	return ((bool(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::RequestToParty)(this, a0);
}

void CHARACTER::StateFlagBase() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StateFlagBase)(this);
}

void CHARACTER::SetNoAttackShinsu() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SetNoAttackShinsu)(this);
}

LPDUNGEON CHARACTER::GetDungeonForce() const {
	return ((LPDUNGEON(*)(const CHARACTER *))Addr::CHARACTER::GetDungeonForce)(this);
}

void CHARACTER::SaveExitLocation() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SaveExitLocation)(this);
}

void CHARACTER::SetWeddingMap(marriage::WeddingMap * a0) {
	((void(*)(CHARACTER *, marriage::WeddingMap *))Addr::CHARACTER::SetWeddingMap)(this, a0);
}

void CHARACTER::ChangeVictimByAggro(int a0, LPCHARACTER a1) {
	((void(*)(CHARACTER *, int, LPCHARACTER))Addr::CHARACTER::ChangeVictimByAggro)(this, a0, a1);
}

void CHARACTER::SendEquipment(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::SendEquipment)(this, a0);
}

void CHARACTER::SetPart(BYTE a0, WORD a1) {
	((void(*)(CHARACTER *, BYTE, WORD))Addr::CHARACTER::SetPart)(this, a0, a1);
}

bool CHARACTER::IsDead() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsDead)(this);
}

void CHARACTER::AssignTriggers(const TMobTable * a0) {
	((void(*)(CHARACTER *, const TMobTable *))Addr::CHARACTER::AssignTriggers)(this, a0);
}

int CHARACTER::CountEmptyInventory() const {
	return ((int(*)(const CHARACTER *))Addr::CHARACTER::CountEmptyInventory)(this);
}

void CHARACTER::SetNextStatePulse(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::SetNextStatePulse)(this, a0);
}

void CHARACTER::ResetMobSkillCooltime() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ResetMobSkillCooltime)(this);
}

void CHARACTER::ReviveInvisible(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::ReviveInvisible)(this, a0);
}

/*void CHARACTER::~CHARACTER() {
	((void(*)(CHARACTER *))Addr::CHARACTER::__CHARACTER__2676)(this);
}*/

bool CHARACTER::CanDoCube() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::CanDoCube)(this);
}

bool CHARACTER::IsGoodAffect(BYTE a0) const {
	return ((bool(*)(const CHARACTER *, BYTE))Addr::CHARACTER::IsGoodAffect)(this, a0);
}

float CHARACTER::GetMoveSpeed() const {
	return ((float(*)(const CHARACTER *))Addr::CHARACTER::GetMoveSpeed)(this);
}

bool CHARACTER::IsNoAttackChunjo() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsNoAttackChunjo)(this);
}

void CHARACTER::OnClick(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::OnClick)(this, a0);
}

void CHARACTER::UpdateStateMachine(DWORD a0) {
	((void(*)(CHARACTER *, DWORD))Addr::CHARACTER::UpdateStateMachine)(this, a0);
}

void CHARACTER::StateMove() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StateMove)(this);
}

void CHARACTER::SetLastAttacked(DWORD a0) {
	((void(*)(CHARACTER *, DWORD))Addr::CHARACTER::SetLastAttacked)(this, a0);
}

LPCHARACTER CHARACTER::GetProtege() const {
	return ((LPCHARACTER(*)(const CHARACTER *))Addr::CHARACTER::GetProtege)(this);
}

void CHARACTER::StopStaminaConsume() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StopStaminaConsume)(this);
}

void CHARACTER::ComputePassiveSkill(DWORD a0) {
	((void(*)(CHARACTER *, DWORD))Addr::CHARACTER::ComputePassiveSkill)(this, a0);
}

float CHARACTER::GetDistanceFromSafeboxOpen() const {
	return ((float(*)(const CHARACTER *))Addr::CHARACTER::GetDistanceFromSafeboxOpen)(this);
}

void CHARACTER::SetRefineNPC(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::SetRefineNPC)(this, a0);
}

bool CHARACTER::RemoveAffect(DWORD a0) {
	return ((bool(*)(CHARACTER *, DWORD))Addr::CHARACTER::RemoveAffect__8598)(this, a0);
}

void CHARACTER::SetWarpLocation(long a0, long a1, long a2) {
	((void(*)(CHARACTER *, long, long, long))Addr::CHARACTER::SetWarpLocation)(this, a0, a1, a2);
}

bool CHARACTER::UseMobSkill(unsigned int a0) {
	return ((bool(*)(CHARACTER *, unsigned int))Addr::CHARACTER::UseMobSkill)(this, a0);
}

void CHARACTER::GiveGold(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::GiveGold)(this, a0);
}

float CHARACTER::GetMoveMotionSpeed() const {
	return ((float(*)(const CHARACTER *))Addr::CHARACTER::GetMoveMotionSpeed)(this);
}

CHARACTER::CHARACTER() {
	((void(*)(CHARACTER *))Addr::CHARACTER::CHARACTER)(this);
}

DWORD CHARACTER::GetSummonVnum() const {
	return ((DWORD(*)(const CHARACTER *))Addr::CHARACTER::GetSummonVnum)(this);
}

void CHARACTER::OnMove(bool a0) {
	((void(*)(CHARACTER *, bool))Addr::CHARACTER::OnMove)(this, a0);
}

void CHARACTER::StopStateMachine() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StopStateMachine)(this);
}

bool CHARACTER::UseSkill(DWORD a0, LPCHARACTER a1, bool a2) {
	return ((bool(*)(CHARACTER *, DWORD, LPCHARACTER, bool))Addr::CHARACTER::UseSkill)(this, a0, a1, a2);
}

BYTE CHARACTER::GetMobRank() const {
	return ((BYTE(*)(const CHARACTER *))Addr::CHARACTER::GetMobRank)(this);
}

void CHARACTER::CheckTarget() {
	((void(*)(CHARACTER *))Addr::CHARACTER::CheckTarget)(this);
}

void CHARACTER::ApplyPoint(BYTE a0, int a1) {
	((void(*)(CHARACTER *, BYTE, int))Addr::CHARACTER::ApplyPoint)(this, a0, a1);
}

bool CHARACTER::IsStun() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsStun)(this);
}

bool CHARACTER::CannotMoveByAffect() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::CannotMoveByAffect)(this);
}

void CHARACTER::DeathPenalty(BYTE a0) {
	((void(*)(CHARACTER *, BYTE))Addr::CHARACTER::DeathPenalty)(this, a0);
}

bool CHARACTER::CanBeginFight() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::CanBeginFight)(this);
}

void CHARACTER::MotionPacketEncode(BYTE a0, LPCHARACTER a1, packet_motion * a2) {
	((void(*)(CHARACTER *, BYTE, LPCHARACTER, packet_motion *))Addr::CHARACTER::MotionPacketEncode)(this, a0, a1, a2);
}

bool CHARACTER::IsEquipUniqueGroup(DWORD a0) const {
	return ((bool(*)(const CHARACTER *, DWORD))Addr::CHARACTER::IsEquipUniqueGroup)(this, a0);
}

bool CHARACTER::WarpToPID(DWORD a0) {
	return ((bool(*)(CHARACTER *, DWORD))Addr::CHARACTER::WarpToPID)(this, a0);
}

bool CHARACTER::UnEquipSpecialRideUniqueItem() {
	return ((bool(*)(CHARACTER *))Addr::CHARACTER::UnEquipSpecialRideUniqueItem)(this);
}

void CHARACTER::SetQuestFlag(const std::string & a0, int a1) {
	((void(*)(CHARACTER *, const std::string &, int))Addr::CHARACTER::SetQuestFlag)(this, a0, a1);
}

void CHARACTER::SetItem(BYTE a0, LPITEM a1, bool a2) {
	((void(*)(CHARACTER *, BYTE, LPITEM, bool))Addr::CHARACTER::SetItem)(this, a0, a1, a2);
}

void CHARACTER::UpdateCharacter(DWORD a0) {
	((void(*)(CHARACTER *, DWORD))Addr::CHARACTER::UpdateCharacter)(this, a0);
}

CAffect * CHARACTER::FindAffect(DWORD a0, BYTE a1) {
	return ((CAffect *(*)(CHARACTER *, DWORD, BYTE))Addr::CHARACTER::FindAffect)(this, a0, a1);
}

void CHARACTER::AggregateMonster() {
	((void(*)(CHARACTER *))Addr::CHARACTER::AggregateMonster)(this);
}

void CHARACTER::ResetComboHackCount() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ResetComboHackCount)(this);
}

bool CHARACTER::StartStateMachine(int a0) {
	return ((bool(*)(CHARACTER *, int))Addr::CHARACTER::StartStateMachine)(this, a0);
}

void CHARACTER::StopHackShieldCheckCycle() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StopHackShieldCheckCycle)(this);
}

void CHARACTER::SendGuildName(DWORD a0) {
	((void(*)(CHARACTER *, DWORD))Addr::CHARACTER::SendGuildName__2419)(this, a0);
}

bool CHARACTER::IsLearnableSkill(DWORD a0) const {
	return ((bool(*)(const CHARACTER *, DWORD))Addr::CHARACTER::IsLearnableSkill)(this, a0);
}

int CHARACTER::GetSkillPowerByLevel(int a0, bool a1) const {
	return ((int(*)(const CHARACTER *, int, bool))Addr::CHARACTER::GetSkillPowerByLevel)(this, a0, a1);
}

void CHARACTER::SkillLearnWaitMoreTimeMessage(DWORD a0) {
	((void(*)(CHARACTER *, DWORD))Addr::CHARACTER::SkillLearnWaitMoreTimeMessage)(this, a0);
}

void CHARACTER::CloseSafebox() {
	((void(*)(CHARACTER *))Addr::CHARACTER::CloseSafebox)(this);
}

void CHARACTER::LoadSafebox(int a0, DWORD a1, int a2, TPlayerItem * a3) {
	((void(*)(CHARACTER *, int, DWORD, int, TPlayerItem *))Addr::CHARACTER::LoadSafebox)(this, a0, a1, a2, a3);
}

void CHARACTER::StartCheckSpeedHackEvent() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StartCheckSpeedHackEvent)(this);
}

void CHARACTER::PointChange(BYTE a0, int a1, bool a2, bool a3) {
	((void(*)(CHARACTER *, BYTE, int, bool, bool))Addr::CHARACTER::PointChange)(this, a0, a1, a2, a3);
}

bool CHARACTER::GiveRecallItem(LPITEM a0) {
	return ((bool(*)(CHARACTER *, LPITEM))Addr::CHARACTER::GiveRecallItem)(this, a0);
}

DWORD CHARACTER::GetLastComboTime() const {
	return ((DWORD(*)(const CHARACTER *))Addr::CHARACTER::GetLastComboTime)(this);
}

void CHARACTER::Motion(BYTE a0, LPCHARACTER a1) {
	((void(*)(CHARACTER *, BYTE, LPCHARACTER))Addr::CHARACTER::Motion)(this, a0, a1);
}

bool CHARACTER::OnIdle() {
	return ((bool(*)(CHARACTER *))Addr::CHARACTER::OnIdle)(this);
}

CHARACTER::PartyJoinErrCode CHARACTER::IsPartyJoinableMutableCondition(const LPCHARACTER a0,const LPCHARACTER a1) {
	return ((CHARACTER::PartyJoinErrCode(*)(const LPCHARACTER, const LPCHARACTER))Addr::CHARACTER::IsPartyJoinableMutableCondition)(a0, a1);
}

void CHARACTER::StartHackShieldCheckCycle(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::StartHackShieldCheckCycle)(this, a0);
}

void CHARACTER::SetRefineMode(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::SetRefineMode)(this, a0);
}

bool CHARACTER::IsBerserk() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsBerserk)(this);
}

bool CHARACTER::StopRiding() {
	return ((bool(*)(CHARACTER *))Addr::CHARACTER::StopRiding)(this);
}

bool CHARACTER::IsBerserker() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsBerserker)(this);
}

void CHARACTER::Say(const std::string & a0) {
	((void(*)(CHARACTER *, const std::string &))Addr::CHARACTER::Say)(this, a0);
}

BYTE CHARACTER::GetJob() const {
	return ((BYTE(*)(const CHARACTER *))Addr::CHARACTER::GetJob)(this);
}

bool CHARACTER::SetQuickslot(BYTE a0, TQuickslot & a1) {
	return ((bool(*)(CHARACTER *, BYTE, TQuickslot &))Addr::CHARACTER::SetQuickslot)(this, a0, a1);
}

bool CHARACTER::IsStoneSkinner() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsStoneSkinner)(this);
}

bool CHARACTER::IsStaminaConsume() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsStaminaConsume)(this);
}

void CHARACTER::PartyInvite(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::PartyInvite)(this, a0);
}

void CHARACTER::StartSaveEvent() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StartSaveEvent)(this);
}

void CHARACTER::UseArrow(LPITEM a0, DWORD a1) {
	((void(*)(CHARACTER *, LPITEM, DWORD))Addr::CHARACTER::UseArrow)(this, a0, a1);
}

void CHARACTER::Save() {
	((void(*)(CHARACTER *))Addr::CHARACTER::Save)(this);
}

BYTE CHARACTER::GetComboIndex() const {
	return ((BYTE(*)(const CHARACTER *))Addr::CHARACTER::GetComboIndex)(this);
}

BYTE CHARACTER::GetMobSize() const {
	return ((BYTE(*)(const CHARACTER *))Addr::CHARACTER::GetMobSize)(this);
}

void CHARACTER::__StateIdle_Monster() {
	((void(*)(CHARACTER *))Addr::CHARACTER::__StateIdle_Monster)(this);
}

bool CHARACTER::SkillLevelDown(DWORD a0) {
	return ((bool(*)(CHARACTER *, DWORD))Addr::CHARACTER::SkillLevelDown)(this, a0);
}

void CHARACTER::SetRider(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::SetRider)(this, a0);
}

void CHARACTER::fishing_take() {
	((void(*)(CHARACTER *))Addr::CHARACTER::fishing_take)(this);
}

void CHARACTER::AutoGiveItem(LPITEM a0, bool a1) {
	((void(*)(CHARACTER *, LPITEM, bool))Addr::CHARACTER::AutoGiveItem__30228)(this, a0, a1);
}

void CHARACTER::UseSilkBotary() {
	((void(*)(CHARACTER *))Addr::CHARACTER::UseSilkBotary)(this);
}

void CHARACTER::CloseMyShop() {
	((void(*)(CHARACTER *))Addr::CHARACTER::CloseMyShop)(this);
}

bool CHARACTER::IsImmune(DWORD a0) {
	return ((bool(*)(CHARACTER *, DWORD))Addr::CHARACTER::IsImmune)(this, a0);
}

DWORD CHARACTER::GetMC(CHARACTER::MONARCH_INDEX a0) const {
	return ((DWORD(*)(const CHARACTER *, CHARACTER::MONARCH_INDEX))Addr::CHARACTER::GetMC)(this, a0);
}

void CHARACTER::SetGuild(CGuild * a0) {
	((void(*)(CHARACTER *, CGuild *))Addr::CHARACTER::SetGuild)(this, a0);
}

LPCHARACTER CHARACTER::GetRider() const {
	return ((LPCHARACTER(*)(const CHARACTER *))Addr::CHARACTER::GetRider)(this);
}

void CHARACTER::EncodeRemovePacket(LPENTITY a0) {
	((void(*)(CHARACTER *, LPENTITY))Addr::CHARACTER::EncodeRemovePacket)(this, a0);
}

void CHARACTER::EffectPacket(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::EffectPacket)(this, a0);
}

void CHARACTER::ForgetMyAttacker() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ForgetMyAttacker)(this);
}

WORD CHARACTER::GetRaceNum() const {
	return ((WORD(*)(const CHARACTER *))Addr::CHARACTER::GetRaceNum)(this);
}

WORD CHARACTER::GetPart(BYTE a0) const {
	return ((WORD(*)(const CHARACTER *, BYTE))Addr::CHARACTER::GetPart)(this, a0);
}

void CHARACTER::Sitdown(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::Sitdown)(this, a0);
}

void CHARACTER::ResetSkill() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ResetSkill)(this);
}

BYTE CHARACTER::GetComboSequence() const {
	return ((BYTE(*)(const CHARACTER *))Addr::CHARACTER::GetComboSequence)(this);
}

void CHARACTER::SaveAffect() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SaveAffect)(this);
}

void CHARACTER::SaveReal() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SaveReal)(this);
}

void CHARACTER::SendMovePacket(BYTE a0, BYTE a1, DWORD a2, DWORD a3, DWORD a4, DWORD a5, int a6) {
	((void(*)(CHARACTER *, BYTE, BYTE, DWORD, DWORD, DWORD, DWORD, int))Addr::CHARACTER::SendMovePacket)(this, a0, a1, a2, a3, a4, a5, a6);
}

bool CHARACTER::WarpSet(long a0, long a1, long a2) {
	return ((bool(*)(CHARACTER *, long, long, long))Addr::CHARACTER::WarpSet)(this, a0, a1, a2);
}

int CHARACTER::ChangeEmpire(BYTE a0) {
	return ((int(*)(CHARACTER *, BYTE))Addr::CHARACTER::ChangeEmpire)(this, a0);
}

int CHARACTER::ComputeCooltime(int a0) {
	return ((int(*)(CHARACTER *, int))Addr::CHARACTER::ComputeCooltime)(this, a0);
}

bool CHARACTER::RefineItem(LPITEM a0, LPITEM a1) {
	return ((bool(*)(CHARACTER *, LPITEM, LPITEM))Addr::CHARACTER::RefineItem)(this, a0, a1);
}

bool CHARACTER::SwapQuickslot(BYTE a0, BYTE a1) {
	return ((bool(*)(CHARACTER *, BYTE, BYTE))Addr::CHARACTER::SwapQuickslot)(this, a0, a1);
}

void CHARACTER::UpdateAggrPointEx(LPCHARACTER a0, EDamageType a1, int a2, CHARACTER::TBattleInfo & a3) {
	((void(*)(CHARACTER *, LPCHARACTER, EDamageType, int, CHARACTER::TBattleInfo &))Addr::CHARACTER::UpdateAggrPointEx)(this, a0, a1, a2, a3);
}

void CHARACTER::CreatePlayerProto(TPlayerTable & a0) {
	((void(*)(CHARACTER *, TPlayerTable &))Addr::CHARACTER::CreatePlayerProto)(this, a0);
}

int CHARACTER::GetPremiumRemainSeconds(BYTE a0) const {
	return ((int(*)(const CHARACTER *, BYTE))Addr::CHARACTER::GetPremiumRemainSeconds)(this, a0);
}

bool CHARACTER::CanSummon(int a0) {
	return ((bool(*)(CHARACTER *, int))Addr::CHARACTER::CanSummon)(this, a0);
}

bool CHARACTER::DoRefine(LPITEM a0, bool a1) {
	return ((bool(*)(CHARACTER *, LPITEM, bool))Addr::CHARACTER::DoRefine)(this, a0, a1);
}

void CHARACTER::mining(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::mining)(this, a0);
}

void CHARACTER::StopMuyeongEvent() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StopMuyeongEvent)(this);
}

void CHARACTER::ChangeSafeboxSize(BYTE a0) {
	((void(*)(CHARACTER *, BYTE))Addr::CHARACTER::ChangeSafeboxSize)(this, a0);
}

void CHARACTER::FlyTarget(DWORD a0, long a1, long a2, BYTE a3) {
	((void(*)(CHARACTER *, DWORD, long, long, BYTE))Addr::CHARACTER::FlyTarget)(this, a0, a1, a2, a3);
}

bool CHARACTER::CanDeposit() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::CanDeposit)(this);
}

bool CHARACTER::SwapItem(BYTE a0, BYTE a1) {
	return ((bool(*)(CHARACTER *, BYTE, BYTE))Addr::CHARACTER::SwapItem)(this, a0, a1);
}

bool CHARACTER::IsDeathBlow() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsDeathBlow)(this);
}

void CHARACTER::StartDestroyWhenIdleEvent() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StartDestroyWhenIdleEvent)(this);
}

void CHARACTER::StartWarpNPCEvent() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StartWarpNPCEvent)(this);
}

void CHARACTER::DisableCooltime() {
	((void(*)(CHARACTER *))Addr::CHARACTER::DisableCooltime)(this);
}

DWORD CHARACTER::GetMonsterDrainSPPoint() const {
	return ((DWORD(*)(const CHARACTER *))Addr::CHARACTER::GetMonsterDrainSPPoint)(this);
}

bool CHARACTER::IsEquipUniqueItem(DWORD a0) const {
	return ((bool(*)(const CHARACTER *, DWORD))Addr::CHARACTER::IsEquipUniqueItem)(this, a0);
}

void CHARACTER::WarpEnd() {
	((void(*)(CHARACTER *))Addr::CHARACTER::WarpEnd)(this);
}

bool CHARACTER::RefineInformation(BYTE a0, BYTE a1, int a2) {
	return ((bool(*)(CHARACTER *, BYTE, BYTE, int))Addr::CHARACTER::RefineInformation)(this, a0, a1, a2);
}

void CHARACTER::CalculateMoveDuration() {
	((void(*)(CHARACTER *))Addr::CHARACTER::CalculateMoveDuration)(this);
}

int CHARACTER::ComputeRefineFee(int a0, int a1) const {
	return ((int(*)(const CHARACTER *, int, int))Addr::CHARACTER::ComputeRefineFee)(this, a0, a1);
}

int CHARACTER::GetArrowAndBow(LPITEM * a0, LPITEM * a1, int a2) {
	return ((int(*)(CHARACTER *, LPITEM *, LPITEM *, int))Addr::CHARACTER::GetArrowAndBow)(this, a0, a1, a2);
}

bool CHARACTER::CheckSkillHitCount(const BYTE a0, const VID  a1) {
	return ((bool(*)(CHARACTER *, const BYTE, const VID ))Addr::CHARACTER::CheckSkillHitCount)(this, a0, a1);
}

CGuild * CHARACTER::GetRefineGuild() const {
	return ((CGuild *(*)(const CHARACTER *))Addr::CHARACTER::GetRefineGuild)(this);
}

void CHARACTER::SetBerserk(bool a0) {
	((void(*)(CHARACTER *, bool))Addr::CHARACTER::SetBerserk)(this, a0);
}

bool CHARACTER::IsGM() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsGM)(this);
}

bool CHARACTER::UseItem(BYTE a0, int a1) {
	return ((bool(*)(CHARACTER *, BYTE, int))Addr::CHARACTER::UseItem)(this, a0, a1);
}

void CHARACTER::UpdateAlignment(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::UpdateAlignment)(this, a0);
}

void CHARACTER::StateFlag() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StateFlag)(this);
}

void CHARACTER::SendDamagePacket(LPCHARACTER a0, int a1, BYTE a2) {
	((void(*)(CHARACTER *, LPCHARACTER, int, BYTE))Addr::CHARACTER::SendDamagePacket)(this, a0, a1, a2);
}

void CHARACTER::ClearRefineMode() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ClearRefineMode)(this);
}

void CHARACTER::SkipComboAttackByTime(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::SkipComboAttackByTime)(this, a0);
}

int CHARACTER::GetPolymorphPoint(BYTE a0) const {
	return ((int(*)(const CHARACTER *, BYTE))Addr::CHARACTER::GetPolymorphPoint)(this, a0);
}

LPCHARACTER CHARACTER::GetVictim() const {
	return ((LPCHARACTER(*)(const CHARACTER *))Addr::CHARACTER::GetVictim)(this);
}

void CHARACTER::ReceiveItem(LPCHARACTER a0, LPITEM a1) {
	((void(*)(CHARACTER *, LPCHARACTER, LPITEM))Addr::CHARACTER::ReceiveItem)(this, a0, a1);
}

void CHARACTER::SetCoward() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SetCoward)(this);
}

bool CHARACTER::CanUseMobSkill(unsigned int a0) const {
	return ((bool(*)(const CHARACTER *, unsigned int))Addr::CHARACTER::CanUseMobSkill)(this, a0);
}

bool CHARACTER::IsReviver() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsReviver)(this);
}

void CHARACTER::UpdatePacket() {
	((void(*)(CHARACTER *))Addr::CHARACTER::UpdatePacket)(this);
}

void CHARACTER::SetPosition(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::SetPosition)(this, a0);
}

bool CHARACTER::IsHack(bool a0, bool a1, int a2) {
	return ((bool(*)(CHARACTER *, bool, bool, int))Addr::CHARACTER::IsHack)(this, a0, a1, a2);
}

bool CHARACTER::IsRiding() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsRiding)(this);
}

void CHARACTER::ApplyMobAttribute(const TMobTable * a0) {
	((void(*)(CHARACTER *, const TMobTable *))Addr::CHARACTER::ApplyMobAttribute)(this, a0);
}

bool CHARACTER::IsCoward() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsCoward)(this);
}

void CHARACTER::SetRealPoint(BYTE a0, int a1) {
	((void(*)(CHARACTER *, BYTE, int))Addr::CHARACTER::SetRealPoint)(this, a0, a1);
}

bool CHARACTER::ChangeSex() {
	return ((bool(*)(CHARACTER *))Addr::CHARACTER::ChangeSex)(this);
}

void CHARACTER::StartAffectEvent() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StartAffectEvent)(this);
}

void CHARACTER::SetSkillNextReadTime(DWORD a0, time_t a1) {
	((void(*)(CHARACTER *, DWORD, time_t))Addr::CHARACTER::SetSkillNextReadTime)(this, a0, a1);
}

void CHARACTER::SetLastComboTime(DWORD a0) {
	((void(*)(CHARACTER *, DWORD))Addr::CHARACTER::SetLastComboTime)(this, a0);
}

int CHARACTER::ComputeSkill(DWORD a0, LPCHARACTER a1, BYTE a2) {
	return ((int(*)(CHARACTER *, DWORD, LPCHARACTER, BYTE))Addr::CHARACTER::ComputeSkill)(this, a0, a1, a2);
}

void CHARACTER::Stun() {
	((void(*)(CHARACTER *))Addr::CHARACTER::Stun)(this);
}

void CHARACTER::DistributeHP(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::DistributeHP)(this, a0);
}

int CHARACTER::GetValidComboInterval() const {
	return ((int(*)(const CHARACTER *))Addr::CHARACTER::GetValidComboInterval)(this);
}

bool CHARACTER::ItemProcess_Hair(LPITEM a0, int a1) {
	return ((bool(*)(CHARACTER *, LPITEM, int))Addr::CHARACTER::ItemProcess_Hair)(this, a0, a1);
}

LPITEM CHARACTER::FindSpecifyItem(DWORD a0) const {
	return ((LPITEM(*)(const CHARACTER *, DWORD))Addr::CHARACTER::FindSpecifyItem)(this, a0);
}

void CHARACTER::CreateFly(BYTE a0, LPCHARACTER a1) {
	((void(*)(CHARACTER *, BYTE, LPCHARACTER))Addr::CHARACTER::CreateFly)(this, a0, a1);
}

bool CHARACTER::IsRefineThroughGuild() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsRefineThroughGuild)(this);
}

bool CHARACTER::IsChangeAttackPosition(LPCHARACTER a0) const {
	return ((bool(*)(const CHARACTER *, LPCHARACTER))Addr::CHARACTER::IsChangeAttackPosition)(this, a0);
}

int CHARACTER::ProcessAffect() {
	return ((int(*)(CHARACTER *))Addr::CHARACTER::ProcessAffect)(this);
}

BYTE CHARACTER::GetMobBattleType() const {
	return ((BYTE(*)(const CHARACTER *))Addr::CHARACTER::GetMobBattleType)(this);
}

DWORD CHARACTER::GetMyHorseVnum() const {
	return ((DWORD(*)(const CHARACTER *))Addr::CHARACTER::GetMyHorseVnum)(this);
}

bool CHARACTER::MoveItem(BYTE a0, BYTE a1, BYTE a2) {
	return ((bool(*)(CHARACTER *, BYTE, BYTE, BYTE))Addr::CHARACTER::MoveItem)(this, a0, a1, a2);
}

void CHARACTER::SetExchange(CExchange * a0) {
	((void(*)(CHARACTER *, CExchange *))Addr::CHARACTER::SetExchange)(this, a0);
}

bool CHARACTER::IsRevive() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsRevive)(this);
}

void CHARACTER::SetPKMode(BYTE a0) {
	((void(*)(CHARACTER *, BYTE))Addr::CHARACTER::SetPKMode)(this, a0);
}

bool CHARACTER::LearnSkillByBook(DWORD a0, BYTE a1) {
	return ((bool(*)(CHARACTER *, DWORD, BYTE))Addr::CHARACTER::LearnSkillByBook)(this, a0, a1);
}

void CHARACTER::AcceptToParty(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::AcceptToParty)(this, a0);
}

void CHARACTER::AttackedByFire(LPCHARACTER a0, int a1, int a2) {
	((void(*)(CHARACTER *, LPCHARACTER, int, int))Addr::CHARACTER::AttackedByFire)(this, a0, a1, a2);
}

void CHARACTER::BuffOnAttr_RemoveBuffsFromItem(LPITEM a0) {
	((void(*)(CHARACTER *, LPITEM))Addr::CHARACTER::BuffOnAttr_RemoveBuffsFromItem)(this, a0);
}

void CHARACTER::SetQuestItemPtr(LPITEM a0) {
	((void(*)(CHARACTER *, LPITEM))Addr::CHARACTER::SetQuestItemPtr)(this, a0);
}

bool CHARACTER::IsAggressive() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsAggressive)(this);
}

BYTE CHARACTER::GetPKMode() const {
	return ((BYTE(*)(const CHARACTER *))Addr::CHARACTER::GetPKMode)(this);
}

bool CHARACTER::Move(long a0, long a1) {
	return ((bool(*)(CHARACTER *, long, long))Addr::CHARACTER::Move)(this, a0, a1);
}

void CHARACTER::SetStone(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::SetStone)(this, a0);
}

int CHARACTER::GetLimitPoint(BYTE a0) const {
	return ((int(*)(const CHARACTER *, BYTE))Addr::CHARACTER::GetLimitPoint)(this, a0);
}

void CHARACTER::ItemDropPenalty(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::ItemDropPenalty)(this, a0);
}

const TMobTable & CHARACTER::GetMobTable() const {
	return ((const TMobTable &(*)(const CHARACTER *))Addr::CHARACTER::GetMobTable)(this);
}

bool CHARACTER::IsGodSpeeder() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsGodSpeeder)(this);
}

void CHARACTER::fishing() {
	((void(*)(CHARACTER *))Addr::CHARACTER::fishing)(this);
}

void CHARACTER::RemoveBadAffect() {
	((void(*)(CHARACTER *))Addr::CHARACTER::RemoveBadAffect)(this);
}

DWORD CHARACTER::GetNextExp() const {
	return ((DWORD(*)(const CHARACTER *))Addr::CHARACTER::GetNextExp)(this);
}

void CHARACTER::Create(const char * a0, DWORD a1, bool a2) {
	((void(*)(CHARACTER *, const char *, DWORD, bool))Addr::CHARACTER::Create)(this, a0, a1, a2);
}

void CHARACTER::ExitToSavedLocation() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ExitToSavedLocation)(this);
}

void CHARACTER::BuffOnAttr_AddBuffsFromItem(LPITEM a0) {
	((void(*)(CHARACTER *, LPITEM))Addr::CHARACTER::BuffOnAttr_AddBuffsFromItem)(this, a0);
}

void CHARACTER::MonsterLog(const char * format,...) {
    va_list va;
    va_start(va, format);
    char buffer[513];
    vsnprintf(buffer, 513, format, va);
    va_end(va);
	((void(*)(CHARACTER *, const char *))Addr::CHARACTER::MonsterLog)(this, buffer);
}

bool CHARACTER::GiveItemFromSpecialItemGroup(DWORD a0, std::vector<unsigned int> & a1, std::vector<unsigned int> & a2, std::vector<CItem*> & a3, int & a4) {
	return ((bool(*)(CHARACTER *, DWORD, std::vector<unsigned int> &, std::vector<unsigned int> &, std::vector<CItem*> &, int &))Addr::CHARACTER::GiveItemFromSpecialItemGroup)(this, a0, a1, a2, a3, a4);
}

void CHARACTER::QuerySafeboxSize() {
	((void(*)(CHARACTER *))Addr::CHARACTER::QuerySafeboxSize)(this);
}

void CHARACTER::RemoveFire() {
	((void(*)(CHARACTER *))Addr::CHARACTER::RemoveFire)(this);
}

BYTE CHARACTER::IncreaseChatCounter() {
	return ((BYTE(*)(CHARACTER *))Addr::CHARACTER::IncreaseChatCounter)(this);
}

bool CHARACTER::UpdateAffect() {
	return ((bool(*)(CHARACTER *))Addr::CHARACTER::UpdateAffect)(this);
}

void CHARACTER::SetMC(CHARACTER::MONARCH_INDEX a0) {
	((void(*)(CHARACTER *, CHARACTER::MONARCH_INDEX))Addr::CHARACTER::SetMC)(this, a0);
}

void CHARACTER::ChainQuickslotItem(LPITEM a0, BYTE a1, BYTE a2) {
	((void(*)(CHARACTER *, LPITEM, BYTE, BYTE))Addr::CHARACTER::ChainQuickslotItem)(this, a0, a1, a2);
}

LPITEM CHARACTER::GetQuestItemPtr() const {
	return ((LPITEM(*)(const CHARACTER *))Addr::CHARACTER::GetQuestItemPtr)(this);
}

WORD CHARACTER::GetMobAttackRange() const {
	return ((WORD(*)(const CHARACTER *))Addr::CHARACTER::GetMobAttackRange)(this);
}

bool CHARACTER::DoRefineWithScroll(LPITEM a0) {
	return ((bool(*)(CHARACTER *, LPITEM))Addr::CHARACTER::DoRefineWithScroll)(this, a0);
}

bool CHARACTER::DropItem(BYTE a0, BYTE a1) {
	return ((bool(*)(CHARACTER *, BYTE, BYTE))Addr::CHARACTER::DropItem)(this, a0, a1);
}

void CHARACTER::SendGreetMessage() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SendGreetMessage)(this);
}

void CHARACTER::LoadAffect(DWORD a0, TPacketAffectElement * a1) {
	((void(*)(CHARACTER *, DWORD, TPacketAffectElement *))Addr::CHARACTER::LoadAffect)(this, a0, a1);
}

LPCHARACTER CHARACTER::FindCharacterInView(const char * a0, bool a1) {
	return ((LPCHARACTER(*)(CHARACTER *, const char *, bool))Addr::CHARACTER::FindCharacterInView)(this, a0, a1);
}

bool CHARACTER::CanFight() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::CanFight)(this);
}

/*void CHARACTER::~CHARACTER() {
	((void(*)(CHARACTER *))Addr::CHARACTER::__CHARACTER__16091)(this);
}*/

bool CHARACTER::IsAttackMob() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsAttackMob)(this);
}

void CHARACTER::RemoveGoodAffect() {
	((void(*)(CHARACTER *))Addr::CHARACTER::RemoveGoodAffect)(this);
}

bool CHARACTER::IsGodSpeed() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsGodSpeed)(this);
}

void CHARACTER::FlushDelayedSaveItem() {
	((void(*)(CHARACTER *))Addr::CHARACTER::FlushDelayedSaveItem)(this);
}

void CHARACTER::ResetStopTime() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ResetStopTime)(this);
}

LPCHARACTER CHARACTER::GetMarryPartner() const {
	return ((LPCHARACTER(*)(const CHARACTER *))Addr::CHARACTER::GetMarryPartner)(this);
}

void CHARACTER::SetRotationToXY(long a0, long a1) {
	((void(*)(CHARACTER *, long, long))Addr::CHARACTER::SetRotationToXY)(this, a0, a1);
}

int CHARACTER::GetSafeboxSize() const {
	return ((int(*)(const CHARACTER *))Addr::CHARACTER::GetSafeboxSize)(this);
}

bool CHARACTER::Goto(long a0, long a1) {
	return ((bool(*)(CHARACTER *, long, long))Addr::CHARACTER::Goto)(this, a0, a1);
}

CHARACTER::PartyJoinErrCode CHARACTER::IsPartyJoinableCondition(const LPCHARACTER a0,const LPCHARACTER a1) {
	return ((CHARACTER::PartyJoinErrCode(*)(const LPCHARACTER, const LPCHARACTER))Addr::CHARACTER::IsPartyJoinableCondition)(a0, a1);
}

void CHARACTER::SyncPacket() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SyncPacket)(this);
}

void CHARACTER::RewardGold(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::RewardGold)(this, a0);
}

DWORD CHARACTER::GetMobDamageMax() const {
	return ((DWORD(*)(const CHARACTER *))Addr::CHARACTER::GetMobDamageMax)(this);
}

void CHARACTER::IncreaseComboHackCount(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::IncreaseComboHackCount)(this, a0);
}

void CHARACTER::mining_take() {
	((void(*)(CHARACTER *))Addr::CHARACTER::mining_take)(this);
}

void CHARACTER::StartRecoveryEvent() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StartRecoveryEvent)(this);
}

void CHARACTER::LoadMall(int a0, TPlayerItem * a1) {
	((void(*)(CHARACTER *, int, TPlayerItem *))Addr::CHARACTER::LoadMall)(this, a0, a1);
}

bool CHARACTER::DelQuickslot(BYTE a0) {
	return ((bool(*)(CHARACTER *, BYTE))Addr::CHARACTER::DelQuickslot)(this, a0);
}

void CHARACTER::ClearSync() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ClearSync)(this);
}

BYTE CHARACTER::GetChatCounter() const {
	return ((BYTE(*)(const CHARACTER *))Addr::CHARACTER::GetChatCounter)(this);
}

LPCHARACTER CHARACTER::GetNearestVictim(LPCHARACTER a0) {
	return ((LPCHARACTER(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::GetNearestVictim)(this, a0);
}

void CHARACTER::SetRace(BYTE a0) {
	((void(*)(CHARACTER *, BYTE))Addr::CHARACTER::SetRace)(this, a0);
}

bool CHARACTER::IsAffectFlag(DWORD a0) const {
	return ((bool(*)(const CHARACTER *, DWORD))Addr::CHARACTER::IsAffectFlag)(this, a0);
}

int CHARACTER::CountSpecifyItem(DWORD a0) const {
	return ((int(*)(const CHARACTER *, DWORD))Addr::CHARACTER::CountSpecifyItem)(this, a0);
}

void CHARACTER::SetMarryPartner(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::SetMarryPartner)(this, a0);
}

bool CHARACTER::CanUseHorseSkill() {
	return ((bool(*)(CHARACTER *))Addr::CHARACTER::CanUseHorseSkill)(this);
}

bool CHARACTER::Follow(LPCHARACTER a0, float a1) {
	return ((bool(*)(CHARACTER *, LPCHARACTER, float))Addr::CHARACTER::Follow)(this, a0, a1);
}

void CHARACTER::AttractRanger() {
	((void(*)(CHARACTER *))Addr::CHARACTER::AttractRanger)(this);
}

bool CHARACTER::IsGuardNPC() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsGuardNPC)(this);
}

void CHARACTER::CowardEscape() {
	((void(*)(CHARACTER *))Addr::CHARACTER::CowardEscape)(this);
}

void CHARACTER::ClearQuestItemPtr() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ClearQuestItemPtr)(this);
}

bool CHARACTER::BuildUpdatePartyPacket(TPacketGCPartyUpdate & a0) {
	return ((bool(*)(CHARACTER *, TPacketGCPartyUpdate &))Addr::CHARACTER::BuildUpdatePartyPacket)(this, a0);
}

void CHARACTER::SetAggressive() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SetAggressive)(this);
}

void CHARACTER::SendHorseInfo() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SendHorseInfo)(this);
}

bool CHARACTER::Return() {
	return ((bool(*)(CHARACTER *))Addr::CHARACTER::Return)(this);
}

time_t CHARACTER::GetSkillNextReadTime(DWORD a0) const {
	return ((time_t(*)(const CHARACTER *, DWORD))Addr::CHARACTER::GetSkillNextReadTime)(this, a0);
}

int CHARACTER::GetChangeEmpireCount() const {
	return ((int(*)(const CHARACTER *))Addr::CHARACTER::GetChangeEmpireCount)(this);
}

int CHARACTER::ComputeSkillAtPosition(DWORD a0, const PIXEL_POSITION & a1, BYTE a2) {
	return ((int(*)(CHARACTER *, DWORD, const PIXEL_POSITION &, BYTE))Addr::CHARACTER::ComputeSkillAtPosition)(this, a0, a1, a2);
}

void CHARACTER::Stop() {
	((void(*)(CHARACTER *))Addr::CHARACTER::Stop)(this);
}

void CHARACTER::SetKillerMode(bool a0) {
	((void(*)(CHARACTER *, bool))Addr::CHARACTER::SetKillerMode)(this, a0);
}

int CHARACTER::GetPoint(BYTE a0) const {
	return ((int(*)(const CHARACTER *, BYTE))Addr::CHARACTER::GetPoint)(this, a0);
}

void CHARACTER::ResetChatCounter() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ResetChatCounter)(this);
}

void CHARACTER::BeginStateEmpty() {
	((void(*)(CHARACTER *))Addr::CHARACTER::BeginStateEmpty)(this);
}

bool CHARACTER::UnequipItem(LPITEM a0) {
	return ((bool(*)(CHARACTER *, LPITEM))Addr::CHARACTER::UnequipItem)(this, a0);
}

void CHARACTER::GiveRandomSkillBook() {
	((void(*)(CHARACTER *))Addr::CHARACTER::GiveRandomSkillBook)(this);
}

void CHARACTER::SetChangeEmpireCount() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SetChangeEmpireCount)(this);
}

int CHARACTER::GetMarriageBonus(DWORD a0, bool a1) {
	return ((int(*)(CHARACTER *, DWORD, bool))Addr::CHARACTER::GetMarriageBonus)(this, a0, a1);
}

bool CHARACTER::LearnGrandMasterSkill(DWORD a0) {
	return ((bool(*)(CHARACTER *, DWORD))Addr::CHARACTER::LearnGrandMasterSkill)(this, a0);
}

int CHARACTER::GetRealPoint(BYTE a0) const {
	return ((int(*)(const CHARACTER *, BYTE))Addr::CHARACTER::GetRealPoint)(this, a0);
}

void CHARACTER::ClearAffect(bool a0) {
	((void(*)(CHARACTER *, bool))Addr::CHARACTER::ClearAffect)(this, a0);
}

void CHARACTER::SkillLevelUp(DWORD a0, BYTE a1) {
	((void(*)(CHARACTER *, DWORD, BYTE))Addr::CHARACTER::SkillLevelUp)(this, a0, a1);
}

bool CHARACTER::UseItemEx(LPITEM a0, int a1) {
	return ((bool(*)(CHARACTER *, LPITEM, int))Addr::CHARACTER::UseItemEx)(this, a0, a1);
}

void CHARACTER::RefreshAffect() {
	((void(*)(CHARACTER *))Addr::CHARACTER::RefreshAffect)(this);
}

bool CHARACTER::ResetOneSkill(DWORD a0) {
	return ((bool(*)(CHARACTER *, DWORD))Addr::CHARACTER::ResetOneSkill)(this, a0);
}

void CHARACTER::DetermineDropMetinStone() {
	((void(*)(CHARACTER *))Addr::CHARACTER::DetermineDropMetinStone)(this);
}

void CHARACTER::PartyInviteAccept(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::PartyInviteAccept)(this, a0);
}

int CHARACTER::GetEmptyInventory(BYTE a0) const {
	return ((int(*)(const CHARACTER *, BYTE))Addr::CHARACTER::GetEmptyInventory)(this, a0);
}

LPITEM CHARACTER::GetItem(BYTE a0) const {
	return ((LPITEM(*)(const CHARACTER *, BYTE))Addr::CHARACTER::GetItem)(this, a0);
}

int CHARACTER::GetChainLightningMaxCount() const {
	return ((int(*)(const CHARACTER *))Addr::CHARACTER::GetChainLightningMaxCount)(this);
}

void CHARACTER::ReqSafeboxLoad(const char * a0) {
	((void(*)(CHARACTER *, const char *))Addr::CHARACTER::ReqSafeboxLoad)(this, a0);
}

void CHARACTER::SetGodSpeed(bool a0) {
	((void(*)(CHARACTER *, bool))Addr::CHARACTER::SetGodSpeed)(this, a0);
}

int CHARACTER::GetPolymorphPower() const {
	return ((int(*)(const CHARACTER *))Addr::CHARACTER::GetPolymorphPower)(this);
}

void CHARACTER::UpdateAggrPoint(LPCHARACTER a0, EDamageType a1, int a2) {
	((void(*)(CHARACTER *, LPCHARACTER, EDamageType, int))Addr::CHARACTER::UpdateAggrPoint)(this, a0, a1, a2);
}

void CHARACTER::SetAffectedEunhyung() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SetAffectedEunhyung)(this);
}

void CHARACTER::EndStateEmpty() {
	((void(*)(CHARACTER *))Addr::CHARACTER::EndStateEmpty)(this);
}

void CHARACTER::SetEmpire(BYTE a0) {
	((void(*)(CHARACTER *, BYTE))Addr::CHARACTER::SetEmpire)(this, a0);
}

bool CHARACTER::IsSiegeNPC() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsSiegeNPC)(this);
}

LPITEM CHARACTER::GetWear(BYTE a0) const {
	return ((LPITEM(*)(const CHARACTER *, BYTE))Addr::CHARACTER::GetWear)(this, a0);
}

void CHARACTER::HorseDie() {
	((void(*)(CHARACTER *))Addr::CHARACTER::HorseDie)(this);
}

void CHARACTER::DenyToParty(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::DenyToParty)(this, a0);
}

void CHARACTER::CheckMaximumPoints() {
	((void(*)(CHARACTER *))Addr::CHARACTER::CheckMaximumPoints)(this);
}

bool CHARACTER::DropGold(int a0) {
	return ((bool(*)(CHARACTER *, int))Addr::CHARACTER::DropGold)(this, a0);
}

void CHARACTER::Initialize() {
	((void(*)(CHARACTER *))Addr::CHARACTER::Initialize)(this);
}

const TMobSkillInfo * CHARACTER::GetMobSkill(unsigned int a0) const {
	return ((const TMobSkillInfo *(*)(const CHARACTER *, unsigned int))Addr::CHARACTER::GetMobSkill)(this, a0);
}

void CHARACTER::SetComboSequence(BYTE a0) {
	((void(*)(CHARACTER *, BYTE))Addr::CHARACTER::SetComboSequence)(this, a0);
}

void CHARACTER::SetGMLevel() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SetGMLevel)(this);
}

bool CHARACTER::IsStaminaHalfConsume() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsStaminaHalfConsume)(this);
}

void CHARACTER::SyncQuickslot(BYTE a0, BYTE a1, BYTE a2) {
	((void(*)(CHARACTER *, BYTE, BYTE, BYTE))Addr::CHARACTER::SyncQuickslot)(this, a0, a1, a2);
}

bool CHARACTER::IsNoAttackShinsu() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsNoAttackShinsu)(this);
}

bool CHARACTER::CanWarp() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::CanWarp)(this);
}

bool CHARACTER::ItemProcess_Polymorph(LPITEM a0) {
	return ((bool(*)(CHARACTER *, LPITEM))Addr::CHARACTER::ItemProcess_Polymorph)(this, a0);
}

bool CHARACTER::EquipItem(LPITEM a0) {
	return ((bool(*)(CHARACTER *, LPITEM))Addr::CHARACTER::EquipItem)(this, a0);
}

int CHARACTER::GetLeadershipSkillLevel() const {
	return ((int(*)(const CHARACTER *))Addr::CHARACTER::GetLeadershipSkillLevel)(this);
}

bool CHARACTER::Show(long a0, long a1, long a2, long a3, bool a4) {
	return ((bool(*)(CHARACTER *, long, long, long, long, bool))Addr::CHARACTER::Show)(this, a0, a1, a2, a3, a4);
}

bool CHARACTER::IsNoAttackJinno() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsNoAttackJinno)(this);
}

void CHARACTER::UpdateKillerMode() {
	((void(*)(CHARACTER *))Addr::CHARACTER::UpdateKillerMode)(this);
}

void CHARACTER::ClearSkill() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ClearSkill)(this);
}

bool CHARACTER::RemoveAffect(CAffect * a0) {
	return ((bool(*)(CHARACTER *, CAffect *))Addr::CHARACTER::RemoveAffect)(this, a0);
}

void CHARACTER::StartMuyeongEvent() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StartMuyeongEvent)(this);
}

void CHARACTER::StateHorse() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StateHorse)(this);
}

void CHARACTER::SetSkillLevel(DWORD a0, BYTE a1) {
	((void(*)(CHARACTER *, DWORD, BYTE))Addr::CHARACTER::SetSkillLevel)(this, a0, a1);
}

DWORD CHARACTER::GetMotionMode() const {
	return ((DWORD(*)(const CHARACTER *))Addr::CHARACTER::GetMotionMode)(this);
}

void CHARACTER::ClearHorseInfo() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ClearHorseInfo)(this);
}

void CHARACTER::Destroy() {
	((void(*)(CHARACTER *))Addr::CHARACTER::Destroy)(this);
}

DWORD CHARACTER::GetPolymorphItemVnum() const {
	return ((DWORD(*)(const CHARACTER *))Addr::CHARACTER::GetPolymorphItemVnum)(this);
}

void CHARACTER::StartStaminaConsume() {
	((void(*)(CHARACTER *))Addr::CHARACTER::StartStaminaConsume)(this);
}

bool CHARACTER::HasMobSkill() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::HasMobSkill)(this);
}

void CHARACTER::SetPolymorph(DWORD a0, bool a1) {
	((void(*)(CHARACTER *, DWORD, bool))Addr::CHARACTER::SetPolymorph)(this, a0, a1);
}

void CHARACTER::ComputeSkillPoints() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ComputeSkillPoints)(this);
}

bool CHARACTER::IsDeathBlower() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsDeathBlower)(this);
}

void CHARACTER::SkillLevelPacket() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SkillLevelPacket)(this);
}

void CHARACTER::PartyJoin(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::PartyJoin)(this, a0);
}

bool CHARACTER::PickupItem(DWORD a0) {
	return ((bool(*)(CHARACTER *, DWORD))Addr::CHARACTER::PickupItem)(this, a0);
}

bool CHARACTER::StartRiding() {
	return ((bool(*)(CHARACTER *))Addr::CHARACTER::StartRiding)(this);
}

void CHARACTER::ClearItem() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ClearItem)(this);
}

size_t CHARACTER::CountMobSkill() const {
	return ((size_t(*)(const CHARACTER *))Addr::CHARACTER::CountMobSkill)(this);
}

CSafebox * CHARACTER::GetSafebox() const {
	return ((CSafebox *(*)(const CHARACTER *))Addr::CHARACTER::GetSafebox)(this);
}

void CHARACTER::AutoRecoveryItemProcess(const EAffectTypes a0) {
	((void(*)(CHARACTER *, const EAffectTypes))Addr::CHARACTER::AutoRecoveryItemProcess)(this, a0);
}

void CHARACTER::SetQuestNPCID(DWORD a0) {
	((void(*)(CHARACTER *, DWORD))Addr::CHARACTER::SetQuestNPCID)(this, a0);
}

DWORD CHARACTER::GetSkipComboAttackByTime() const {
	return ((DWORD(*)(const CHARACTER *))Addr::CHARACTER::GetSkipComboAttackByTime)(this);
}

void CHARACTER::SetPoint(BYTE a0, int a1) {
	((void(*)(CHARACTER *, BYTE, int))Addr::CHARACTER::SetPoint)(this, a0, a1);
}

void CHARACTER::ClearStone() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ClearStone)(this);
}

bool CHARACTER::IsUsableSkillMotion(DWORD a0) const {
	return ((bool(*)(const CHARACTER *, DWORD))Addr::CHARACTER::IsUsableSkillMotion)(this, a0);
}

bool CHARACTER::IsSummonMonster() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsSummonMonster)(this);
}

bool CHARACTER::AddAffect(DWORD a0, BYTE a1, long a2, DWORD a3, long a4, long a5, bool a6, bool a7) {
	return ((bool(*)(CHARACTER *, DWORD, BYTE, long, DWORD, long, long, bool, bool))Addr::CHARACTER::AddAffect)(this, a0, a1, a2, a3, a4, a5, a6, a7);
}

void CHARACTER::PartyInviteDeny(DWORD a0) {
	((void(*)(CHARACTER *, DWORD))Addr::CHARACTER::PartyInviteDeny)(this, a0);
}

void CHARACTER::ShowAlignment(bool a0) {
	((void(*)(CHARACTER *, bool))Addr::CHARACTER::ShowAlignment)(this, a0);
}

DWORD CHARACTER::GetMobDamageMin() const {
	return ((DWORD(*)(const CHARACTER *))Addr::CHARACTER::GetMobDamageMin)(this);
}

bool CHARACTER::GiveItem(LPCHARACTER a0, BYTE a1) {
	return ((bool(*)(CHARACTER *, LPCHARACTER, BYTE))Addr::CHARACTER::GiveItem)(this, a0, a1);
}

void CHARACTER::SetNoAttackChunjo() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SetNoAttackChunjo)(this);
}

void CHARACTER::SetHorseLevel(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::SetHorseLevel)(this, a0);
}

void CHARACTER::ComputeBattlePoints() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ComputeBattlePoints)(this);
}

void CHARACTER::EncodeInsertPacket(LPENTITY a0) {
	((void(*)(CHARACTER *, LPENTITY))Addr::CHARACTER::EncodeInsertPacket)(this, a0);
}

void CHARACTER::Standup() {
	((void(*)(CHARACTER *))Addr::CHARACTER::Standup)(this);
}

int CHARACTER::GetSkillLevel(DWORD a0) const {
	return ((int(*)(const CHARACTER *, DWORD))Addr::CHARACTER::GetSkillLevel)(this, a0);
}

void CHARACTER::SendMyShopPriceListCmd(DWORD a0, DWORD a1) {
	((void(*)(CHARACTER *, DWORD, DWORD))Addr::CHARACTER::SendMyShopPriceListCmd)(this, a0, a1);
}

void CHARACTER::UpdateDepositPulse() {
	((void(*)(CHARACTER *))Addr::CHARACTER::UpdateDepositPulse)(this);
}

void CHARACTER::ResetPoint(int a0) {
	((void(*)(CHARACTER *, int))Addr::CHARACTER::ResetPoint)(this, a0);
}

int CHARACTER::GetHPPct() const {
	return ((int(*)(const CHARACTER *))Addr::CHARACTER::GetHPPct)(this);
}

void CHARACTER::SetWear(BYTE a0, LPITEM a1) {
	((void(*)(CHARACTER *, BYTE, LPITEM))Addr::CHARACTER::SetWear)(this, a0, a1);
}

void CHARACTER::SetRotation(float a0) {
	((void(*)(CHARACTER *, float))Addr::CHARACTER::SetRotation)(this, a0);
}

void CHARACTER::RemovePoison() {
	((void(*)(CHARACTER *))Addr::CHARACTER::RemovePoison)(this);
}

bool CHARACTER::IsSyncOwner(LPCHARACTER a0) const {
	return ((bool(*)(const CHARACTER *, LPCHARACTER))Addr::CHARACTER::IsSyncOwner)(this, a0);
}

void CHARACTER::SetTarget(LPCHARACTER a0) {
	((void(*)(CHARACTER *, LPCHARACTER))Addr::CHARACTER::SetTarget)(this, a0);
}

void CHARACTER::ConfirmWithMsg(const char * a0, int a1, DWORD a2) {
	((void(*)(CHARACTER *, const char *, int, DWORD))Addr::CHARACTER::ConfirmWithMsg)(this, a0, a1, a2);
}

void CHARACTER::SetBlockMode(BYTE a0) {
	((void(*)(CHARACTER *, BYTE))Addr::CHARACTER::SetBlockMode)(this, a0);
}

void CHARACTER::Reward(bool a0) {
	((void(*)(CHARACTER *, bool))Addr::CHARACTER::Reward)(this, a0);
}

int CHARACTER::GetAllowedGold() const {
	return ((int(*)(const CHARACTER *))Addr::CHARACTER::GetAllowedGold)(this);
}

bool CHARACTER::CanHandleItem(bool a0, bool a1) {
	return ((bool(*)(CHARACTER *, bool, bool))Addr::CHARACTER::CanHandleItem)(this, a0, a1);
}

void CHARACTER::mining_cancel() {
	((void(*)(CHARACTER *))Addr::CHARACTER::mining_cancel)(this);
}

bool CHARACTER::Attack(LPCHARACTER a0, BYTE a1) {
	return ((bool(*)(CHARACTER *, LPCHARACTER, BYTE))Addr::CHARACTER::Attack)(this, a0, a1);
}

void CHARACTER::BuffOnAttr_ValueChange(BYTE a0, BYTE a1, BYTE a2) {
	((void(*)(CHARACTER *, BYTE, BYTE, BYTE))Addr::CHARACTER::BuffOnAttr_ValueChange)(this, a0, a1, a2);
}

int CHARACTER::GetSkillPower(DWORD a0, BYTE a1) const {
	return ((int(*)(const CHARACTER *, DWORD, BYTE))Addr::CHARACTER::GetSkillPower)(this, a0, a1);
}

bool CHARACTER::ReviveHorse() {
	return ((bool(*)(CHARACTER *))Addr::CHARACTER::ReviveHorse)(this);
}

void CHARACTER::SetBlockModeForce(BYTE a0) {
	((void(*)(CHARACTER *, BYTE))Addr::CHARACTER::SetBlockModeForce)(this, a0);
}

void CHARACTER::InitMC() {
	((void(*)(CHARACTER *))Addr::CHARACTER::InitMC)(this);
}

void CHARACTER::ComputeAffect(CAffect * a0, bool a1) {
	((void(*)(CHARACTER *, CAffect *, bool))Addr::CHARACTER::ComputeAffect)(this, a0, a1);
}

void CHARACTER::SetProto(const CMob * a0) {
	((void(*)(CHARACTER *, const CMob *))Addr::CHARACTER::SetProto)(this, a0);
}

void CHARACTER::SetParty(LPPARTY a0) {
	((void(*)(CHARACTER *, LPPARTY))Addr::CHARACTER::SetParty)(this, a0);
}

WORD CHARACTER::GetOriginalPart(BYTE a0) const {
	return ((WORD(*)(const CHARACTER *, BYTE))Addr::CHARACTER::GetOriginalPart)(this, a0);
}

bool CHARACTER::IsMonarch() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsMonarch)(this);
}

void CHARACTER::__OpenPrivateShop() {
	((void(*)(CHARACTER *))Addr::CHARACTER::__OpenPrivateShop)(this);
}

void CHARACTER::DistributeSP(LPCHARACTER a0, int a1) {
	((void(*)(CHARACTER *, LPCHARACTER, int))Addr::CHARACTER::DistributeSP)(this, a0, a1);
}

void CHARACTER::RestartAtSamePos() {
	((void(*)(CHARACTER *))Addr::CHARACTER::RestartAtSamePos)(this);
}

void CHARACTER::SetNoAttackJinno() {
	((void(*)(CHARACTER *))Addr::CHARACTER::SetNoAttackJinno)(this);
}

void CHARACTER::MainCharacterPacket() {
	((void(*)(CHARACTER *))Addr::CHARACTER::MainCharacterPacket)(this);
}

bool CHARACTER::IsKillerMode() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::IsKillerMode)(this);
}

void CHARACTER::SetPlayerProto(const TPlayerTable * a0) {
	((void(*)(CHARACTER *, const TPlayerTable *))Addr::CHARACTER::SetPlayerProto)(this, a0);
}

bool CHARACTER::CanMove() const {
	return ((bool(*)(const CHARACTER *))Addr::CHARACTER::CanMove)(this);
}

/*void CHARACTER::CHARACTER() {
	((void(*)(CHARACTER *))Addr::CHARACTER::CHARACTER__26608)(this);
}*/

void CHARACTER::ToggleMonsterLog() {
	((void(*)(CHARACTER *))Addr::CHARACTER::ToggleMonsterLog)(this);
}
CGuild* CHARACTER::GetGuild() const{
    return m_pGuild;
}

}
