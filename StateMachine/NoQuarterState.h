//
// Created by qinliansong on 2020/3/21.
//

#ifndef STATEMACHINE_NOQUARTERSTATE_H
#define STATEMACHINE_NOQUARTERSTATE_H

#include <iostream>
#include <string>
#include "state_interface.h"
#include "GUmballMachine.h"


class NoQuarterState : public State{
public:
    NoQuarterState(GUmballMachine& gUmballMachine1) :
            _gUmballMachine(gUmballMachine1) {
    };

    virtual ~NoQuarterState() {}
    virtual void insertQuarter() {
        std::cout << " You inserted a quater" << std::endl;
        _gUmballMachine.setState(_gUmballMachine.getHasQuarterState());
    }
    virtual void ejectQuarter() {
        std::cout << " You have't inserted a quarted" << std::endl;
    }
    virtual void turnCrank() {
        std::cout << "You turned but there's no quarter" << std::endl;
    }

    virtual void dispense() {
        std::cout << " You need to pay first" << std::endl;
    }

private:
    GUmballMachine _gUmballMachine;
};


#endif //STATEMACHINE_NOQUARTERSTATE_H
