//
// Author: Qin liansong
// weatherdata类
#ifndef OBSERVERPATERN_WEATHERDATA_H
#define OBSERVERPATERN_WEATHERDATA_H
#include <list>
#include <memory>

#include "observe/observer.h"
#include "subject/subject.h"

namespace observer_patern {

class WeatherData : public observer_patern::Subject {
private:
    // 建立observe的list，此list是在构造器中建立
    std::list<observer_patern::Observer* > observers;
    float temperature;
    float humidity;
    float pressure;

public:
    virtual  ~WeatherData() {}
    // 当注册观察者时，我们只要把它加入list中
    void registerObserver(const observer o) override;
    // 当观察者注销时，只需要在list删除
    void removeObserver(const observer o) override;
    // 我们把状态告诉每一个观察者，因此观察者都实现了update
    void notifyObservers() override;

    // 当从气象站得到更新观测值时，通知观察者
    void measurementsChanged();
    void setMeasureMents(float temperature, float humidity, float pressure);

    // 其他方法
    int getobserversize() {
        return observers.size();
    }
};
}

#endif

