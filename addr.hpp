#ifndef __LIBM2_ADDR_HPP
#define __LIBM2_ADDR_HPP
namespace libm2{
namespace Addr{
enum class misc{
    version=0x848C62A,
    get_global_time=0x81FB930,
    main=0x8233C40,
    interpret_command=0x80CCF80,
    locale_find=0x8163460,
};
enum class CHARACTER{
    ChatPacket=0x806EC80,
    SetSyncOwner=0x8073960,
    GetCharType=0x806BBB0,
    Sync=0x806E430,
    CHARACTER=0x807EEB0,
    GetGMLevel=0x806BC10,
};
enum class CEntity{
    PacketAround=0x810F510,
};
enum class CInputMain{
    SyncPosition=0x8140870,
};
enum class CHARACTER_MANAGER{
    Find__DWORD=0x80AA160,
    singleton=0x86A23EC,
    createCharacter_alloc=0x80AC5D6,
};
}
}
#endif // __LIBM2_ADDR_HPP
