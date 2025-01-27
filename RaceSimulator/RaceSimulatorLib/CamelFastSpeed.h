#pragma once
#include <vector>
#include <string>
#include "GroundVehicle.h"
#include "spec.h"

// ����� �������-���������
class CamelFastSpeed : public GroundVehicle {
public:
	RACESIMULATORLIB_API CamelFastSpeed();

	RACESIMULATORLIB_API std::string getType() override;
	
	RACESIMULATORLIB_API std::string getParentType() override;
};