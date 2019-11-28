//
// Created by qinliansong on 2019/11/28.
//

#ifndef ITERPATTERN_PANCAKEHOUSEMENU_H
#define ITERPATTERN_PANCAKEHOUSEMENU_H

#include <list>
#include <iostream>

#include "menuitem.h"

class Pancakehousemenu {
public:
    Pancakehousemenu();

    bool init();

    void addItem(const std::string& name,
                 const std::string& descrip,
                 double price, bool veg);

    std::list<Menuitem>& getMenuitems();
private:
    std::list<Menuitem>  _menuItems;

};


#endif //ITERPATTERN_PANCAKEHOUSEMENU_H
