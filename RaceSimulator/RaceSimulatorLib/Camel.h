#pragma once
#include <vector>
#include <string>
#include "GroundVehicle.h"

#ifdef RICESIMULATORLIB_EXPORTS
#define RICESIMULATORLIB_API __declspec(dllexport)
#else
#define RICESIMULATORLIB_API __declspec(dllimport)
#endif

// Класс Вербдюд
class Camel : public GroundVehicle {
public:
	RICESIMULATORLIB_API Camel();

	RICESIMULATORLIB_API std::string getType() override;
	
	RICESIMULATORLIB_API std::string getParentType() override;
};
