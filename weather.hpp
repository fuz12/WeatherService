#pragma once

#include <iostream>

using namespace std;

class Weather {
private:
public:
	string city;
	double lat;
	double lon;
	double temperature;
	string weather;
	double windSpeed;
	int clouds;

	const Weather(string city, double lat, double lon, double temperature, string weather, double windSpeed, int clouds);

	void Print();
};