#pragma once

#include "quack_behavior.h"

class Squeak : public QuackBehavior {
public:
  Squeak() = default;
  ~Squeak() = default;
  virtual void quack() override;
};