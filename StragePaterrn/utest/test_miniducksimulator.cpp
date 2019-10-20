//
// Created by qinliansong on 2019/10/13.
//

#include <gtest/gtest.h>

#include <memory>

#include "../duck/duck.h"
#include "../duck/mallardduck.h"
#include "../duck/redduck.h"

class DuckStragerTest : public testing::Test {
public:
    void init() {
        mallarduck->display();
        mallarduck->performFly();
        mallarduck->performQuack();

        redduck->display();
        redduck->performFly();
        redduck->performQuack();

    }

private:
    std::unique_ptr<BaseDuck> mallarduck(new MallardDuck);
    std::unique_ptr<BaseDuck> redduck(new RedDuck);
};

TEST_F(DuckStragerTest, test_duck_starge) {
    init();
}


int main(int argc, char* argv[]) {
    duck::init();
    return 0;
}

