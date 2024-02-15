#pragma once

#include <iostream>
#include "weather.hpp"

using namespace std;

class Service {
private:
public:
	virtual Weather getWeather(std::string s) = 0;

	virtual ~Service() {};
};