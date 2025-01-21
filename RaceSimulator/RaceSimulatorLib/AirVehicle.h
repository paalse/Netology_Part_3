#pragma once
#include <string>
#include "Vehicle.h"

#ifdef RACESIMULATORLIB_EXPORTS
#define RACESIMULATORLIB_API __declspec(dllexport)
#else
#define RACESIMULATORLIB_API __declspec(dllimport)
#endif

// Класс воздушного транспортного средства
class AirVehicle : public Vehicle {
	public:
		RACESIMULATORLIB_API AirVehicle(int speed);
	
		RACESIMULATORLIB_API std::string getType() override;

		RACESIMULATORLIB_API std::string getParentType() override;
	
		// Вычисление коэффициента уменьшения расстояния
		RACESIMULATORLIB_API virtual double getDistanceReductionRatio(double distanceLength);
};