#include "material/dvd.h"

class NormalDvd : public Dvd {
public:
  virtual ~NormalDvd() = default;
  virtual void on() override;
  virtual void play(const std::string_view movie) override;
  virtual void stop() override;
  virtual void eject() override;
  virtual void off() override;
};