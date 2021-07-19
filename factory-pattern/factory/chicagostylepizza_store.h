#pragma once

#include "factory/pizza_store.h"

class ChicagoStylePizaaStore : public PizzaStore {
private:
  virtual std::shared_ptr<Pizza> createPizza(const std::string& type) override;
};