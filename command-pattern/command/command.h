#pragma once

// command目录下实现命令对象
// 该类为命令对象接口
class Command {
public:
  virtual ~Command() = default;
  virtual void execute() = 0;
};