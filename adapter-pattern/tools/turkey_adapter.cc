#include "tools/turkey_adapter.h"

#include "tools/turkey.h"

TurkeyAdapter::TurkeyAdapter(std::shared_ptr<Turkey> turkey) 
  : turkey_(std::move(turkey)) {}

// 现在实现接口中所有方法
void TurkeyAdapter::quack() {
	turkey_->gobble();
}

// 此处实现含义可参考HeadFirst中注释
void TurkeyAdapter::fly() {
  int fly_nums = 5;
  for(int start = 0; start < fly_nums; ++start) {
	  turkey_->fly();
  }
}
