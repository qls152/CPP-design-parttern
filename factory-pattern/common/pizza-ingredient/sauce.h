#pragma once

// 目录下定义pizza需要的原材料，为了方便，未实现HeadFirst中所有的原材料
// 仅仅实现相应的cheesh，dough，sauce

class Sauce {
public:
  virtual void printIngredientName() = 0;
};