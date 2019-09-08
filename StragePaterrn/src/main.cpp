//
// Author: qinliansong
//
// 主函数，进行测试
#include <memory>

#include "duck/duck.h"
#include "duck/mallardduck.h"
#include "duck/redduck.h"

namespace duck {

void init() {
    std::unique_ptr<BaseDuck> mallarduck(new MallardDuck);
    std::unique_ptr<BaseDuck> redduck(new RedDuck);

    mallarduck->display();
    mallarduck->performFly();
    mallarduck->performQuack();

    redduck->display();
    redduck->performFly();
    redduck->performQuack();

}
}

int main(int argc, char* argv[]) {
     duck::init();
     return 0;
}