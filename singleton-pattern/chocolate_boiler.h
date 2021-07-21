#pragma once

// 本部分实现单例ChocolateBoiler

class  ChocolateBoiler {
public:
  void fill();
  void drain();
  void boil();
  const bool empty() const;
  const bool is_boiled() const;

  static ChocolateBoiler& getInstance();

  ChocolateBoiler(const ChocolateBoiler&) = delete;
  ChocolateBoiler operator=(const ChocolateBoiler&) = delete;
  ChocolateBoiler(ChocolateBoiler&&) = delete;
  ChocolateBoiler&& operator=(ChocolateBoiler&&) = delete;

private:
  ChocolateBoiler();
  
  // 一开始锅炉是空的
  bool empty_{true};
  bool boil_{false};
};
