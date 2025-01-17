#include "GroundVehicle.h"

GroundVehicle::GroundVehicle(int speed, int drivingTimeWithoutRest, std::vector<double> durationOfRest) : Vehicle(speed) {
	this->drivingTimeWithoutRest = drivingTimeWithoutRest;
	this->durationOfRest = durationOfRest;
};

std::string GroundVehicle::getType() {
	return "GroundVehicle";
}

std::string GroundVehicle::getParentType() {
	return "Vehicle";
}

int GroundVehicle::getDrivingTimeWithoutRest() {
	return drivingTimeWithoutRest;
}

std::vector<double> GroundVehicle::getDurationOfRest() {
	return durationOfRest;
}

double GroundVehicle::getDurationOfRest(int index) {
	if (index < durationOfRest.size()) {
		return durationOfRest[index];
	}
	return durationOfRest[durationOfRest.size() - 1];
}