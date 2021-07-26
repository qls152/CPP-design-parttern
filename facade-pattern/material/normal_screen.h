#include "material/screen.h"

class NormalScreen : public Screen {
public:
  virtual ~NormalScreen() = default;
  virtual void down() override;
  virtual void up() override;
};