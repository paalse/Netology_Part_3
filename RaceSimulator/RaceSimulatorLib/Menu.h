#pragma once
#include <iostream>
#include <Windows.h>
#include <vector>
#include <map>
#include "Vehicle.h"
#include "Camel.h"
#include "CamelFastSpeed.h"
#include "Centaur.h"
#include "AllTerrainBoots.h"
#include "MagicCarpet.h"
#include "Eagle.h"
#include "Broom.h"

#ifdef RICESIMULATORLIB_EXPORTS
#define RICESIMULATORLIB_API __declspec(dllexport)
#else
#define RICESIMULATORLIB_API __declspec(dllimport)
#endif

// ��� �����
RICESIMULATORLIB_API enum RaceType { RaceGroundVehicle = 1, RaceAirVehicle, RaceGroundVehicleAndAirVehicle };

// �������� ������� � ������ �������� � ������������ �����
RICESIMULATORLIB_API bool checkVehicleInList(std::string type, std::vector<Vehicle*> vehicleList);

// ����� ���� �����
RICESIMULATORLIB_API int selectRaceType();

// ���� ����� ���������
RICESIMULATORLIB_API void inputDistanceLength(double& distanceLength);

// ����� �� ��� ������ �����
RICESIMULATORLIB_API int selectVenicleOrStartRace(int numberOfRegisteredVehicles);


// ����� ������������ ������� ��� �����
RICESIMULATORLIB_API void selectVehicleOnRace(std::vector<Vehicle*>& vehicleList, double& distanceLength, RaceType raceType);

// ����� ����������� �� �������
RICESIMULATORLIB_API void outputResult(std::map<double, std::string>& resultRace);

// ��������� ����� ��� ������
RICESIMULATORLIB_API bool endRace();