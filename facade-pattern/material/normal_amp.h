#include "material/amp.h"

class NormalAmp : public Amp {
private:
  std::shared_ptr<Dvd> dvd_{};
public:
  virtual ~NormalAmp() = default;
  virtual void setDvd(std::shared_ptr<Dvd> dvd) override;
  virtual void setVolume(int nums) override;
  virtual void setSurroundSound() override;
  virtual void off() override;
  virtual void on() override;
};