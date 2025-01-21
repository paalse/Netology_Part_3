#pragma once
#include <vector>
#include <string>
#include "Vehicle.h"

#ifdef RACESIMULATORLIB_EXPORTS
#define RACESIMULATORLIB_API __declspec(dllexport)
#else
#define RACESIMULATORLIB_API __declspec(dllimport)
#endif

// Класс наземного транспортного средства
class GroundVehicle : public Vehicle {
	int drivingTimeWithoutRest;				//Время движения без отдыха, час
	std::vector<double>  durationOfRest;	// длительность отдыха на разных остановках, час
public:
	RACESIMULATORLIB_API GroundVehicle(int speed, int drivingTimeWithoutRest, std::vector<double> durationOfRest);

	RACESIMULATORLIB_API std::string getType() override;

	RACESIMULATORLIB_API std::string getParentType() override;

	RACESIMULATORLIB_API int getDrivingTimeWithoutRest();

	RACESIMULATORLIB_API std::vector<double> getDurationOfRest();

	RACESIMULATORLIB_API double getDurationOfRest(int index);
};