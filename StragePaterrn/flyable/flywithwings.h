//
//
//
#pragma once
#include "flybehavior.h"

namespace duck {
class FlyWithWings : public FlyBehavior {
public:
    void fly() override;
    virtual ~FlyWithWings() {}
};
}