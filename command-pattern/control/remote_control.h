#pragma once

#include <memory>
#include <vector>

// RemoteControl为HeadFirst中真正的遥控器
// SimpleRemoteControl可以理解为一个玩具遥控器

class Command;
class RemoteControl {
private:
  // 开命令
  std::vector<std::shared_ptr<Command>> on_commands_;
  // 关命令
  std::vector<std::shared_ptr<Command>> off_commands_;
  // 命令对象个数，参考HeadFirst，默认为7，提供自定义修改
  int capacity_{7};

public:
  RemoteControl();
  explicit RemoteControl(int capacity);
  void setCommand(int slot, std::shared_ptr<Command> on_command, std::shared_ptr<Command> off_command);
  void onButtonWasPressed(int slot);
  void offButtonWasPressed(int slot);

private:
  void init();
};