//
// Created by qinliansong on 2019/11/28.
//

#include "pancakehousemenu.h"

Pancakehousemenu::Pancakehousemenu() {
    init();
}

bool Pancakehousemenu::init() {
    addItem("K&B's Pancake",
            "Pancke",
            2.99,
            true);

    addItem("Refular pancke",
            "pancake",
            2.99,
            false);

    addItem("Blueberry",
            "pancakes made with",
            3.49,
            true);

    addItem("Waffles",
            "waffles with yout choice",
            3.59,
            true);
    return true;
}

void Pancakehousemenu::addItem(const std::string &name, const std::string &descrip, double price, bool veg) {
    Menuitem menuItem(name, descrip, price, veg);
    _menuItems.push_back(menuItem);
}

 std::list<Menuitem>& Pancakehousemenu::getMenuitems() {
    return _menuItems;
}