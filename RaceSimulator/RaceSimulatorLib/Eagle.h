#pragma once
#include <vector>
#include <string>
#include "AirVehicle.h"
#include "spec.h"

// Класс Орел
class Eagle : public AirVehicle {
public:
	RACESIMULATORLIB_API Eagle();

	RACESIMULATORLIB_API std::string getType() override;

	RACESIMULATORLIB_API std::string getParentType() override;

	// Вычисление коэффициента уменьшения расстояния
	RACESIMULATORLIB_API double getDistanceReductionRatio(double distanceLength) override;
};