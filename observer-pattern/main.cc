#include "subject/weather_data.h"

#include "observer/current_conditions_display.h"

int main() {
	auto weather_data = std::make_shared<WeatherData>();
	auto currentDisplay = std::make_shared<CurrentConditionsDisplay>(weather_data);
	weather_data->registerObserver(currentDisplay);

        weather_data->setMeasurements(80, 65, 30.4f);
	weather_data->setMeasurements(82, 70, 29.2f);
	weather_data->setMeasurements(78, 90, 29.2f);

	return 0;	
}