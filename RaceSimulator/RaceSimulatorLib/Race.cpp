#include "Race.h"

void startRace(std::vector<Vehicle*>& vehicleList, std::map<double, std::string>& resultRace, double& distanceLength) {

	double distanceTravelTime = 0;  // ����� ����������� ���������
	int cntRest = 0;				// ���������� ���������

	for (auto vehicle : vehicleList) {
		if (vehicle->getParentType() == "GroundVehicle") {
			distanceTravelTime = distanceLength / vehicle->getSpeed();
			cntRest = static_cast<int>(distanceTravelTime) / ((GroundVehicle*)vehicle)->getDrivingTimeWithoutRest();

			// ���� ����� � ���� ������� ��� ������� �� ���������� ��������� �� ��������� ��������� �� ���������
			if (static_cast<int>(distanceTravelTime) % ((GroundVehicle*)vehicle)->getDrivingTimeWithoutRest() == 0) {
				cntRest--;
			}
			for (int i = 0; i < cntRest; i++) {
				distanceTravelTime += ((GroundVehicle*)vehicle)->getDurationOfRest(i);
			}
		}
		else if (vehicle->getParentType() == "AirVehicle") {
			distanceTravelTime = distanceLength * ((AirVehicle*)vehicle)->getDistanceReductionRatio(distanceLength) / vehicle->getSpeed();
		}
		resultRace.insert({ distanceTravelTime, vehicle->getType() });
	}
}