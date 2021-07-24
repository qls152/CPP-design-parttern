#include "control/simple_remote_control.h"

#include "command/light_command.h"
#include "slot/normal_light.h"

// 此处进行简单遥控器的测试
int main() {
  SimpleRemoteControl simple_control;
  auto light = std::make_shared<NormalLight>();
  auto light_on = std::make_shared<LightCommand>(light);

  simple_control.setCommand(light_on);
  simple_control.buttonWasPressed();

  return 0;
}