#include "tools/turkey_adapter.h"
#include "tools/wild_turkey.h"

void test_duck(std::shared_ptr<Duck> duck) {
  duck->quack();
  duck->fly();
}

int main() {
  auto turkey = std::make_shared<WildTurkey>();
  auto turkey_adapter = std::make_shared<TurkeyAdapter>(turkey);

  test_duck(turkey_adapter);

  return 0;
}

