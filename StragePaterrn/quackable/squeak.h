//
//
//
#include "quackable/quackbehavior.h"

namespace duck {
class Squeak : public QuackBehavior {
public:
    void quack() override;
    virtual ~Squeak() {}
};
}