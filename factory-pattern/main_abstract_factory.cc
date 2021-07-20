#include "abstract-factory/ny_pizza_store.h"

#include "abstract-factory/ny_pizza_ingredient_factory.h"
#include "abstract-factory/chicago_pizza_ingredient_factory.h"

int main() {
	NYPizzaStore ny_pizza_store;
	
	std::shared_ptr<PizzaIngredientFactory> ny_pizza_factory = std::make_shared<NYPizzaIngredientFactory>();
	ny_pizza_store.setPizzaIngredientFactory(ny_pizza_factory);
	ny_pizza_store.createPizza("cheese");

	std::shared_ptr<PizzaIngredientFactory> chicago_pizza_factory = std::make_shared<ChicagoPizzaIngredientFactory>();
	ny_pizza_store.setPizzaIngredientFactory(chicago_pizza_factory);
	ny_pizza_store.createPizza("veggie");

	return 0;

}