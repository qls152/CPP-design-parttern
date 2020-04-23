//
// Created by qinliansong on 2020/4/23.
//

#ifndef FACTORYPATTERN_SIMPLEPIZZAFACTORY_H
#define FACTORYPATTERN_SIMPLEPIZZAFACTORY_H

#include <string>
#include "pizza.h"

class SimplePizzaFactory {
private:
    Pizza* pizza;
public:
    SimplePizzaFactory();
    ~SimplePizzaFactory();
    Pizza* creatPizza(const std::string& type);
};


#endif //FACTORYPATTERN_SIMPLEPIZZAFACTORY_H
