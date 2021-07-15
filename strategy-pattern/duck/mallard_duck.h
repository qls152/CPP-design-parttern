#pragma once

#include "duck.h"

class MallardDuck : public Duck {
public:
  MallardDuck();
  ~MallardDuck() = default;

  virtual void display() override;
};