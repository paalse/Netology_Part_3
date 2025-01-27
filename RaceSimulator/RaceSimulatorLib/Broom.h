#pragma once
#include <vector>
#include <string>
#include "AirVehicle.h"
#include "spec.h"

// ����� �����
class Broom : public AirVehicle {
public:
	RACESIMULATORLIB_API Broom();

	RACESIMULATORLIB_API std::string getType() override;

	RACESIMULATORLIB_API std::string getParentType() override;

	// ���������� ������������ ���������� ����������
	RACESIMULATORLIB_API double getDistanceReductionRatio(double distanceLength) override;
};