#pragma once
#include <string>
#include "Vehicle.h"

#ifdef RICESIMULATORLIB_EXPORTS
#define RICESIMULATORLIB_API __declspec(dllexport)
#else
#define RICESIMULATORLIB_API __declspec(dllimport)
#endif

// ����� ���������� ������������� ��������
class AirVehicle : public Vehicle {
	public:
		RICESIMULATORLIB_API AirVehicle(int speed);
	
		RICESIMULATORLIB_API std::string getType() override;

		RICESIMULATORLIB_API std::string getParentType() override;
	
		// ���������� ������������ ���������� ����������
		RICESIMULATORLIB_API virtual double getDistanceReductionRatio(double distanceLength);
};