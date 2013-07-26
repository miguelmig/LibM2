#ifndef __LIBM2_GAME_QUEST_REWARDDATA__HPP
#define __LIBM2_GAME_QUEST_REWARDDATA__HPP
namespace libm2 {
namespace quest {
class RewardData {
    public:
    enum RewardType {
        REWARD_TYPE_NONE,
        REWARD_TYPE_EXP,
        REWARD_TYPE_ITEM
    };
    RewardType type;
    DWORD value1;
    int value2;
public:
    RewardData(RewardType, DWORD, int);
};
}
}
#endif // __LIBM2_GAME_QUEST_REWARDDATA__HPP
