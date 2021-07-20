#include "abstract-factory/pizza_ingredient_factory.h"
#include "abstract-factory/abstract_factory_pizza.h"

#include "pizza-ingredient/dough.h"
#include "pizza-ingredient/sauce.h"
#include "pizza-ingredient/cheese.h"

void AbstractFactoryPizza::prepare() {
   // 此处是抽象工厂真正生效的地方
   dough_ = pizza_ingredient_factory_->createDough();
   sauce_ = pizza_ingredient_factory_->createSauce();
   cheese_ = pizza_ingredient_factory_->createCheese();	

   dough_->printIngredientName();
   sauce_->printIngredientName();
   cheese_->printIngredientName();
}