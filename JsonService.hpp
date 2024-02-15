#pragma once

#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
#include "Service.hpp"

using nlohmann::json;
using namespace std;

class JsonService :public Service
{
public:
	virtual Weather getWeather(string fileName) override;

	virtual ~JsonService() {};
};
