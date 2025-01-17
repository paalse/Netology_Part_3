#pragma once
#include <string>

#ifdef RICESIMULATORLIB_EXPORTS
#define RICESIMULATORLIB_API __declspec(dllexport)
#else
#define RICESIMULATORLIB_API __declspec(dllimport)
#endif


// Класс транспортного средства
class Vehicle {
	int speed;	// Скорость транспортного средства, км/ч
public:
	RICESIMULATORLIB_API Vehicle(int speed);

	RICESIMULATORLIB_API virtual std::string getType();

	RICESIMULATORLIB_API virtual std::string getParentType();

	RICESIMULATORLIB_API int getSpeed();
};