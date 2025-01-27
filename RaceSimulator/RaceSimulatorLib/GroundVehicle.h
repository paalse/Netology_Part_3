#pragma once
#include <vector>
#include <string>
#include "Vehicle.h"
#include "spec.h"

// ����� ��������� ������������� ��������
class GroundVehicle : public Vehicle {
	int drivingTimeWithoutRest;				//����� �������� ��� ������, ���
	std::vector<double>  durationOfRest;	// ������������ ������ �� ������ ����������, ���
public:
	RACESIMULATORLIB_API GroundVehicle(int speed, int drivingTimeWithoutRest, std::vector<double> durationOfRest);

	RACESIMULATORLIB_API std::string getType() override;

	RACESIMULATORLIB_API std::string getParentType() override;

	RACESIMULATORLIB_API int getDrivingTimeWithoutRest();

	RACESIMULATORLIB_API std::vector<double> getDurationOfRest();

	RACESIMULATORLIB_API double getDurationOfRest(int index);
};