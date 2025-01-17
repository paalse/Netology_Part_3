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
		system("cls"); // ������� �������

		// ������� ����������
		distanceLength = 0;
		tmpIn = 0;
		vehicleList.clear();
		resultRace.clear();

		// ����� ���� �����
		raceType = static_cast<RaceType>(selectRaceType());

		// ���� ������ ���������
		inputDistanceLength(distanceLength);

		// ����� �� (1) ��� ����� (2) ?
		do {
			if (selectVenicleOrStartRace(vehicleList.size()) == 1) {	

				// ����������� ������������ �������	
				selectVehicleOnRace(vehicleList, distanceLength, raceType);
			}
			else {
				// ������ ����� �����
				startRace(vehicleList, resultRace, distanceLength);
				break;
			}
		} while (1);

		// ����� �����������
		outputResult(resultRace);

		// ������� ������
/*		for (auto i_vehicle : vehicleList) {
			delete i_vehicle;
		}
*/
		for (int i = 0; i < vehicleList.size(); i++)
		{
			delete vehicleList[i];
		}


		// ����� �� (1) ��� ����� (2) ?
		if (endRace()) {
			break;
		}

	} while (1);
	return 0;
}