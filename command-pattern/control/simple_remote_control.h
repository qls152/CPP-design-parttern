#pragma once

#include <memory>

class Command;

// 此目录实现遥控器
// 从最简单的遥控器开始，假设该遥控器只有一个按钮和插槽，可以控制一个装备
class SimpleRemoteControl {
private:
  std::shared_ptr<Command> slot_{};
public:
  SimpleRemoteControl() = default;

  void setCommand(std::shared_ptr<Command> command);
  void buttonWasPressed();
};
