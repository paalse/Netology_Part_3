#pragma once
#include <iostream>
#include <Windows.h>
#include <vector>
#include <map>
#include "Vehicle.h"
#include "GroundVehicle.h"
#include  "AirVehicle.h"

#ifdef RICESIMULATORLIB_EXPORTS
#define RICESIMULATORLIB_API __declspec(dllexport)
#else
#define RICESIMULATORLIB_API __declspec(dllimport)
#endif

RICESIMULATORLIB_API void startRace(std::vector<Vehicle*>& vehicleList, std::map<double, std::string>& resultRace, double& distanceLength);