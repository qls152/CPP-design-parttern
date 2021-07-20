#pragma once

#include <memory>

// 本部分定义抽象工厂接口
class Cheese;
class Dough;
class Sauce;

class PizzaIngredientFactory {
public:
  virtual std::shared_ptr<Cheese> createCheese() = 0;
  virtual std::shared_ptr<Dough> createDough() = 0;
  virtual std::shared_ptr<Sauce> createSauce() = 0;
};