#include "material/normal_amp.h"
#include "material/normal_dvd.h"
#include "material/normal_screen.h"

#include "material/home_theather_facade.h"

int main() {
  auto amp = std::make_shared<NormalAmp>();
  auto dvd = std::make_shared<NormalDvd>();
  auto screen = std::make_shared<NormalScreen>();

  HomeTheatherFacade home_theather(amp, dvd, screen);

  home_theather.watchMovie("Hello world!");
  home_theather.endMovie();

  return 0;
}