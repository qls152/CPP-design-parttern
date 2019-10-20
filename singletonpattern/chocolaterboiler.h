//
// Created by qinliansong on 2019/10/6.
//

#ifndef SINGLETONPATTERN_CHOCOLATERBOILER_H
#define SINGLETONPATTERN_CHOCOLATERBOILER_H

#include <iostream>
#include <string>
#include <memory>


class ChocolaterBoiler {
public:
    static std::unique_ptr<ChocolaterBoiler> getInstance();
    // 在锅炉内填入原料时，锅炉必须是空的。一旦填入原料就把empty和boiled设置好
    void fill();
    // 锅炉排出时，必须是满的而且已经煮过，排出完毕后把empty设置好
    void drain();
    // 煮混合物时锅炉必须是满的并且煮沸过的，一旦煮沸就把boiled设置为true
    void boil();
    bool isEmpty();
    bool isBoiled();

private:
    static std::unique_ptr<ChocolaterBoiler> uniqueInstance;
    bool empty;
    bool boiled;

private:
    // 代码开始时，锅炉是空的
    ChocolaterBoiler() : empty(true), boiled(false) {}
};


#endif //SINGLETONPATTERN_CHOCOLATERBOILER_H
