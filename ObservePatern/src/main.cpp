#include "display/currentconditiondisplay.h"
#include "displayelement/displayelement.h"
#include "display/forecastdisplay.h"
#include "display/statisticsdisply.h"

#include "observe/observer.h"
#include "subject/subject.h"
#include "weatherdata/weatherdata.h"

int main() {
    std::unique_ptr<observer_patern::WeatherData> weatherData(new observer_patern::WeatherData);

    observer_patern::CurrentConditionDisplay currentDisplay(&weatherData);
    observer_patern::ForeCastDisplay forecastDisplay(&weatherData);
    observer_patern::StatisticsDisplay statisticsDisplay(&weatherData);

    weatherData->setMeasureMents(80, 65, 30.5f);
    weatherData->setMeasureMents(82, 70, 29.2f);

    return 0;
}