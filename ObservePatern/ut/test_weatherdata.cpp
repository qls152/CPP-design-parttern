//
// 单元测试
//
#include <gtest/gtest.h>
#include <memory>

#include "displayelement/displayelement.h"
#include "display/forecastdisplay.h"
#include "observe/observer.h"
#include "subject/subject.h"
#include "weatherdata/weatherdata.h"


TEST(TestWeatherData, HandleRegisterObserver) {

    std::unique_ptr<observer_patern::Subject> weatherData(new observer_patern::WeatherData());
    observer_patern::ForeCastDisplay forecastDisplay(&weatherData);

    EXPECT_EQ(1, weatherData->getobserversize());

    weatherData->setMeasureMents(80, 65, 30.5f);
    
}

int main(int argc, char **argv) {
    
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}