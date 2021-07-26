#pragma once

#include <memory>
#include <string>

class Amp;
class Dvd;
class Lights;
class Popper;
class Projector;
class Screen;

// 此处定义家庭影院外观模式
// 注意：本代码未实现popper,projector, lights
// 若想加上这三个类，需要自己实现即可，本部分仅仅用作实验
class HomeTheatherFacade {
private:
  std::shared_ptr<Amp> amp_{};
  std::shared_ptr<Dvd> dvd_{};
  std::shared_ptr<Screen> screen_{};
  std::shared_ptr<Lights> lights_{};
  std::shared_ptr<Popper> popper_{};
  std::shared_ptr<Projector> projector_{};

public:
  HomeTheatherFacade(
	  std::shared_ptr<Amp> amp,
	  std::shared_ptr<Dvd> dvd,
	  std::shared_ptr<Screen> screen,
	  std::shared_ptr<Lights> lights = nullptr,
	  std::shared_ptr<Popper> popper = nullptr,
	  std::shared_ptr<Projector> projector = nullptr
  );

  void watchMovie(const std::string_view movie);
  void endMovie();
  
};