#include "XmlService.hpp"

Weather XmlService::getWeather(string fileName) {
    xml_document doc;
    xml_parse_result result = doc.load_file(fileName.c_str());

    if (!result) throw exception("error");

    xml_node node = doc.child("current");

    string city = node.child("city").attribute("name").as_string();
    double lat = node.child("city").child("coord").attribute("lat").as_double();
    double lon = node.child("city").child("coord").attribute("lon").as_double();
    double temperature = node.child("temperature").attribute("value").as_double();
    string weather = node.child("weather").attribute("value").as_string();
    double windSpeed = node.child("wind").child("speed").attribute("value").as_double();
    int clouds = node.child("clouds").attribute("value").as_int();

    return Weather(city, lat, lon, temperature, weather, windSpeed, clouds);

}