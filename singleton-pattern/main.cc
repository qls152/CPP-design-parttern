#include "chocolate_boiler.h"

int main() {
	auto& boiler = ChocolateBoiler::getInstance();
        boiler.fill();
	boiler.boil();
	boiler.drain();
      
	return 0;	
}