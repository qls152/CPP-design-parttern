#pragma once

#include "quack_behavior.h"

class Quack : public QuackBehavior {
public:
  Quack() = default;
  ~Quack() = default;
  virtual void quack() override;
};