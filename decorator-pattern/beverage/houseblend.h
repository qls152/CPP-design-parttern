#pragma once

#include "beverage/beverage.h"

// 声明HouseBlend
class HouseBlend : public Beverage {
public:
  explicit HouseBlend() : Beverage("HouseBlend") {}
  virtual ~HouseBlend() = default;

  virtual double cost() override {
    return .89;
  }
};