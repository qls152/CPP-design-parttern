#pragma once

#include "common/pizza/pizza.h"

class VeggiePizza : public Pizza {
private:
  PizzaName pizza_name_{"VeggiePizza"};

public:
  virtual void prepare() override;
  virtual void bake() override;
  virtual void cut() override;
  virtual void box() override;
};