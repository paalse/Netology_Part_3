#include "MagicCarpet.h"

MagicCarpet::MagicCarpet() : AirVehicle(10) {};

std::string MagicCarpet::getType() {
	return "Ковёр-самолёт";
}

std::string MagicCarpet::getParentType() {
	return "AirVehicle";
}

// Вычисление коэффициента уменьшения расстояния
double MagicCarpet::getDistanceReductionRatio(double distanceLength) {
	double coef = 1;
	double tmp = distanceLength / 1000;

	if (tmp >= 1 && tmp < 5) {
		coef = 0.97;
	}
	else if (tmp >= 5 && tmp < 10) {
		coef = 0.90;
	}
	else if (tmp >= 10) {
		coef = 0.95;
	}
	return coef;
}
