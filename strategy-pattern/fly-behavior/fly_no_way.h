#pragma once

#include "fly_behavior.h"

// 这是飞行行为的实现，给不会飞的鸭子用
class FlyNoWay : public FlyBehavior {
public:
  FlyNoWay() = default;
  ~FlyNoWay() = default;
  virtual void fly() override;
};