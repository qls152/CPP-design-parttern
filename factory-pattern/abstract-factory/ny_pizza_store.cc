#include "abstract-factory/ny_pizza_store.h"

#include "abstract-factory/pizza_ingredient_factory.h"

#include "abstract-factory/abstract_factory_cheese_pizza.h"
#include "abstract-factory/abstract_factory_veggie_pizza.h"

NYPizzaStore::NYPizzaStore(std::shared_ptr<PizzaIngredientFactory> pizza_ingredient_factory)
    : pizza_ingredient_factory_(std::move(pizza_ingredient_factory)) {
	   
    }

void NYPizzaStore::createPizza(const std::string& type) {
	std::shared_ptr<AbstractFactoryPizza> pizza{};
	if (type == "cheese") {
		pizza = std::make_shared<AbstractFactoryCheesePizza>(pizza_ingredient_factory_);
	}
	
	if (type == "veggie") {
		pizza = std::make_shared<AbstractFactoryVeggiePizza>(pizza_ingredient_factory_);
	}

	pizza->bake();
	pizza->cut();
	pizza->cut();
	pizza->prepare();
	return;
}

void NYPizzaStore::setPizzaIngredientFactory(std::shared_ptr<PizzaIngredientFactory> pizza_ingredient_factory) {
	pizza_ingredient_factory_ = std::move(pizza_ingredient_factory);
}