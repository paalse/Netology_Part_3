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

#ifdef RACESIMULATORLIB_EXPORTS
#define RACESIMULATORLIB_API __declspec(dllexport)
#else
#define RACESIMULATORLIB_API __declspec(dllimport)
#endif

// ��� �����
enum RaceType { RaceGroundVehicle = 1, RaceAirVehicle, RaceGroundVehicleAndAirVehicle };

// �������� ������� � ������ �������� � ������������ �����
RACESIMULATORLIB_API bool checkVehicleInList(std::string type, std::vector<Vehicle*> vehicleList);

// ����� ���� �����
RACESIMULATORLIB_API int selectRaceType();

// ���� ����� ���������
RACESIMULATORLIB_API void inputDistanceLength(double& distanceLength);

// ����� �� ��� ������ �����
RACESIMULATORLIB_API int selectVenicleOrStartRace(int numberOfRegisteredVehicles);


// ����� ������������ ������� ��� �����
RACESIMULATORLIB_API void selectVehicleOnRace(std::vector<Vehicle*>& vehicleList, double& distanceLength, RaceType raceType);

// ����� ����������� �� �������
RACESIMULATORLIB_API void outputResult(std::map<double, std::string>& resultRace);

// ��������� ����� ��� ������
RACESIMULATORLIB_API bool endRace();