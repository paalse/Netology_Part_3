#include "AllTerrainBoots.h"

AllTerrainBoots::AllTerrainBoots() : GroundVehicle(6, 60, std::vector<double> {10, 5}) {};

std::string AllTerrainBoots::getType() {
	return "Ботинки-вездеходы";
}

std::string AllTerrainBoots::getParentType() {
	return "GroundVehicle";
}