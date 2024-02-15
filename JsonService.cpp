#include "JsonService.hpp"

Weather JsonService::getWeather(string fileName) {
    ifstream fin(fileName);

    if (!fin) throw exception("error");

    json j;
    j = json::parse(fin);

    string city = j["name"];
    double lat = j["coord"]["lat"];
    double lon = j["coord"]["lon"];
    double temperature = j["main"]["temp"];
    string weather = j["weather"][0]["description"];
    double windSpeed = j["wind"]["speed"];
    int clouds = j["clouds"]["all"];

    return Weather(city, lat, lon, temperature, weather, windSpeed, clouds);
}