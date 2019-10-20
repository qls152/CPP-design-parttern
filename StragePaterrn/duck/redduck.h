//
// Author: qinliansong
//
#pragma once
#include "duck.h"
#include "../flyable/flynoway.h"
#include "../quackable/squeak.h"

namespace duck {

class RedDuck : public BaseDuck {
public:
    RedDuck()
    : BaseDuck(
            std::unique_ptr<FlyBehavior>(new FlyNoway),
            std::unique_ptr<QuackBehavior>(new Squeak)) {

    }
    void display() override;
    virtual ~RedDuck() {}
};
}