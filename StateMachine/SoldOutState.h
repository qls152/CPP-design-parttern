//
// Created by qinliansong on 2020/3/21.
//

#ifndef STATEMACHINE_SOLDOUTSTATE_H
#define STATEMACHINE_SOLDOUTSTATE_H

#include "GUmballMachine.h"
#include "state_interface.h"

#include <iostream>

class SoldOutState : public State {
public:
    SoldOutState(GUmballMachine& gUmballMachine1) :
    _gUmballMachine(gUmballMachine1) {
    };

    virtual ~SoldOutState() {}

    virtual void insertQuarter() {
        std::cout << " You inserted a quater" << std::endl;
    }
    virtual void ejectQuarter() {
        std::cout << " You inserted a quater" << std::endl;
    }
    virtual void turnCrank() {
        std::cout << " You inserted a quater" << std::endl;

    }

    virtual void dispense() {
        std::cout << " You inserted a quater" << std::endl;
    }

private:
    GUmballMachine _gUmballMachine;
};


#endif //STATEMACHINE_SOLDOUTSTATE_H
