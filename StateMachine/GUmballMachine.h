//
// Created by qinliansong on 2020/3/17.
//

#ifndef STATEMACHINE_GUMBALLMACHINE_H
#define STATEMACHINE_GUMBALLMACHINE_H

#include <string>
#include <memory>
#include "state_interface.h"

class GUmballMachine {
private:
    std::shared_ptr<State> _soldOutState;
    std::shared_ptr<State> _noQuarterState;
    std::shared_ptr<State> _hasQuarterSter;
    std::shared_ptr<State> _soldState;

    int _count;
    std::shared_ptr<State> _state;

public:
    GUmballMachine(int numberGumballs);
    void init();
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void setState(std::shared_ptr<State> state);
    void releaseBall();
    std::shared_ptr<State> getNoQuarterState() const {
        return _noQuarterState;
    }

    std::shared_ptr<State> getHasQuarterState() const {
        return _hasQuarterSter;
    }

    std::shared_ptr<State> getSoldOutState() const {
        return _soldOutState;
    }

    std::shared_ptr<State> getSoldState() const {
        return _soldState;
    }

    const int getCount() const {
        return _count;
    }
};


#endif //STATEMACHINE_GUMBALLMACHINE_H
