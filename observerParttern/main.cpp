#include "currentconditiondisplay.h"
#include "forecastdisplay.h"
#include "statisticsdisplay.h"
#include "weatherdata.h"

int main() {

    std::shared_ptr<Subject> subject(new WeatherData);
    Data data;
    CurrentConditionDisplay currentConditionDisplay(subject, data);
    currentConditionDisplay.init();

    ForecastDisplay forecastDisplay(subject, data);
    forecastDisplay.init();

    StatisticsDisplay statisticsDisplay(subject, data);
    statisticsDisplay.init();

    data.humidity = 1.0f;
    data.temp = 2.0f;
    data.pressure = 3.0f;

    auto weather_data = static_cast<WeatherData*>(subject.get());
    std::cout << "observer 个数：" << weather_data->getObserveSize() << std::endl;
    weather_data->setMeasureMents(data);

    data.humidity = 4.0f;
    data.pressure = 5.0f;
    data.temp = 9.0f;
    weather_data->setMeasureMents(data);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}