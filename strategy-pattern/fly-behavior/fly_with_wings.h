#pragma once

#include "fly_behavior.h"

// 飞行的实现，给“真会”飞的鸭子用
class FlyWithWings : public FlyBehavior {
public:
  FlyWithWings() = default;
  ~FlyWithWings() = default;

  virtual void fly() override;
};