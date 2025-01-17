#include "Centaur.h"

Centaur::Centaur() : GroundVehicle(15, 8, std::vector<double> {2}) {};

std::string Centaur::getType(){
	return "Кентавр";
}

std::string Centaur::getParentType(){
	return "GroundVehicle";
}
