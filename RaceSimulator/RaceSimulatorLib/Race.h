#pragma once
#include <iostream>
#include <Windows.h>
#include <vector>
#include <map>
#include "Vehicle.h"
#include "GroundVehicle.h"
#include  "AirVehicle.h"
#include "spec.h"

RACESIMULATORLIB_API void startRace(std::vector<Vehicle*>& vehicleList, std::map<double, std::string>& resultRace, double& distanceLength);