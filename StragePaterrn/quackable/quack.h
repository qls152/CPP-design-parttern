//
//
//

#include "quackable/quackbehavior.h"

namespace duck {
class Quack : public QuackBehavior {
public:
    void quack() override;
    virtual ~Quack() {}
};
}