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

// Тип гонки
enum RaceType { RaceGroundVehicle = 1, RaceAirVehicle, RaceGroundVehicleAndAirVehicle };

// Проверка наличия в списке элемента с определенным типом
RACESIMULATORLIB_API bool checkVehicleInList(std::string type, std::vector<Vehicle*> vehicleList);

// Выбор типа гонки
RACESIMULATORLIB_API int selectRaceType();

// Ввод длины дистанции
RACESIMULATORLIB_API void inputDistanceLength(double& distanceLength);

// Выбор ТС или начало гонки
RACESIMULATORLIB_API int selectVenicleOrStartRace(int numberOfRegisteredVehicles);


// Выбор транспортных средств для гонки
RACESIMULATORLIB_API void selectVehicleOnRace(std::vector<Vehicle*>& vehicleList, double& distanceLength, RaceType raceType);

// Вывод результатов на консоль
RACESIMULATORLIB_API void outputResult(std::map<double, std::string>& resultRace);

// Окончание гонки или повтор
RACESIMULATORLIB_API bool endRace();