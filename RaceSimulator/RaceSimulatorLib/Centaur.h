#pragma once
#include <vector>
#include <string>
#include "GroundVehicle.h"

#ifdef RACESIMULATORLIB_EXPORTS
#define RACESIMULATORLIB_API __declspec(dllexport)
#else
#define RACESIMULATORLIB_API __declspec(dllimport)
#endif

// Класс Кентавр
class Centaur : public GroundVehicle {
public:
	RACESIMULATORLIB_API Centaur();

	RACESIMULATORLIB_API std::string getType() override;

	RACESIMULATORLIB_API std::string getParentType() override;
};