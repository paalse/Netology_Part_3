#pragma once
#include <string>
#include "Vehicle.h"

#ifdef RICESIMULATORLIB_EXPORTS
#define RICESIMULATORLIB_API __declspec(dllexport)
#else
#define RICESIMULATORLIB_API __declspec(dllimport)
#endif

// Класс воздушного транспортного средства
class AirVehicle : public Vehicle {
	public:
		RICESIMULATORLIB_API AirVehicle(int speed);
	
		RICESIMULATORLIB_API std::string getType() override;

		RICESIMULATORLIB_API std::string getParentType() override;
	
		// Вычисление коэффициента уменьшения расстояния
		RICESIMULATORLIB_API virtual double getDistanceReductionRatio(double distanceLength);
};