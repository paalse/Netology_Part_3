#include <string>
#include "Vehicle.h"


Vehicle::Vehicle(int speed) : speed(speed) {};

std::string Vehicle::getType(){
	return "Vehicle";
}

std::string Vehicle::getParentType(){
	return "";
}

int Vehicle::getSpeed() {
	return speed;
}