#include "control/simple_remote_control.h"

#include "command/command.h"

void SimpleRemoteControl::setCommand(std::shared_ptr<Command> command) {
  slot_ = std::move(command);
}

void SimpleRemoteControl::buttonWasPressed() {
  slot_->execute();
}
