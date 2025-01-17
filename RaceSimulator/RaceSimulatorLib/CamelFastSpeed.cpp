#include "CamelFastSpeed.h"

CamelFastSpeed::CamelFastSpeed() : GroundVehicle(40, 10, std::vector<double> {5, 6.5, 8}) {};

std::string CamelFastSpeed::getType(){
	return "Верблюд-быстроход";
}

std::string CamelFastSpeed::getParentType(){
	return "GroundVehicle";
}