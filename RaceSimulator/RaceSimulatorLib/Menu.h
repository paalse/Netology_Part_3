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

// Тип гонки
RICESIMULATORLIB_API enum RaceType { RaceGroundVehicle = 1, RaceAirVehicle, RaceGroundVehicleAndAirVehicle };

// Проверка наличия в списке элемента с определенным типом
RICESIMULATORLIB_API bool checkVehicleInList(std::string type, std::vector<Vehicle*> vehicleList);

// Выбор типа гонки
RICESIMULATORLIB_API int selectRaceType();

// Ввод длины дистанции
RICESIMULATORLIB_API void inputDistanceLength(double& distanceLength);

// Выбор ТС или начало гонки
RICESIMULATORLIB_API int selectVenicleOrStartRace(int numberOfRegisteredVehicles);


// Выбор транспортных средств для гонки
RICESIMULATORLIB_API void selectVehicleOnRace(std::vector<Vehicle*>& vehicleList, double& distanceLength, RaceType raceType);

// Вывод результатов на консоль
RICESIMULATORLIB_API void outputResult(std::map<double, std::string>& resultRace);

// Окончание гонки или повтор
RICESIMULATORLIB_API bool endRace();