#include "mallard_duck.h"

#include "fly-behavior/fly_with_wings.h"
#include "quack-behavior/quack.h"

// 绿头鸭利用Quack类处理呱呱叫
// 使用FlyWithWings作为其FlyBehavior类型

MallardDuck::MallardDuck()
  : Duck(std::make_shared<FlyWithWings>(), std::make_shared<Quack>()) {

}

void MallardDuck::display() {
  std::cout << "I am a real Mallard duck\n";	
}
