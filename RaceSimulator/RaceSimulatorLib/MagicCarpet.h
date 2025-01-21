#pragma once
#include <vector>
#include <string>
#include "AirVehicle.h"

#ifdef RACESIMULATORLIB_EXPORTS
#define RACESIMULATORLIB_API __declspec(dllexport)
#else
#define RACESIMULATORLIB_API __declspec(dllimport)
#endif

// Класс Ковер-самолет
class MagicCarpet : public AirVehicle {
public:
	RACESIMULATORLIB_API MagicCarpet();

	RACESIMULATORLIB_API std::string getType() override;

	RACESIMULATORLIB_API std::string getParentType() override;

	// Вычисление коэффициента уменьшения расстояния
	RACESIMULATORLIB_API double getDistanceReductionRatio(double distanceLength) override;
};