//
// Created by qinliansong on 2019-09-22.
//

#ifndef FACTORY_SIMPLEPIZZAFACTORY_H
#define FACTORY_SIMPLEPIZZAFACTORY_H



#include <memory>
#include <string>
#include <pizza.h>
#include <cheesepizza.h>
#include <veggiepizza.h>

class SimplePizzaFactory {
public:
    Pizza* createPizza(const std::string& type);
    Pizza* pizza;
};


#endif //FACTORY_SIMPLEPIZZAFACTORY_H
