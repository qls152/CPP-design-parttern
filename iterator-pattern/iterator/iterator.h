#pragma once

#include <memory>

class MenuItem;
// 此目录中定义迭代器接口
// 后续各个相应的迭代器实现该接口
class Iterator {
public:
  virtual ~Iterator() = default;
  virtual bool hasNext() = 0;
  virtual std::shared_ptr<MenuItem> next() = 0;
};