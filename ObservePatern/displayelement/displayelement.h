//
// Author: qin liansong 
// 当需要显示，调用此方法

#ifndef OBSERVERPATERN_DISPLAYELEMENT_H
#define OBSERVERPATERN_DISPLAYELEMENT_H

namespace observer_patern {

class DisplayElement {
public:
    virtual ~DisplayElement() {}
    virtual void display() = 0;
};
}
#endif