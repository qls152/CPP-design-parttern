//
// Created by qinliansong on 2019/11/28.
//

#ifndef ITERPATTERN_ITERATOR_H
#define ITERPATTERN_ITERATOR_H
template <typename iter>
class MenuIterator {
public:
    virtual bool hasNext() = 0;
    virtual iter next() = 0;
};
#endif //ITERPATTERN_ITERATOR_H
