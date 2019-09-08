//
//
//

#include "flyable/flybehavior.h"

namespace duck {
class FlyNoway : public FlyBehavior {
public:
    // FlyNoway(/* args */);
    void fly() override;
    virtual ~FlyNoway() {};
};
}