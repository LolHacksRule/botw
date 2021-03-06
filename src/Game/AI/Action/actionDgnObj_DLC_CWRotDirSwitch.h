#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class DgnObj_DLC_CWRotDirSwitch : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(DgnObj_DLC_CWRotDirSwitch, ksys::act::ai::Action)
public:
    explicit DgnObj_DLC_CWRotDirSwitch(const InitArg& arg);
    ~DgnObj_DLC_CWRotDirSwitch() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;
};

}  // namespace uking::action
