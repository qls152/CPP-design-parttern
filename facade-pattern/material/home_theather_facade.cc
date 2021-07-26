#include "material/amp.h"
#include "material/dvd.h"
#include "material/lights.h"
#include "material/popper.h"
#include "material/projector.h"
#include "material/screen.h"

#include "material/home_theather_facade.h"

#include <iostream>

HomeTheatherFacade::HomeTheatherFacade(
    std::shared_ptr<Amp> amp,
	  std::shared_ptr<Dvd> dvd,
	  std::shared_ptr<Screen> screen,
	  std::shared_ptr<Lights> lights,
	  std::shared_ptr<Popper> popper,
	  std::shared_ptr<Projector> projector) 
  : amp_(std::move(amp)),
    dvd_(std::move(dvd)),
    screen_(std::move(screen)),
    lights_(std::move(lights)),
    popper_(std::move(popper)),
    projector_(std::move(projector)) {}

void HomeTheatherFacade::endMovie() {
  std::cout << "Shutting movie theather downing......\n";
  screen_->up();
  amp_->off();
  dvd_->eject();
  dvd_->stop();
  dvd_->off();
}

void HomeTheatherFacade::watchMovie(const std::string_view movie) {
  std::cout << "Get ready to watch a movie......\n";
  screen_->down();
  amp_->on();
  amp_->setDvd(dvd_);
  amp_->setSurroundSound();
  amp_->setVolume(5);
  dvd_->on();
  dvd_->play(movie);
}