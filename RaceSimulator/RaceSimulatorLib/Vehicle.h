#pragma once
#include <string>
#include "spec.h"

// Класс транспортного средства
class Vehicle {
	int speed;	// Скорость транспортного средства, км/ч
public:
	RACESIMULATORLIB_API Vehicle(int speed);

	RACESIMULATORLIB_API virtual std::string getType();

	RACESIMULATORLIB_API virtual std::string getParentType();

	RACESIMULATORLIB_API int getSpeed();
};