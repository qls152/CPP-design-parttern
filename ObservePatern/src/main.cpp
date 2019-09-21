#include "display/currentconditiondisplay.h"
#include "displayelement/displayelement.h"
#include "display/forecastdisplay.h"
#include "display/statisticsdisply.h"

#include "observe/observer.h"
#include "subject/subject.h"
#include "weatherdata/weatherdata.h"

int main() {
    // std::unique_ptr<observer_patern::WeatherData> weatherData(new observer_patern::WeatherData);
    observer_patern::WeatherData weatherData;
    observer_patern::CurrentConditionDisplay currentDisplay(&weatherData);
    observer_patern::ForeCastDisplay forecastDisplay(&weatherData);
    observer_patern::StatisticsDisplay statisticsDisplay(&weatherData);

    std::cout << "个数 ：" << weatherData.getobserversize() << std::endl;
    weatherData.setMeasureMents(80.0f, 65.0f, 30.5f);
    weatherData.setMeasureMents(82.0f, 70.1f, 29.2f);

    return 0;
}