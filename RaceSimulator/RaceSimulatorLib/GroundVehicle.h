#pragma once
#include <vector>
#include <string>
#include "Vehicle.h"

#ifdef RICESIMULATORLIB_EXPORTS
#define RICESIMULATORLIB_API __declspec(dllexport)
#else
#define RICESIMULATORLIB_API __declspec(dllimport)
#endif

// ����� ��������� ������������� ��������
class GroundVehicle : public Vehicle {
	int drivingTimeWithoutRest;				//����� �������� ��� ������, ���
	std::vector<double>  durationOfRest;	// ������������ ������ �� ������ ����������, ���
public:
	RICESIMULATORLIB_API GroundVehicle(int speed, int drivingTimeWithoutRest, std::vector<double> durationOfRest);

	RICESIMULATORLIB_API std::string getType() override;

	RICESIMULATORLIB_API std::string getParentType() override;

	RICESIMULATORLIB_API int getDrivingTimeWithoutRest();

	RICESIMULATORLIB_API std::vector<double> getDurationOfRest();

	RICESIMULATORLIB_API double getDurationOfRest(int index);
};