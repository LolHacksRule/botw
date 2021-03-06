#pragma once

#include "Game/AI/Action/actionSwimEnemyAnmBackBlownOff.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class SwimEnemyAnmBackBlownOffFromPL : public SwimEnemyAnmBackBlownOff {
    SEAD_RTTI_OVERRIDE(SwimEnemyAnmBackBlownOffFromPL, SwimEnemyAnmBackBlownOff)
public:
    explicit SwimEnemyAnmBackBlownOffFromPL(const InitArg& arg);
    ~SwimEnemyAnmBackBlownOffFromPL() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;
};

}  // namespace uking::action
