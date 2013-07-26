/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
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
    SpecificEffectPacket=0x806F830,
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
enum class lua{
    DoString=0x844CFE0,
    DoFile=0x844D2F0,

    ToString=0x8440110,
    ToBoolean=0x843F260,
    ToNumber=0x8440180,
    ToPointer=0x843F340,
    ToThread=0x843F310,
    ToUserData=0x843F2D0,

    PushBoolean=0x843F3F0,
    PushCClosure=0x843FBE0,
    PushFString=0x8440030,
    PushLightUserData=0x843F420,
    PushLString=0x843F9B0,
    PushNil=0x843F3B0,
    PushNumber=0x843F3D0,
    PushString=0x8440070,
    PushUpValues=0x843F710,
    PushValue=0x843F160,
    PushVFString=0x843FFE0,

    IsNumber=0x84401C0,
    IsString=0x843F200,

    SetTable=0x843FE40,
    NewTable=0x843FE90,
    GetTop=0x843F000,
    SetTop=0x843F020,
    RawSetI=0x843FD80,
    RawSet=0x843FDE0,
};
namespace quest{
    enum class misc{
        RegisterAffectFunctionTable=0x81956B0,
    };
    enum class CQuestManager{
        singleton = 0x86A23F0,
        AddLuaFunctionTable=0x8191390,
        GetCurrentNPCCharacterPtr=0x81C03D0,
    };
}
}
}
#endif // __LIBM2_ADDR_HPP
