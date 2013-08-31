#include "DBManager.hpp"
namespace libm2{
const std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > & DBManager::GetGreetMessage() {
	return ((const std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > &(*)(DBManager *))Addr::DBManager::GetGreetMessage)(this);
}

void DBManager::InsertLoginData(CLoginData * a0) {
	((void(*)(DBManager *, CLoginData *))Addr::DBManager::InsertLoginData)(this, a0);
}

SQLMsg * DBManager::PopResult() {
	return ((SQLMsg *(*)(DBManager *))Addr::DBManager::PopResult)(this);
}

void DBManager::CheckBilling() {
	((void(*)(DBManager *))Addr::DBManager::CheckBilling)(this);
}

void DBManager::LoadDBString() {
	((void(*)(DBManager *))Addr::DBManager::LoadDBString)(this);
}

void DBManager::StopAllBilling() {
	((void(*)(DBManager *))Addr::DBManager::StopAllBilling)(this);
}

void DBManager::SetBilling(DWORD a0, bool a1, bool a2) {
	((void(*)(DBManager *, DWORD, bool, bool))Addr::DBManager::SetBilling)(this, a0, a1, a2);
}

bool DBManager::IsConnected() {
	return ((bool(*)(DBManager *))Addr::DBManager::IsConnected)(this);
}

void DBManager::FlushBilling(bool a0) {
	((void(*)(DBManager *, bool))Addr::DBManager::FlushBilling)(this, a0);
}

void DBManager::DeleteLoginData(CLoginData * a0) {
	((void(*)(DBManager *, CLoginData *))Addr::DBManager::DeleteLoginData)(this, a0);
}

void DBManager::LoginPrepare(BYTE a0, DWORD a1, long a2, LPDESC a3, DWORD * a4, int * a5) {
	((void(*)(DBManager *, BYTE, DWORD, long, LPDESC, DWORD *, int *))Addr::DBManager::LoginPrepare)(this, a0, a1, a2, a3, a4, a5);
}

DBManager::~DBManager() {
	((void(*)(DBManager *))Addr::DBManager::__DBManager)(this);
}

void DBManager::SendAuthLogin(LPDESC a0) {
	((void(*)(DBManager *, LPDESC))Addr::DBManager::SendAuthLogin)(this, a0);
}

void DBManager::SendMoneyLog(BYTE a0, DWORD a1, int a2) {
	((void(*)(DBManager *, BYTE, DWORD, int))Addr::DBManager::SendMoneyLog)(this, a0, a1, a2);
}

void DBManager::ReturnQuery(int a0, DWORD a1, void * a2, const char * format,...) {
    va_list va;
    va_start(va, format);
    char buffer[513];
    vsnprintf(buffer, 513, format, va);
    va_end(va);
	((void(*)(DBManager *, int, DWORD, void *, const char *,...))Addr::DBManager::ReturnQuery)(this, a0, a1, a2, buffer);
}

SQLMsg * DBManager::DirectQuery(const char * format,...) {
    va_list va;
    va_start(va, format);
    char buffer[513];
    vsnprintf(buffer, 513, format, va);
    va_end(va);
	return ((SQLMsg *(*)(DBManager *, const char *, ...))Addr::DBManager::DirectQuery)(this, buffer);
}

const std::string & DBManager::GetDBString(const std::string & a0) {
	return ((const std::string &(*)(DBManager *, const std::string &))Addr::DBManager::GetDBString)(this, a0);
}

void DBManager::RequestBlockException(const char * a0, int a1) {
	((void(*)(DBManager *, const char *, int))Addr::DBManager::RequestBlockException)(this, a0, a1);
}

void DBManager::SendLoginPing(const char * a0) {
	((void(*)(DBManager *, const char *))Addr::DBManager::SendLoginPing)(this, a0);
}

void DBManager::PushBilling(CLoginData * a0) {
	((void(*)(DBManager *, CLoginData *))Addr::DBManager::PushBilling)(this, a0);
}

void DBManager::AnalyzeReturnQuery(SQLMsg * a0) {
	((void(*)(DBManager *, SQLMsg *))Addr::DBManager::AnalyzeReturnQuery)(this, a0);
}

void DBManager::Process() {
	((void(*)(DBManager *))Addr::DBManager::Process)(this);
}

DBManager::DBManager() {
	((void(*)(DBManager *))Addr::DBManager::DBManager)(this);
}

bool DBManager::Connect(const char * a0, const int a1, const char * a2, const char * a3, const char * a4) {
	return ((bool(*)(DBManager *, const char *, const int, const char *, const char *, const char *))Addr::DBManager::Connect)(this, a0, a1, a2, a3, a4);
}

CLoginData * DBManager::GetLoginData(DWORD a0) {
	return ((CLoginData *(*)(DBManager *, DWORD))Addr::DBManager::GetLoginData)(this, a0);
}

void DBManager::Query(const char * format, ...) {
    va_list va;
    va_start(va, format);
    char buffer[513];
    vsnprintf(buffer, 513, format, va);
    va_end(va);
	((void(*)(DBManager *, const char *, ...))Addr::DBManager::Query)(this, buffer);
}

size_t DBManager::EscapeString(char * a0, size_t a1, const char * a2, size_t a3) {
	return ((size_t(*)(DBManager *, char *, size_t, const char *, size_t))Addr::DBManager::EscapeString)(this, a0, a1, a2, a3);
}
}
