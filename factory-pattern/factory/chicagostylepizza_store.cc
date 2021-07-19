#include "factory/chicagostylepizza_store.h"

#include "common/pizza/cheese_pizza.h"
#include "common/pizza/veggie_pizza.h"

std::shared_ptr<Pizza> ChicagoStylePizaaStore::createPizza(const std::string& type) {
    std::shared_ptr<Pizza> pizza{};

    if (type == "cheese") {
	   pizza = std::make_shared<CheesePizza>();
    }

    if (type == "veggie") {
	   pizza = std::make_shared<VeggiePizza>();
    }

    return pizza;	
}