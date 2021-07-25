#include "command/garge_door_command.h"
#include "command/garge_door_off_command.h"
#include "command/light_command.h"
#include "command/lightoff_command.h"

#include "slot/normal_garge_door.h"
#include "slot/normal_light.h"
#include "control/remote_control.h"

int main() {
  RemoteControl remote_control;

  auto garge_door = std::make_shared<NormalGargeDoor>();
  auto light = std::make_shared<NormalLight>();
  
  // 创建所需要的命令对象
  // 此处并未全部实现HeadFirst中所有命令对象，只是因为创建过程均类似，所以两个足以起练习作用
  auto light_on_command = std::make_shared<LightCommand>(light);
  auto light_off_command = std::make_shared<LightOffCommand>(light);
  auto garge_door_down = std::make_shared<GargeDoorCommand>(garge_door);
  auto garge_door_up = std::make_shared<GargeDoorOffCommand>(garge_door);

  // 将相应的命令对象加载到相应的槽中
  remote_control.setCommand(0, light_on_command, light_off_command);
  remote_control.setCommand(1, garge_door_down, garge_door_up);

  // 一切准备就绪，按下相应按钮
  remote_control.onButtonWasPressed(0);
  remote_control.onButtonWasPressed(1);
  remote_control.offButtonWasPressed(0);
  remote_control.offButtonWasPressed(1);

  return 0;
}