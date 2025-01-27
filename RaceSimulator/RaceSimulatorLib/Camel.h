#pragma once
#include <vector>
#include <string>
#include "GroundVehicle.h"
#include "spec.h"

// ����� �������
class Camel : public GroundVehicle {
public:
	RACESIMULATORLIB_API Camel();

	RACESIMULATORLIB_API std::string getType() override;
	
	RACESIMULATORLIB_API std::string getParentType() override;
};
