#pragma once
#include <iostream>
#include <Windows.h>
#include <vector>
#include <map>
#include "Vehicle.h"
#include "GroundVehicle.h"
#include  "AirVehicle.h"

#ifdef RACESIMULATORLIB_EXPORTS
#define RACESIMULATORLIB_API __declspec(dllexport)
#else
#define RACESIMULATORLIB_API __declspec(dllimport)
#endif

RACESIMULATORLIB_API void startRace(std::vector<Vehicle*>& vehicleList, std::map<double, std::string>& resultRace, double& distanceLength);