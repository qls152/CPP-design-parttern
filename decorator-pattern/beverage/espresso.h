#pragma once

#include "beverage/beverage.h"

// 声明浓缩咖啡
class Espresso : public Beverage {
public:
  explicit Espresso() : Beverage("Espresso") {} 
  virtual ~Espresso() = default;

  virtual double cost() override {
    return 1.99;	  
  }
};
