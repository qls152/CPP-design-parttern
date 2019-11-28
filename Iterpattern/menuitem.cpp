//
// Created by qinliansong on 2019/11/28.
//

#include "menuitem.h"

std::string Menuitem::getName() const {
    return _name;
}

std::string Menuitem::getDescription() const {
    return _description;
}

double Menuitem::getPrice() const {
    return _price;
}

bool Menuitem::isVegetarian() const {
    return _vegetarian;
}