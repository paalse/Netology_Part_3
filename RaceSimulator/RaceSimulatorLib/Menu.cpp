#include <iostream>
#include <limits> // для использования numeric_limits - числовых пределов
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


// Выбор типа гонки
int selectRaceType() {
	int tmpIn;

	std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
	std::cout << "1. Гонка наземного тренспорта" << std::endl;
	std::cout << "2. Гонка воздушного тренспорта" << std::endl;
	std::cout << "3. Гонка наземного и воздушного тренспорта" << std::endl;
	
	std::cout << "Выберите тип гонки (1-3): ";
	std::cin >> tmpIn;
	while (std::cin.fail() || tmpIn < 1 || tmpIn > 3)
	{
		std::cin.clear();
		std::cin.ignore(1, '\n');
		std::cout << "Выберите тип гонки (1-3): ";
		std::cin >> tmpIn;
	}
	return tmpIn;
}



// Ввод длины дистанции
void inputDistanceLength(double& distanceLength) {

	system("cls"); // Очистка консоли

	do {
		std::cout << "Укажите длину дистанции (должна быть положительна), км: ";
		std::cin >> distanceLength;

		if (std::cin.fail() || distanceLength <= 0) {
			std::cin.clear();
			std::cin.ignore(1, '\n');
			system("cls"); // Очистка консоли
			std::cout << "Не корректная длина дистанции!" << std::endl;
		}
		else {
			break;
		}
	} while (1);
}

// Выбор ТС или начало гонки
int selectVenicleOrStartRace(int numberOfRegisteredVehicles) {
	int tmpIn = 0;
	
	system("cls"); // Очистка консоли
	std::cout << "Должно быть зарегистрировано хотябы 2 транспортных средства" << std::endl;
	std::cout << "1. Зарегистрировать транспорт" << std::endl;
	if (numberOfRegisteredVehicles > 0) {
		std::cout << "2. Начать гонку" << std::endl;
	}
	while (std::cin.fail() || tmpIn < 1 || tmpIn > 2)
	{
		std::cin.clear();
		std::cin.ignore(1, '\n');
		std::cout << "Выберите действие: ";
		std::cin >> tmpIn;
	}
	return tmpIn;
}


// Выбор транспортных средств для гонки
void selectVehicleOnRace(std::vector<Vehicle*>& vehicleList, double& distanceLength, RaceType raceType) {
	int tmpIn;

	do {
		system("cls"); // Очистка консоли

		std::cout << "Гонка ";
		switch (raceType) {
		case RaceGroundVehicle: std::cout << "наземного";
			break;
		case RaceAirVehicle: std::cout << "воздушного";
			break;
		case RaceGroundVehicleAndAirVehicle: std::cout << "наземного и воздушного";
			break;
		}
		std::cout << " транспорта. Расстояние: " << distanceLength << std::endl;

		if (vehicleList.size() != 0) {
			std::cout << "Зарегистированы на гонку: ";
			for (auto vehicle : vehicleList) {
				std::cout << vehicle->getType() << " ";
			}
			std::cout << std::endl;
		}

		std::cout << "1. Верблюд" << std::endl;
		std::cout << "2. Верблюд-быстроход" << std::endl;
		std::cout << "3. Кентавр" << std::endl;
		std::cout << "4. Ботинки-вездеходы" << std::endl;
		std::cout << "5. Ковёр-самолёт" << std::endl;
		std::cout << "6. Орёл" << std::endl;
		std::cout << "7. Метла" << std::endl;
		std::cout << "0. Закончить регистрацию" << std::endl;
		std::cout << "Выберите транспорт (1-7) или 0 для окончания процесса регистрации: ";
		std::cin >> tmpIn;

		while (std::cin.fail() || tmpIn < 0 || tmpIn > 7)
		{
			std::cin.clear();
			std::cin.ignore(1, '\n');
			std::cout << "Выберите транспорт (1-7) или 0 для окончания процесса регистрации: ";
			std::cin >> tmpIn;
		}

		switch (tmpIn) {
		case 0:
			break;
		case 1:
			if (!checkVehicleInList("Верблюд", vehicleList) && (raceType == RaceGroundVehicle || raceType == RaceGroundVehicleAndAirVehicle)) {
				vehicleList.push_back(new Camel());
			}
			break;
		case 2:
			if (!checkVehicleInList("Верблюд-быстроход", vehicleList) && (raceType == RaceGroundVehicle || raceType == RaceGroundVehicleAndAirVehicle)) {
				vehicleList.push_back(new CamelFastSpeed());
			}
			break;
		case 3:
			if (!checkVehicleInList("Кентавр", vehicleList) && (raceType == RaceGroundVehicle || raceType == RaceGroundVehicleAndAirVehicle)) {
				vehicleList.push_back(new Centaur());
			}
			break;
		case 4:
			if (!checkVehicleInList("Ботинки-вездеходы", vehicleList) && (raceType == RaceGroundVehicle || raceType == RaceGroundVehicleAndAirVehicle)) {
				vehicleList.push_back(new AllTerrainBoots());
			}
			break;
		case 5:
			if (!checkVehicleInList("Ковёр-самолёт", vehicleList) && (raceType == RaceAirVehicle || raceType == RaceGroundVehicleAndAirVehicle)) {
				vehicleList.push_back(new MagicCarpet());
			}
			break;
		case 6:
			if (!checkVehicleInList("Орёл", vehicleList) && (raceType == RaceAirVehicle || raceType == RaceGroundVehicleAndAirVehicle)) {
				vehicleList.push_back(new Eagle());
			}
			break;
		case 7:
			if (!checkVehicleInList("Метла", vehicleList) && (raceType == RaceAirVehicle || raceType == RaceGroundVehicleAndAirVehicle)) {
				vehicleList.push_back(new Broom());
			}
			break;
		default:
			break;
		}
	} while (tmpIn != 0 || vehicleList.size() < 2);
}

// Вывод результатов на консоль
void outputResult(std::map<double, std::string>& resultRace) {
	system("cls"); // Очистка консоли
	std::cout << "Результаты гонки:" << std::endl;
	int j = 1;
	for (auto i_resultRace : resultRace) {
		std::cout << j << ". " << i_resultRace.second << ". Время: " << i_resultRace.first << std::endl;
		j++;
	}
}

// Окончание гонки или повтор
bool endRace() {
	int tmpIn = 0;
	std::cout << std::endl;
	std::cout << "1. Провести еще одну гонку" << std::endl;
	std::cout << "2. Выйти" << std::endl;

	do {
		std::cout << "Выберите действие: ";
		std::cin.clear();
		std::cin.ignore(1, '\n');
		std::cin >> tmpIn;
	} while (std::cin.fail() || tmpIn < 1 || tmpIn >2);
	return (tmpIn == 2 ? true : false);
}