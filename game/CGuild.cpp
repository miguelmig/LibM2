#include "CGuild.hpp"
#include "../addr.hpp"
namespace libm2{
void CGuild::RefreshCommentForce(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::RefreshCommentForce)(this, a0);
}

void CGuild::SendEnemyGuild(LPCHARACTER a0) {
	((void(*)(CGuild *, LPCHARACTER))Addr::CGuild::SendEnemyGuild)(this, a0);
}

void CGuild::ChangeGradeAuth(BYTE a0, BYTE a1) {
	((void(*)(CGuild *, BYTE, BYTE))Addr::CGuild::ChangeGradeAuth)(this, a0, a1);
}

LPCHARACTER CGuild::GetMasterCharacter() {
	return ((LPCHARACTER(*)(CGuild *))Addr::CGuild::GetMasterCharacter)(this);
}

void CGuild::SendLoginPacket(LPCHARACTER a0, LPCHARACTER a1) {
	((void(*)(CGuild *, LPCHARACTER, LPCHARACTER))Addr::CGuild::SendLoginPacket__7764)(this, a0, a1);
}

void CGuild::NotifyGuildMaster(const char * a0) {
	((void(*)(CGuild *, const char *))Addr::CGuild::NotifyGuildMaster)(this, a0);
}

void CGuild::P2PChat(const char * a0) {
	((void(*)(CGuild *, const char *))Addr::CGuild::P2PChat)(this, a0);
}

void CGuild::SendOnlineRemoveOnePacket(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::SendOnlineRemoveOnePacket)(this, a0);
}

bool CGuild::DeclareWar(DWORD a0, BYTE a1, BYTE a2) {
	return ((bool(*)(CGuild *, DWORD, BYTE, BYTE))Addr::CGuild::DeclareWar)(this, a0, a1, a2);
}

void CGuild::ChangeMemberGrade(DWORD a0, BYTE a1) {
	((void(*)(CGuild *, DWORD, BYTE))Addr::CGuild::ChangeMemberGrade)(this, a0, a1);
}

DWORD CGuild::GetMemberPID(const std::string & a0) {
	return ((DWORD(*)(CGuild *, const std::string &))Addr::CGuild::GetMemberPID)(this, a0);
}

void CGuild::LoginMember(LPCHARACTER a0) {
	((void(*)(CGuild *, LPCHARACTER))Addr::CGuild::LoginMember)(this, a0);
}

void CGuild::Initialize() {
	((void(*)(CGuild *))Addr::CGuild::Initialize)(this);
}

void CGuild::DeleteComment(LPCHARACTER a0, DWORD a1) {
	((void(*)(CGuild *, LPCHARACTER, DWORD))Addr::CGuild::DeleteComment)(this, a0, a1);
}

void CGuild::SkillUsableChange(DWORD a0, bool a1) {
	((void(*)(CGuild *, DWORD, bool))Addr::CGuild::SkillUsableChange)(this, a0, a1);
}

void CGuild::__P2PUpdateGrade(SQLMsg * a0) {
	((void(*)(CGuild *, SQLMsg *))Addr::CGuild::__P2PUpdateGrade)(this, a0);
}

void CGuild::P2PLogoutMember(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::P2PLogoutMember)(this, a0);
}

void CGuild::Disband() {
	((void(*)(CGuild *))Addr::CGuild::Disband)(this);
}

void CGuild::GuildWarPacket(DWORD a0, BYTE a1, BYTE a2) {
	((void(*)(CGuild *, DWORD, BYTE, BYTE))Addr::CGuild::GuildWarPacket)(this, a0, a1, a2);
}

void CGuild::LevelChange(DWORD a0, BYTE a1) {
	((void(*)(CGuild *, DWORD, BYTE))Addr::CGuild::LevelChange)(this, a0, a1);
}

CGuild::~CGuild() {
	((void(*)(CGuild *))Addr::CGuild::__CGuild)(this);
}

void CGuild::RequestDisband(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::RequestDisband)(this, a0);
}

bool CGuild::ChangeMemberGeneral(DWORD a0, BYTE a1) {
	return ((bool(*)(CGuild *, DWORD, BYTE))Addr::CGuild::ChangeMemberGeneral)(this, a0, a1);
}

void CGuild::SendListPacket(LPCHARACTER a0) {
	((void(*)(CGuild *, LPCHARACTER))Addr::CGuild::SendListPacket)(this, a0);
}

bool CGuild::UnderWar(DWORD a0) {
	return ((bool(*)(CGuild *, DWORD))Addr::CGuild::UnderWar)(this, a0);
}

DWORD CGuild::GetGuildWarMapIndex(DWORD a0) {
	return ((DWORD(*)(CGuild *, DWORD))Addr::CGuild::GetGuildWarMapIndex)(this, a0);
}

bool CGuild::CheckStartWar(DWORD a0) {
	return ((bool(*)(CGuild *, DWORD))Addr::CGuild::CheckStartWar)(this, a0);
}

bool CGuild::CanStartWar(BYTE a0) {
	return ((bool(*)(CGuild *, BYTE))Addr::CGuild::CanStartWar)(this, a0);
}

void CGuild::LoadGuildGradeData(SQLMsg * a0) {
	((void(*)(CGuild *, SQLMsg *))Addr::CGuild::LoadGuildGradeData)(this, a0);
}

void CGuild::LogoutMember(LPCHARACTER a0) {
	((void(*)(CGuild *, LPCHARACTER))Addr::CGuild::LogoutMember)(this, a0);
}

void CGuild::AddMember(TPacketDGGuildMember * a0) {
	((void(*)(CGuild *, TPacketDGGuildMember *))Addr::CGuild::AddMember)(this, a0);
}

void CGuild::GuildPointChange(BYTE a0, int a1, bool a2) {
	((void(*)(CGuild *, BYTE, int, bool))Addr::CGuild::GuildPointChange)(this, a0, a1, a2);
}

void CGuild::SendDBSkillUpdate(int a0) {
	((void(*)(CGuild *, int))Addr::CGuild::SendDBSkillUpdate)(this, a0);
}

void CGuild::SendLogoutPacket(LPCHARACTER a0, DWORD a1) {
	((void(*)(CGuild *, LPCHARACTER, DWORD))Addr::CGuild::SendLogoutPacket)(this, a0, a1);
}

void CGuild::SendLogoutPacket(LPCHARACTER a0, LPCHARACTER a1) {
	((void(*)(CGuild *, LPCHARACTER, LPCHARACTER))Addr::CGuild::SendLogoutPacket__13354)(this, a0, a1);
}

bool CGuild::RemoveMember(DWORD a0) {
	return ((bool(*)(CGuild *, DWORD))Addr::CGuild::RemoveMember)(this, a0);
}

bool CGuild::RequestRemoveMember(DWORD a0) {
	return ((bool(*)(CGuild *, DWORD))Addr::CGuild::RequestRemoveMember)(this, a0);
}

void CGuild::P2PLoginMember(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::P2PLoginMember)(this, a0);
}

void CGuild::SendGuildDataUpdateToAllMember(SQLMsg * a0) {
	((void(*)(CGuild *, SQLMsg *))Addr::CGuild::SendGuildDataUpdateToAllMember)(this, a0);
}

bool CGuild::OfferExp(LPCHARACTER a0, int a1) {
	return ((bool(*)(CGuild *, LPCHARACTER, int))Addr::CGuild::OfferExp)(this, a0, a1);
}

void CGuild::ReserveWar(DWORD a0, BYTE a1) {
	((void(*)(CGuild *, DWORD, BYTE))Addr::CGuild::ReserveWar)(this, a0, a1);
}

void CGuild::RequestAddMember(LPCHARACTER a0, int a1) {
	((void(*)(CGuild *, LPCHARACTER, int))Addr::CGuild::RequestAddMember)(this, a0, a1);
}

void CGuild::RequestDeclareWar(DWORD a0, BYTE a1) {
	((void(*)(CGuild *, DWORD, BYTE))Addr::CGuild::RequestDeclareWar)(this, a0, a1);
}

int CGuild::GetMaxMemberCount() {
	return ((int(*)(CGuild *))Addr::CGuild::GetMaxMemberCount)(this);
}

void CGuild::BroadcastMemberCountBonus() {
	((void(*)(CGuild *))Addr::CGuild::BroadcastMemberCountBonus)(this);
}

void CGuild::GuildWarEntryAccept(DWORD a0, LPCHARACTER a1) {
	((void(*)(CGuild *, DWORD, LPCHARACTER))Addr::CGuild::GuildWarEntryAccept)(this, a0, a1);
}

void CGuild::Packet(const void * a0, int a1) {
	((void(*)(CGuild *, const void *, int))Addr::CGuild::Packet)(this, a0, a1);
}

void CGuild::Chat(const char * a0) {
	((void(*)(CGuild *, const char *))Addr::CGuild::Chat)(this, a0);
}

CGuild::GuildJoinErrCode CGuild::VerifyGuildJoinableCondition(const LPCHARACTER a0) {
	return ((CGuild::GuildJoinErrCode(*)(CGuild *, const LPCHARACTER))Addr::CGuild::VerifyGuildJoinableCondition)(this, a0);
}

void CGuild::EndWar(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::EndWar)(this, a0);
}

void CGuild::InviteAccept(LPCHARACTER a0) {
	((void(*)(CGuild *, LPCHARACTER))Addr::CGuild::InviteAccept)(this, a0);
}

void CGuild::SendSkillInfoPacket(LPCHARACTER a0) const {
	((void(*)(const CGuild *, LPCHARACTER))Addr::CGuild::SendSkillInfoPacket)(this, a0);
}

void CGuild::ChangeMemberData(DWORD a0, DWORD a1, BYTE a2, BYTE a3) {
	((void(*)(CGuild *, DWORD, DWORD, BYTE, BYTE))Addr::CGuild::ChangeMemberData)(this, a0, a1, a2, a3);
}

DWORD CGuild::GetWarStartTime(DWORD a0) {
	return ((DWORD(*)(CGuild *, DWORD))Addr::CGuild::GetWarStartTime)(this, a0);
}

void CGuild::SetWarScoreAgainstTo(DWORD a0, int a1) {
	((void(*)(CGuild *, DWORD, int))Addr::CGuild::SetWarScoreAgainstTo)(this, a0, a1);
}

void CGuild::InviteDeny(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::InviteDeny)(this, a0);
}

void CGuild::ChangeGradeName(BYTE a0, const char * a1) {
	((void(*)(CGuild *, BYTE, const char *))Addr::CGuild::ChangeGradeName)(this, a0, a1);
}

int CGuild::GetSkillLevel(DWORD a0) {
	return ((int(*)(CGuild *, DWORD))Addr::CGuild::GetSkillLevel)(this, a0);
}

void CGuild::RequestWithdrawMoney(LPCHARACTER a0, int a1) {
	((void(*)(CGuild *, LPCHARACTER, int))Addr::CGuild::RequestWithdrawMoney)(this, a0, a1);
}

void CGuild::SkillRecharge() {
	((void(*)(CGuild *))Addr::CGuild::SkillRecharge)(this);
}

void CGuild::LoadGuildMemberData(SQLMsg * a0) {
	((void(*)(CGuild *, SQLMsg *))Addr::CGuild::LoadGuildMemberData)(this, a0);
}

DWORD CGuild::UnderAnyWar(BYTE a0) {
	return ((DWORD(*)(CGuild *, BYTE))Addr::CGuild::UnderAnyWar)(this, a0);
}

void CGuild::StartWar(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::StartWar)(this, a0);
}

void CGuild::GuildWarEntryAsk(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::GuildWarEntryAsk)(this, a0);
}

void CGuild::Load(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::Load)(this, a0);
}

void CGuild::UpdateSkill(BYTE a0, BYTE * a1) {
	((void(*)(CGuild *, BYTE, BYTE *))Addr::CGuild::UpdateSkill)(this, a0, a1);
}

void CGuild::SendListOneToAll(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::SendListOneToAll)(this, a0);
}

void CGuild::SetMemberCountBonus(int a0) {
	((void(*)(CGuild *, int))Addr::CGuild::SetMemberCountBonus)(this, a0);
}

void CGuild::SendLoginPacket(LPCHARACTER a0, DWORD a1) {
	((void(*)(CGuild *, LPCHARACTER, DWORD))Addr::CGuild::SendLoginPacket)(this, a0, a1);
}

int CGuild::GetGuildWarType(DWORD a0) {
	return ((int(*)(CGuild *, DWORD))Addr::CGuild::GetGuildWarType)(this, a0);
}

void CGuild::SetGuildWarMapIndex(DWORD a0, long a1) {
	((void(*)(CGuild *, DWORD, long))Addr::CGuild::SetGuildWarMapIndex)(this, a0, a1);
}

void CGuild::RecvMoneyChange(int a0) {
	((void(*)(CGuild *, int))Addr::CGuild::RecvMoneyChange)(this, a0);
}

int CGuild::GetGuildWarState(DWORD a0) {
	return ((int(*)(CGuild *, DWORD))Addr::CGuild::GetGuildWarState)(this, a0);
}

void CGuild::SendGuildInfoPacket(LPCHARACTER a0) {
	((void(*)(CGuild *, LPCHARACTER))Addr::CGuild::SendGuildInfoPacket)(this, a0);
}

void CGuild::SaveLevel() {
	((void(*)(CGuild *))Addr::CGuild::SaveLevel)(this);
}

bool CGuild::ChangeMasterTo(DWORD a0) {
	return ((bool(*)(CGuild *, DWORD))Addr::CGuild::ChangeMasterTo)(this, a0);
}

TGuildMember * CGuild::GetMember(DWORD a0) {
	return ((TGuildMember *(*)(CGuild *, DWORD))Addr::CGuild::GetMember)(this, a0);
}

bool CGuild::WaitStartWar(DWORD a0) {
	return ((bool(*)(CGuild *, DWORD))Addr::CGuild::WaitStartWar)(this, a0);
}

bool CGuild::HasLand() {
	return ((bool(*)(CGuild *))Addr::CGuild::HasLand)(this);
}

int CGuild::GetTotalLevel() const {
	return ((int(*)(const CGuild *))Addr::CGuild::GetTotalLevel)(this);
}

void CGuild::UseSkill(DWORD a0, LPCHARACTER a1, DWORD a2) {
	((void(*)(CGuild *, DWORD, LPCHARACTER, DWORD))Addr::CGuild::UseSkill)(this, a0, a1, a2);
}

void CGuild::RefuseWar(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::RefuseWar)(this, a0);
}

void CGuild::RequestDepositMoney(LPCHARACTER a0, int a1) {
	((void(*)(CGuild *, LPCHARACTER, int))Addr::CGuild::RequestDepositMoney)(this, a0, a1);
}

void CGuild::P2PChangeGrade(BYTE a0) {
	((void(*)(CGuild *, BYTE))Addr::CGuild::P2PChangeGrade)(this, a0);
}

void CGuild::SendAllGradePacket(LPCHARACTER a0) {
	((void(*)(CGuild *, LPCHARACTER))Addr::CGuild::SendAllGradePacket)(this, a0);
}

void CGuild::SetLadderPoint(int a0) {
	((void(*)(CGuild *, int))Addr::CGuild::SetLadderPoint)(this, a0);
}

void CGuild::RecvWithdrawMoneyGive(int a0) {
	((void(*)(CGuild *, int))Addr::CGuild::RecvWithdrawMoneyGive)(this, a0);
}

void CGuild::SendListOneToAll(LPCHARACTER a0) {
	((void(*)(CGuild *, LPCHARACTER))Addr::CGuild::SendListOneToAll__1735)(this, a0);
}

void CGuild::SaveSkill() {
	((void(*)(CGuild *))Addr::CGuild::SaveSkill)(this);
}

bool CGuild::ChargeSP(LPCHARACTER a0, int a1) {
	return ((bool(*)(CGuild *, LPCHARACTER, int))Addr::CGuild::ChargeSP)(this, a0, a1);
}

void CGuild::AddComment(LPCHARACTER a0, const std::string & a1) {
	((void(*)(CGuild *, LPCHARACTER, const std::string &))Addr::CGuild::AddComment)(this, a0, a1);
}

int CGuild::GetWarScoreAgainstTo(DWORD a0) {
	return ((int(*)(CGuild *, DWORD))Addr::CGuild::GetWarScoreAgainstTo)(this, a0);
}

void CGuild::SkillLevelUp(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::SkillLevelUp)(this, a0);
}

void CGuild::Invite(LPCHARACTER a0, LPCHARACTER a1) {
	((void(*)(CGuild *, LPCHARACTER, LPCHARACTER))Addr::CGuild::Invite)(this, a0, a1);
}

void CGuild::ComputeGuildPoints() {
	((void(*)(CGuild *))Addr::CGuild::ComputeGuildPoints)(this);
}

void CGuild::ChangeLadderPoint(int a0) {
	((void(*)(CGuild *, int))Addr::CGuild::ChangeLadderPoint)(this, a0);
}

void CGuild::RefreshComment(LPCHARACTER a0) {
	((void(*)(CGuild *, LPCHARACTER))Addr::CGuild::RefreshComment)(this, a0);
}

void CGuild::RequestRefuseWar(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::RequestRefuseWar)(this, a0);
}

CGuild::CGuild(TGuildCreateParameter & a0) {
	((void(*)(CGuild *, TGuildCreateParameter &))Addr::CGuild::CGuild)(this, a0);
}

void CGuild::SaveMember(DWORD a0) {
	((void(*)(CGuild *, DWORD))Addr::CGuild::SaveMember)(this, a0);
}

void CGuild::LoadGuildData(SQLMsg * a0) {
	((void(*)(CGuild *, SQLMsg *))Addr::CGuild::LoadGuildData)(this, a0);
}
DWORD CGuild::GetMasterPID() const{
    return m_data.master_pid;
}
const char* CGuild::GetName() const{
    return this->m_data.name;
}
DWORD CGuild::GetID() const{
    return this->m_data.guild_id;
}
}
