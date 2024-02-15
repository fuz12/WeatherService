#pragma once

#include <iostream>
#include <pugixml.hpp>
#include "Service.hpp"
#include "Weather.hpp"

using namespace std;
using namespace pugi;

class XmlService : public Service {
private:
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};