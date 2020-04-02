//
// Created by qinliansong on 2020/3/21.
//

#ifndef STATEMACHINE_SOLDSTATE_H
#define STATEMACHINE_SOLDSTATE_H

#include "state_interface.h"
#include "GUmballMachine.h"
#include <iostream>

class SoldState : public State {
public:
    SoldState(GUmballMachine& gUmballMachine1) :
    _gUmballMachine(gUmballMachine1) {

    };

    virtual ~SoldState() {}
    virtual void insertQuarter() {
        std::cout << " please wait, we're already giving you a gumball" << std::endl;
    }
    virtual void ejectQuarter() {
        std::cout << "sorry you already turned the crank" << std::endl;
    }
    virtual void turnCrank() {
        std::cout << " turning twice doesn't get you another gumball" << std::endl;
    }

    virtual void dispense() {
        _gUmballMachine.releaseBall();
        if (_gUmballMachine.getCount() > 0) {
            _gUmballMachine.setState(_gUmballMachine.getNoQuarterState());
        } else {
            std::cout << " OOps out of gumballs" << std::endl;
            _gUmballMachine.setState(_gUmballMachine.getSoldOutState());
        }
    }

private:
    GUmballMachine _gUmballMachine;
};


#endif //STATEMACHINE_SOLDSTATE_H
