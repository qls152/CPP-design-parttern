//
// Created by qinliansong on 2019/11/28.
//

#ifndef ITERPATTERN_DINERMENU_H
#define ITERPATTERN_DINERMENU_H

#include <vector>
#include "menuitem.h"
#include "DinermenuIterator.h"

class Dinermenu {
private:
    using Iteartor = DinermenuIterator<Menuitem>;
public:
    Dinermenu();
    bool init();

    void addItem(const std::string& name, const std::string& description,
                 double price, bool vegetarian);

     Iteartor createIterator() {
         Iteartor iter(_menuItems);
         return iter;
    }
private:
    static const int _S_MAX_ITEMS = 6;
    int _number_of_items = 0;
    std::vector<Menuitem> _menuItems;
};


#endif //ITERPATTERN_DINERMENU_H
