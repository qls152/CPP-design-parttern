#include "duck/mallard_duck.h"

int main() {
  std::shared_ptr<Duck> mallard = std::make_shared<MallardDuck>();
  mallard->display();
  mallard->performFly();
  mallard->performQuack();

  return 0;
}