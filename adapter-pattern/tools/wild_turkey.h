#pragma once

#include "tools/turkey.h"

class WildTurkey : public Turkey {
public:
  virtual ~WildTurkey() = default;
  virtual void gobble() override;
  virtual void fly() override;
};