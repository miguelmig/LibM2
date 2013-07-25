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
