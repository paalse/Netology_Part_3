#pragma once
#include <string>
#include "Vehicle.h"
#include "spec.h"

// ����� ���������� ������������� ��������
class AirVehicle : public Vehicle {
	public:
		RACESIMULATORLIB_API AirVehicle(int speed);
	
		RACESIMULATORLIB_API std::string getType() override;

		RACESIMULATORLIB_API std::string getParentType() override;
	
		// ���������� ������������ ���������� ����������
		RACESIMULATORLIB_API virtual double getDistanceReductionRatio(double distanceLength);
};