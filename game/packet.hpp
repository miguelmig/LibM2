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
}
#endif // __LIBM2_GAME_PACKET_HPP
