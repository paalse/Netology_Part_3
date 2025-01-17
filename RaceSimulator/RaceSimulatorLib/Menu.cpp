#include <iostream>
#include <limits> // ��� ������������� numeric_limits - �������� ��������
#include "Menu.h"

bool checkVehicleInList(std::string type, std::vector<Vehicle*> vehicleList) {
	bool result = false;
	if (vehicleList.size() != 0) {
		for (auto vehicle : vehicleList) {
			if (type == vehicle->getType()) {
				result = true;
				break;
			}
		}
	}
	return result;
}


// ����� ���� �����
int selectRaceType() {
	int tmpIn;

	std::cout << "����� ���������� � �������� ���������!" << std::endl;
	std::cout << "1. ����� ��������� ����������" << std::endl;
	std::cout << "2. ����� ���������� ����������" << std::endl;
	std::cout << "3. ����� ��������� � ���������� ����������" << std::endl;
	
	std::cout << "�������� ��� ����� (1-3): ";
	std::cin >> tmpIn;
	while (std::cin.fail() || tmpIn < 1 || tmpIn > 3)
	{
		std::cin.clear();
		std::cin.ignore(1, '\n');
		std::cout << "�������� ��� ����� (1-3): ";
		std::cin >> tmpIn;
	}
	return tmpIn;
}



// ���� ����� ���������
void inputDistanceLength(double& distanceLength) {

	system("cls"); // ������� �������

	do {
		std::cout << "������� ����� ��������� (������ ���� ������������), ��: ";
		std::cin >> distanceLength;

		if (std::cin.fail() || distanceLength <= 0) {
			std::cin.clear();
			std::cin.ignore(1, '\n');
			system("cls"); // ������� �������
			std::cout << "�� ���������� ����� ���������!" << std::endl;
		}
		else {
			break;
		}
	} while (1);
}

// ����� �� ��� ������ �����
int selectVenicleOrStartRace(int numberOfRegisteredVehicles) {
	int tmpIn = 0;
	
	system("cls"); // ������� �������
	std::cout << "������ ���� ���������������� ������ 2 ������������ ��������" << std::endl;
	std::cout << "1. ���������������� ���������" << std::endl;
	if (numberOfRegisteredVehicles > 0) {
		std::cout << "2. ������ �����" << std::endl;
	}
	while (std::cin.fail() || tmpIn < 1 || tmpIn > 2)
	{
		std::cin.clear();
		std::cin.ignore(1, '\n');
		std::cout << "�������� ��������: ";
		std::cin >> tmpIn;
	}
	return tmpIn;
}


// ����� ������������ ������� ��� �����
void selectVehicleOnRace(std::vector<Vehicle*>& vehicleList, double& distanceLength, RaceType raceType) {
	int tmpIn;

	do {
		system("cls"); // ������� �������

		std::cout << "����� ";
		switch (raceType) {
		case RaceGroundVehicle: std::cout << "���������";
			break;
		case RaceAirVehicle: std::cout << "����������";
			break;
		case RaceGroundVehicleAndAirVehicle: std::cout << "��������� � ����������";
			break;
		}
		std::cout << " ����������. ����������: " << distanceLength << std::endl;

		if (vehicleList.size() != 0) {
			std::cout << "��������������� �� �����: ";
			for (auto vehicle : vehicleList) {
				std::cout << vehicle->getType() << " ";
			}
			std::cout << std::endl;
		}

		std::cout << "1. �������" << std::endl;
		std::cout << "2. �������-���������" << std::endl;
		std::cout << "3. �������" << std::endl;
		std::cout << "4. �������-���������" << std::endl;
		std::cout << "5. ����-������" << std::endl;
		std::cout << "6. ���" << std::endl;
		std::cout << "7. �����" << std::endl;
		std::cout << "0. ��������� �����������" << std::endl;
		std::cout << "�������� ��������� (1-7) ��� 0 ��� ��������� �������� �����������: ";
		std::cin >> tmpIn;

		while (std::cin.fail() || tmpIn < 0 || tmpIn > 7)
		{
			std::cin.clear();
			std::cin.ignore(1, '\n');
			std::cout << "�������� ��������� (1-7) ��� 0 ��� ��������� �������� �����������: ";
			std::cin >> tmpIn;
		}

		switch (tmpIn) {
		case 0:
			break;
		case 1:
			if (!checkVehicleInList("�������", vehicleList) && (raceType == RaceGroundVehicle || raceType == RaceGroundVehicleAndAirVehicle)) {
				vehicleList.push_back(new Camel());
			}
			break;
		case 2:
			if (!checkVehicleInList("�������-���������", vehicleList) && (raceType == RaceGroundVehicle || raceType == RaceGroundVehicleAndAirVehicle)) {
				vehicleList.push_back(new CamelFastSpeed());
			}
			break;
		case 3:
			if (!checkVehicleInList("�������", vehicleList) && (raceType == RaceGroundVehicle || raceType == RaceGroundVehicleAndAirVehicle)) {
				vehicleList.push_back(new Centaur());
			}
			break;
		case 4:
			if (!checkVehicleInList("�������-���������", vehicleList) && (raceType == RaceGroundVehicle || raceType == RaceGroundVehicleAndAirVehicle)) {
				vehicleList.push_back(new AllTerrainBoots());
			}
			break;
		case 5:
			if (!checkVehicleInList("����-������", vehicleList) && (raceType == RaceAirVehicle || raceType == RaceGroundVehicleAndAirVehicle)) {
				vehicleList.push_back(new MagicCarpet());
			}
			break;
		case 6:
			if (!checkVehicleInList("���", vehicleList) && (raceType == RaceAirVehicle || raceType == RaceGroundVehicleAndAirVehicle)) {
				vehicleList.push_back(new Eagle());
			}
			break;
		case 7:
			if (!checkVehicleInList("�����", vehicleList) && (raceType == RaceAirVehicle || raceType == RaceGroundVehicleAndAirVehicle)) {
				vehicleList.push_back(new Broom());
			}
			break;
		default:
			break;
		}
	} while (tmpIn != 0 || vehicleList.size() < 2);
}

// ����� ����������� �� �������
void outputResult(std::map<double, std::string>& resultRace) {
	system("cls"); // ������� �������
	std::cout << "���������� �����:" << std::endl;
	int j = 1;
	for (auto i_resultRace : resultRace) {
		std::cout << j << ". " << i_resultRace.second << ". �����: " << i_resultRace.first << std::endl;
		j++;
	}
}

// ��������� ����� ��� ������
bool endRace() {
	int tmpIn = 0;
	std::cout << std::endl;
	std::cout << "1. �������� ��� ���� �����" << std::endl;
	std::cout << "2. �����" << std::endl;

	do {
		std::cout << "�������� ��������: ";
		std::cin.clear();
		std::cin.ignore(1, '\n');
		std::cin >> tmpIn;
	} while (std::cin.fail() || tmpIn < 1 || tmpIn >2);
	return (tmpIn == 2 ? true : false);
}