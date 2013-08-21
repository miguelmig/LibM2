/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_PACKET_HPP
#define __LIBM2_GAME_PACKET_HPP
namespace libm2{
struct packet_motion {
    BYTE header;
    DWORD vid;
    DWORD victim_vid;
    WORD motion;
};
struct packet_item_use {
    BYTE header;
    BYTE pos;
    DWORD ch_vid;
    DWORD victim_vid;
    DWORD vnum;
};
struct TPacketAffectElement {
    DWORD dwType;
    BYTE bApplyOn;
    long lApplyValue;
    DWORD dwFlag;
    long lDuration;
    long lSPCost;
};
struct packet_party_update {
    BYTE header;
    DWORD pid;
    BYTE role;
    BYTE percent_hp;
    short affects[7];
} typedef TPacketGCPartyUpdate;

struct SPacketMyshopPricelistHeader {
    DWORD dwOwnerID;
    BYTE byCount;
} typedef TPacketMyshopPricelistHeader;
struct tChangeMonarchLordACK {
    BYTE bEmpire;
    DWORD dwPID;
    char szName[32];
    char szDate[32];
} typedef TPacketChangeMonarchLordACK;
struct tBlockCountryIp {
    DWORD ip_from;
    DWORD ip_to;
} typedef TPacketBlockCountryIp;
struct tBlockException {
    BYTE cmd;
    char login[31];
} typedef TPacketBlockException;
struct TMonarchInfo {
    DWORD pid[4];
    int64_t money[4];
    char name[4][32];
    char date[4][32];
};
struct $_64 {
    DWORD dwWarID;
    char szLogin[31];
    DWORD dwGold;
    DWORD dwGuild;
};
struct $_65 {
    DWORD dwPID1;
    DWORD dwPID2;
    time_t tMarryTime;
    char szName1[25];
    char szName2[25];
};
struct $_66 {
    DWORD dwPID1;
    DWORD dwPID2;
    int iLovePoint;
    BYTE byMarried;
};
struct $_67 {
    DWORD dwPID1;
    DWORD dwPID2;
};
struct $_68 {
    DWORD dwPID1;
    DWORD dwPID2;
};
struct $_69 {
    DWORD dwPID1;
    DWORD dwPID2;
    DWORD dwMapIndex;
};
struct $_70 {
    DWORD dwPID1;
    DWORD dwPID2;
};
struct $_71 {
    DWORD dwPID1;
    DWORD dwPID2;
};
struct tNeedLoginLogInfo {
    DWORD dwPlayerID;
}typedef TPacketNeedLoginLogInfo;
struct tChangeGuildMaster {
    DWORD dwGuildID;
    DWORD idFrom;
    DWORD idTo;
}typedef TPacketChangeGuildMaster;
struct $_63 {
    DWORD dwWarID;
    char szLogin[31];
    DWORD dwGold;
    DWORD dwGuild;
} typedef TPacketGDGuildWarBet;
}
#endif // __LIBM2_GAME_PACKET_HPP
