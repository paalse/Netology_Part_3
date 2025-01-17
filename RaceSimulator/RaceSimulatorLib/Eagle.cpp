#include "Eagle.h"

Eagle::Eagle() : AirVehicle(8) {};

std::string Eagle::getType(){
	return "Орёл";
}

std::string Eagle::getParentType(){
	return "AirVehicle";
}

// Вычисление коэффициента уменьшения расстояния
double Eagle::getDistanceReductionRatio(double distanceLength){
	return 0.94;
}