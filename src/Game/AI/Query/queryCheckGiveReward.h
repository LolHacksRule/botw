#pragma once

#include "KingSystem/ActorSystem/actAiQuery.h"

namespace uking::query {

class CheckGiveReward : public ksys::act::ai::Query {
    SEAD_RTTI_OVERRIDE(CheckGiveReward, Query)
public:
    explicit CheckGiveReward(const InitArg& arg);
    ~CheckGiveReward() override;
    int doQuery() override;

    void loadParams() override;
    void loadParams(const evfl::QueryArg& arg) override;
};

}  // namespace uking::query
