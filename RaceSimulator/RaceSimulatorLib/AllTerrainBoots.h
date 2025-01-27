#pragma once
#include <vector>
#include <string>
#include "GroundVehicle.h"
#include "spec.h"

// ����� �������-��������� 
class AllTerrainBoots : public GroundVehicle {
public:
	RACESIMULATORLIB_API AllTerrainBoots();

	RACESIMULATORLIB_API std::string getType() override;

	RACESIMULATORLIB_API std::string getParentType() override;
};