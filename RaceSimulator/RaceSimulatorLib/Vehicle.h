#pragma once
#include <string>

#ifdef RACESIMULATORLIB_EXPORTS
#define RACESIMULATORLIB_API __declspec(dllexport)
#else
#define RACESIMULATORLIB_API __declspec(dllimport)
#endif


// ����� ������������� ��������
class Vehicle {
	int speed;	// �������� ������������� ��������, ��/�
public:
	RACESIMULATORLIB_API Vehicle(int speed);

	RACESIMULATORLIB_API virtual std::string getType();

	RACESIMULATORLIB_API virtual std::string getParentType();

	RACESIMULATORLIB_API int getSpeed();
};