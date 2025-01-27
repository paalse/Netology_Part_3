#pragma once
#include <vector>
#include <string>
#include "GroundVehicle.h"
#include "spec.h"

// Класс Кентавр
class Centaur : public GroundVehicle {
public:
	RACESIMULATORLIB_API Centaur();

	RACESIMULATORLIB_API std::string getType() override;

	RACESIMULATORLIB_API std::string getParentType() override;
};