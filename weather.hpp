#pragma once

#include <iostream>

using namespace std;

class Weather {
private:
public:
	string city; //  Киров
	double lat; // 58.5966
	double lon; // 49.6601
	double temperature; // 5.69
	string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100

	const Weather(string city, double lat, double lon, double temperature, string weather, double windSpeed, int clouds);

	void Print();
};