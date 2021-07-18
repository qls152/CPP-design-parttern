#include "common/store/pizza_store.h"

int main() {
	auto factory = std::make_shared<SimplePizzaFactory>();
	PizzaStore pizza_store{factory};
	pizza_store.orderPizza("cheese");

	return 0;	
} 