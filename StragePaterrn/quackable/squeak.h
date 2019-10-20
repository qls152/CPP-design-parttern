//
//
//
#pragma once
#include "quackbehavior.h"

namespace duck {
class Squeak : public QuackBehavior {
public:
    void quack() override;
    virtual ~Squeak() {}
};
}