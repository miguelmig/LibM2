#include "PC.hpp"
namespace libm2{
namespace quest{
void PC::SetCurrentQuestCounterValue(int a0) {
	((void(*)(PC *, int))Addr::quest::PC::SetCurrentQuestCounterValue)(this, a0);
}

void PC::SendFlagList(LPCHARACTER a0) {
	((void(*)(PC *, LPCHARACTER))Addr::quest::PC::SendFlagList)(this, a0);
}

void PC::RemoveTimer(const std::string & a0) {
	((void(*)(PC *, const std::string &))Addr::quest::PC::RemoveTimer)(this, a0);
}

void PC::SetCurrentQuestClockValue(int a0) {
	((void(*)(PC *, int))Addr::quest::PC::SetCurrentQuestClockValue)(this, a0);
}

void PC::CancelRunning() {
	((void(*)(PC *))Addr::quest::PC::CancelRunning)(this);
}

void PC::AddQuestStateChange(const std::string & a0, int a1, int a2) {
	((void(*)(PC *, const std::string &, int, int))Addr::quest::PC::AddQuestStateChange)(this, a0, a1, a2);
}

void PC::AddTimer(const std::string & a0, LPEVENT a1) {
	((void(*)(PC *, const std::string &, LPEVENT))Addr::quest::PC::AddTimer)(this, a0, a1);
}

PC::PC() {
	((void(*)(PC *))Addr::quest::PC::PC__26251)(this);
}

void PC::GiveExp(const std::string & a0, DWORD a1) {
	((void(*)(PC *, const std::string &, DWORD))Addr::quest::PC::GiveExp)(this, a0, a1);
}

void PC::ClearTimer() {
	((void(*)(PC *))Addr::quest::PC::ClearTimer)(this);
}

void PC::SendQuestInfoPakcet() {
	((void(*)(PC *))Addr::quest::PC::SendQuestInfoPakcet)(this);
}

void PC::RemoveTimerNotCancel(const std::string & a0) {
	((void(*)(PC *, const std::string &))Addr::quest::PC::RemoveTimerNotCancel)(this, a0);
}

int PC::GetCurrentQuestIndex() {
	return ((int(*)(PC *))Addr::quest::PC::GetCurrentQuestIndex)(this);
}

void PC::SetCurrentQuestClockName(const std::string & a0) {
	((void(*)(PC *, const std::string &))Addr::quest::PC::SetCurrentQuestClockName)(this, a0);
}

void PC::Save() {
	((void(*)(PC *))Addr::quest::PC::Save)(this);
}

void PC::SetCurrentQuestTitle(const std::string & a0) {
	((void(*)(PC *, const std::string &))Addr::quest::PC::SetCurrentQuestTitle)(this, a0);
}

void PC::SetCurrentQuestStartFlag() {
	((void(*)(PC *))Addr::quest::PC::SetCurrentQuestStartFlag)(this);
}

int PC::GetFlag(const std::string & a0) {
	return ((int(*)(PC *, const std::string &))Addr::quest::PC::GetFlag)(this, a0);
}

void PC::SetCurrentQuestStateName(const std::string & a0) {
	((void(*)(PC *, const std::string &))Addr::quest::PC::SetCurrentQuestStateName)(this, a0);
}

void PC::SetSendFlag(int a0) {
	((void(*)(PC *, int))Addr::quest::PC::SetSendFlag)(this, a0);
}

void PC::SaveFlag(const std::string & a0, int a1) {
	((void(*)(PC *, const std::string &, int))Addr::quest::PC::SaveFlag)(this, a0, a1);
}

void PC::GiveItem(const std::string & a0, DWORD a1, int a2) {
	((void(*)(PC *, const std::string &, DWORD, int))Addr::quest::PC::GiveItem)(this, a0, a1, a2);
}

/*PC::PC(const PC a1) {
	((void(*)(PC *, const quest::PC))Addr::quest::PC::PC)(this,a1);
}*/

quest::QuestState & PC::GetQuest(const std::string & a0) {
	return ((quest::QuestState &(*)(PC *, const std::string &))Addr::quest::PC::GetQuest)(this, a0);
}

bool PC::HasQuest(const std::string & a0) {
	return ((bool(*)(PC *, const std::string &))Addr::quest::PC::HasQuest)(this, a0);
}

void PC::SetID(DWORD a0) {
	((void(*)(PC *, DWORD))Addr::quest::PC::SetID)(this, a0);
}

const std::string & PC::GetCurrentQuestName() const {
	return ((const std::string &(*)(const PC *))Addr::quest::PC::GetCurrentQuestName)(this);
}

int PC::GetCurrentQuestBeginFlag() {
	return ((int(*)(PC *))Addr::quest::PC::GetCurrentQuestBeginFlag)(this);
}

void PC::SetCurrentQuestDoneFlag() {
	((void(*)(PC *))Addr::quest::PC::SetCurrentQuestDoneFlag)(this);
}

void PC::SetCurrentQuestIconFile(const std::string & a0) {
	((void(*)(PC *, const std::string &))Addr::quest::PC::SetCurrentQuestIconFile)(this, a0);
}

void PC::DoQuestStateChange() {
	((void(*)(PC *))Addr::quest::PC::DoQuestStateChange)(this);
}

void PC::SetFlag(const std::string & a0, int a1, bool a2) {
	((void(*)(PC *, const std::string &, int, bool))Addr::quest::PC::SetFlag)(this, a0, a1, a2);
}

void PC::ClearCurrentQuestBeginFlag() {
	((void(*)(PC *))Addr::quest::PC::ClearCurrentQuestBeginFlag)(this);
}

void PC::Reward(LPCHARACTER a0) {
	((void(*)(PC *, LPCHARACTER))Addr::quest::PC::Reward)(this, a0);
}

void PC::SetQuest(const std::string & a0, quest::QuestState & a1) {
	((void(*)(PC *, const std::string &, quest::QuestState &))Addr::quest::PC::SetQuest)(this, a0, a1);
}

void PC::SetCurrentQuestBeginFlag() {
	((void(*)(PC *))Addr::quest::PC::SetCurrentQuestBeginFlag)(this);
}

void PC::Destroy() {
	((void(*)(PC *))Addr::quest::PC::Destroy)(this);
}

void PC::SetCurrentQuestCounterName(const std::string & a0) {
	((void(*)(PC *, const std::string &))Addr::quest::PC::SetCurrentQuestCounterName)(this, a0);
}

bool PC::DeleteFlag(const std::string & a0) {
	return ((bool(*)(PC *, const std::string &))Addr::quest::PC::DeleteFlag)(this, a0);
}

void PC::EndRunning() {
	((void(*)(PC *))Addr::quest::PC::EndRunning)(this);
}

void PC::ClearQuest(const std::string & a0) {
	((void(*)(PC *, const std::string &))Addr::quest::PC::ClearQuest)(this, a0);
}

void PC::SetQuestTitle(const std::string & a0, const std::string & a1) {
	((void(*)(PC *, const std::string &, const std::string &))Addr::quest::PC::SetQuestTitle)(this, a0, a1);
}

void PC::Build() {
	((void(*)(PC *))Addr::quest::PC::Build)(this);
}
}
}
