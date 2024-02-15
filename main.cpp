#include <iostream>
#include <locale>
#include "JsonService.hpp"

int main()
{
    std::locale::global(std::locale{ ".UTF-8" });
    std::cout.imbue(std::locale(""));

    JsonService js;
    Weather weather = js.getWeather("json_weather.json");
    weather.Print();
}
