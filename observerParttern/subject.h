//
// Created by qinliansong on 2020/4/2.
//

#ifndef OBSERVERPARTTERN_SUBJECT_H
#define OBSERVERPARTTERN_SUBJECT_H

#include <memory>
#include "observe.h"

class Subject {
public:
    virtual ~Subject() {}
    virtual void registerObserve(const std::shared_ptr<Observe> o) = 0;
    virtual void removeObserve(const std::shared_ptr<Observe> o) = 0;
    virtual void notifyObservers() = 0;
};

#endif //OBSERVERPARTTERN_SUBJECT_H
