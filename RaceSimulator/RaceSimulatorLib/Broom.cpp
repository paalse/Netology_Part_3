#include "Broom.h"

Broom::Broom() : AirVehicle(20) {};

std::string Broom::getType(){
	return "�����";
}

std::string Broom::getParentType(){
	return "AirVehicle";
}

// ���������� ������������ ���������� ����������
double Broom::getDistanceReductionRatio(double distanceLength){
	double coef = 1;
	double tmp = distanceLength / 1000;

	if (tmp > 0) {
		coef = (100.0 - tmp) / 100.0;
	}
	return coef;
}