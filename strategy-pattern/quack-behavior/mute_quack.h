#pragma once

#include "quack_behavior.h"

class MuteQuack : public QuackBehavior {
public:
  MuteQuack() = default;
  ~MuteQuack() = default;
  virtual void quack() override;
};