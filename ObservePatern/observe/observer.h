//
// Qin liansong
// 所有的气象组件都实现观察者接口。这样当主题在需要通知
// 观察者时，有了一个共同的接口

#ifndef OBSERVERPATERN_OBSERVE_H
#define OBSERVERPATERN_OBSERVE_H

namespace observer_patern {
class Observer {
public:
    virtual ~Observer() {}
    // 当气象改变时，主题会把这些状态值当作方法的参数，发送给观察者
    virtual void update(float temp, float humidity, float pressure) = 0;
    
};
}
#endif