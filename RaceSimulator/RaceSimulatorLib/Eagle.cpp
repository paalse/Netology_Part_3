#include "Eagle.h"

Eagle::Eagle() : AirVehicle(8) {};

std::string Eagle::getType(){
	return "���";
}

std::string Eagle::getParentType(){
	return "AirVehicle";
}

// ���������� ������������ ���������� ����������
double Eagle::getDistanceReductionRatio(double distanceLength){
	return 0.94;
}