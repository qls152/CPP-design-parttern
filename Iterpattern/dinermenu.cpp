//
// Created by qinliansong on 2019/11/28.
//

#include "dinermenu.h"
#include <iostream>

Dinermenu::Dinermenu() {
    init();
}

bool Dinermenu::init() {
    addItem("Vegetarian BLT",
            "(Fakin) bacon weith lettuce & tomato", 2.99, true);

    addItem("BLT",
            "bacon with lettuce & tomato", 2.99, false);

    addItem("Soup of the day",
            "soup of the day", 3.29, false);

    addItem("Hotdog",
            "a hot dog", 3.05, false);

    return true;

}

void Dinermenu::addItem(const std::string &name, const std::string &description, double price, bool vegetarian) {
    Menuitem menuitem(name, description,price,vegetarian);
    if (_number_of_items >= _S_MAX_ITEMS) {
        std::cout << "sorry menu is full" << std::endl;
    } else {
        _menuItems.push_back(menuitem);
        ++_number_of_items;
    }
}

