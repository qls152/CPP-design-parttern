//
// Created by qinliansong on 2019/11/28.
//

#ifndef ITERPATTERN_MENUITEM_H
#define ITERPATTERN_MENUITEM_H

#include <string>

class Menuitem {
public:
    Menuitem(const std::string& name,
             const std::string& description,
             double price,
             bool vegetarian)
             : _name(name), _description(description) {
        _price = price;
        _vegetarian = vegetarian;
    }

    std::string getName() const;

    std::string getDescription() const;

    double getPrice() const;

    bool isVegetarian() const;

private:
    std::string _name;
    std::string _description;
    double _price;
    bool _vegetarian;
};


#endif //ITERPATTERN_MENUITEM_H
