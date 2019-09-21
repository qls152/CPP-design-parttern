//
// Author: Qin liansong
// 主题接口

#include <memory>
#include "observe/observer.h"

#ifndef OBSERVERPATERN_SUBJECT_H
#define OBSERVERPATERN_SUBJECT_H

namespace observer_patern {
class Subject {
public:
    typedef observer_patern::Observer* observer;
public:
    virtual ~Subject() {}
    // 这两个方法需要观察者作为变量
    virtual void registerObserver(const observer o)  = 0;
    virtual void removeObserver(const observer o)  = 0;
    // 当主题改变时，该方法会被调用，以通知所有观察者
    virtual void notifyObservers()  = 0;
};
}

#endif
