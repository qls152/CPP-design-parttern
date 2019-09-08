//
// Author: qinliansong
//
// 主函数，进行测试
#include "duck/duck.h"
#include "duck/mallardduck.h"
#include "duck/redduck.h"

namespace duck {

void init() {
    MallardDuck mallarduck;
    RedDuck redduck;

    mallarduck.quack();
    redduck.quack();

}
}

int main(int argc, char* argv[]) {
     duck::init();
     return 0;
}