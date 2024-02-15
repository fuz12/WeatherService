#include "weather.hpp"

Weather::Weather(string city, double lat, double lon, double temperature, string weather, double windSpeed, int clouds) {
	this->city = city;
	this->lat = lat;
	this->lon = lon;
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
}

void Weather::Print() {
	cout << "City: " << city << endl;
	cout << "latitude: " << lat << " longitude: " << lon << endl;
	cout << "Temperature: " << temperature << endl;
	cout << "Weather: " << weather << endl;
	cout << "Wind speed: " << windSpeed << endl;
	cout << "Clouds: " << clouds << endl;
}
