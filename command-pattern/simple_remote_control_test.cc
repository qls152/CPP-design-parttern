#include "control/simple_remote_control.h"

#include "command/light_command.h"
#include "command/garge_door_command.h"

#include "slot/normal_light.h"
#include "slot/normal_garge_door.h"

// 此处进行简单遥控器的测试
int main() {
  SimpleRemoteControl simple_control;
  auto light = std::make_shared<NormalLight>();
  auto light_on = std::make_shared<LightCommand>(light);

  auto garge_door = std::make_shared<NormalGargeDoor>();
  auto garge_door_up = std::make_shared<GargeDoorCommand>(garge_door);

  simple_control.setCommand(light_on);
  simple_control.buttonWasPressed();

  simple_control.setCommand(garge_door_up);
  simple_control.buttonWasPressed();

  return 0;
}