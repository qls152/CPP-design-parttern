#pragma once

#include "beverage/beverage.h"

#include <memory>

// Mocha是一个装饰者，其主要装饰Beverage
class Mocha : public CondimentDecorator {
public:
  explicit Mocha(std::shared_ptr<Beverage> beverage) 
    : Beverage("Mocha"),
      beverage_(std::move(beverage)) {}

  virtual std::string getDescription() override {
    return beverage_->getDescription() + ", " + Beverage::getDescription();
  }
  
  // 要计算相应的价格，需要委托给相应的饮料
  virtual double cost() override {
    return .20 + beverage_->cost();
  }

private:
  std::shared_ptr<Beverage> beverage_{};
};