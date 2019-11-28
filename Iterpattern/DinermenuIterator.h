//
// Created by qinliansong on 2019/11/28.
//

#ifndef ITERPATTERN_DINERMENUITERATOR_H
#define ITERPATTERN_DINERMENUITERATOR_H

#include "Iterator.h"
#include "dinermenu.h"
template <typename menu>
class DinermenuIterator : public MenuIterator<menu>  {
private:
    using MenuItem = std::vector<menu>;
public:
    DinermenuIterator(MenuItem items) : _items(items) {

    }

    menu next() override {
        menu menu1 = _items[_position];
        ++_position;
        return menu1;
    }

    bool hasNext() override {
        if (_position >= _items.size()) {
            return false;
        }
        return true;
    }

private:
    MenuItem _items;
    int _position = 0;


};


#endif //ITERPATTERN_DINERMENUITERATOR_H
