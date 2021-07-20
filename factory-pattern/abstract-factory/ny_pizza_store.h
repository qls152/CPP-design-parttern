#pragma once
#include <string>
#include <memory>

class PizzaIngredientFactory;

// 该类封装相应接口，方便用户使用
class NYPizzaStore {
public:
  NYPizzaStore() = default;
  explicit NYPizzaStore(std::shared_ptr<PizzaIngredientFactory> pizza_ingredient_factory);
  void createPizza(const std::string& type);
  void setPizzaIngredientFactory(std::shared_ptr<PizzaIngredientFactory> pizza_ingredient_factory);
private:
  std::shared_ptr<PizzaIngredientFactory> pizza_ingredient_factory_{};
};