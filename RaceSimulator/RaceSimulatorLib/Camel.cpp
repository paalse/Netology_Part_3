#include "Camel.h"

Camel::Camel() : GroundVehicle(10, 30, std::vector<double> {5, 8}) {};

std::string Camel::getType(){
	return "�������";
}

std::string Camel::getParentType(){
	return "GroundVehicle";
}