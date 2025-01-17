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
#include "Menu.h"
#include "Race.h"


int main()
{
	setlocale(LC_ALL, "RUS");

	RaceType raceType = RaceGroundVehicle;
	double distanceLength;
	int tmpIn;
	std::vector<Vehicle*> vehicleList = {};
	std::map<double, std::string> resultRace = {};


	do {
		system("cls"); // Очистка консоли

		// Очистка переменных
		distanceLength = 0;
		tmpIn = 0;
		vehicleList.clear();
		resultRace.clear();

		// Выбор типа гонки
		raceType = static_cast<RaceType>(selectRaceType());

		// Ввод длинны дистанции
		inputDistanceLength(distanceLength);

		// Выбор ТС (1) или гонка (2) ?
		do {
			if (selectVenicleOrStartRace(vehicleList.size()) == 1) {	

				// Регистрация транспортных средств	
				selectVehicleOnRace(vehicleList, distanceLength, raceType);
			}
			else {
				// Запуск гонки Гонка
				startRace(vehicleList, resultRace, distanceLength);
				break;
			}
		} while (1);

		// Вывод результатов
		outputResult(resultRace);

		// Очистка памяти
/*		for (auto i_vehicle : vehicleList) {
			delete i_vehicle;
		}
*/
		for (int i = 0; i < vehicleList.size(); i++)
		{
			delete vehicleList[i];
		}


		// Выбор ТС (1) или гонка (2) ?
		if (endRace()) {
			break;
		}

	} while (1);
	return 0;
}