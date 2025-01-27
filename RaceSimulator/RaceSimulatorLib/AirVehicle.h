#pragma once
#include <string>
#include "Vehicle.h"
#include "spec.h"

// Класс воздушного транспортного средства
class AirVehicle : public Vehicle {
	public:
		RACESIMULATORLIB_API AirVehicle(int speed);
	
		RACESIMULATORLIB_API std::string getType() override;

		RACESIMULATORLIB_API std::string getParentType() override;
	
		// Вычисление коэффициента уменьшения расстояния
		RACESIMULATORLIB_API virtual double getDistanceReductionRatio(double distanceLength);
};