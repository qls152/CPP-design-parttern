#include <iostream>
#include "menuitem.h"
#include "pancakehousemenu.h"
#include "dinermenu.h"
#include "DinermenuIterator.h"

int main() {
    Pancakehousemenu pan;
    auto breakfa = pan.getMenuitems();

    Dinermenu diner;
     auto iter_launch = diner.createIterator();

#if 0
    for (int i = 0; i < breakfa.size(); ++i) {
        auto iter = breakfa.begin();
        std::advance(iter, i);
        Menuitem menuitem = *iter;
        std::cout << menuitem.getName() << " " << std::endl;
        std::cout << menuitem.getPrice() <<  " " << std::endl;
        std::cout << menuitem.getDescription() << std::endl;
    }
#endif

    while(iter_launch.hasNext()) {
        Menuitem menuitem = iter_launch.next();
        std::cout << menuitem.getName() << " " << std::endl;
        std::cout << menuitem.getPrice() <<  " " << std::endl;
        std::cout << menuitem.getDescription() << std::endl;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}