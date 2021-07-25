#include "control/remote_control.h"

#include "command/command.h"
#include "command/no_command.h"

#include <algorithm>

RemoteControl::RemoteControl() {
  init();
}

RemoteControl::RemoteControl(int capacity) : capacity_(capacity) {
  init();	
}

void RemoteControl::setCommand(int slot, std::shared_ptr<Command> on_command, std::shared_ptr<Command> off_command) {
  if (slot < capacity_) return;
  on_commands_[slot] = on_command;
  off_commands_[slot] = off_command;
}

void RemoteControl::onButtonWasPressed(int slot) {
  if (slot < capacity_) return;
  on_commands_[slot]->execute();
}

void RemoteControl::offButtonWasPressed(int slot) {
  if (slot < capacity_) return;
  off_commands_[slot]->execute();	
}

void RemoteControl::init() {
  on_commands_.resize(capacity_);
  off_commands_.resize(capacity_);
  std::for_each(on_commands_.begin(), on_commands_.end(), [](auto& iter) {
	  iter = std::make_shared<NoCommand>();
  });
  std::for_each(off_commands_.begin(), off_commands_.end(), [](auto& iter) {
	  iter = std::make_shared<NoCommand>();
  });
}


