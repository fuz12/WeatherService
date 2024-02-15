#include <iostream>
#include <locale>
#include "XmlService.hpp"

int main()
{
    std::locale::global(std::locale{ ".UTF-8" });
    std::cout.imbue(std::locale(""));

    XmlService xs;
    Weather w = xs.getWeather("xml_weather.xml");
    w.Print();
}