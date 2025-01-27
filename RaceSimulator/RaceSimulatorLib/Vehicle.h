#pragma once
#include <string>
#include "spec.h"

// ����� ������������� ��������
class Vehicle {
	int speed;	// �������� ������������� ��������, ��/�
public:
	RACESIMULATORLIB_API Vehicle(int speed);

	RACESIMULATORLIB_API virtual std::string getType();

	RACESIMULATORLIB_API virtual std::string getParentType();

	RACESIMULATORLIB_API int getSpeed();
};