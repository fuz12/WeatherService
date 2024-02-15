#include <iostream>
#include <locale>
#include "JsonService.hpp"
#include "XmlService.hpp"

void enableUtf8() {
    std::locale::global(std::locale{ ".UTF-8" });
    std::cout.imbue(std::locale(""));
}

void disableUtf8() {
    setlocale(LC_ALL, "C");
}

int main()
{
    enableUtf8();

    JsonService js;
    Weather weather = js.getWeather("json_weather.json");
    weather.Print();

    cout << endl;

    XmlService xs;
    disableUtf8();
    Weather w = xs.getWeather("xml_weather.xml");
    enableUtf8();
    w.Print();
}
