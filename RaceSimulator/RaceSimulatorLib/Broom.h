#pragma once
#include <vector>
#include <string>
#include "AirVehicle.h"

#ifdef RICESIMULATORLIB_EXPORTS
#define RICESIMULATORLIB_API __declspec(dllexport)
#else
#define RICESIMULATORLIB_API __declspec(dllimport)
#endif

// ����� �����
class Broom : public AirVehicle {
public:
	RICESIMULATORLIB_API Broom();

	RICESIMULATORLIB_API std::string getType() override;

	RICESIMULATORLIB_API std::string getParentType() override;

	// ���������� ������������ ���������� ����������
	RICESIMULATORLIB_API double getDistanceReductionRatio(double distanceLength) override;
};