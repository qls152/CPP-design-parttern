//
// Created by qinliansong on 2020/4/14.
//

#ifndef DP_BEVERAGE_H
#define DP_BEVERAGE_H

#include <iostream>
#include <string>
class Beverage {
public:
    virtual ~Beverage();
    virtual std::string getDescription();
    virtual double cost() = 0;

protected:
    Beverage();
    Beverage(const std::string& des);

private:
    std::string  description;
};


#endif //DP_BEVERAGE_H
