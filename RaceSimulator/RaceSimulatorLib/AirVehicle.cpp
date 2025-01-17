#include "AirVehicle.h"

AirVehicle::AirVehicle(int speed) : Vehicle(speed) {};

std::string AirVehicle::getType(){
	return "AirVehicle";
}

std::string AirVehicle::getParentType(){
	return "Vehicle";
}

// ���������� ������������ ���������� ����������
double AirVehicle::getDistanceReductionRatio(double distanceLength) {
	return 1;
}