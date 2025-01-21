#pragma once
#include <vector>
#include <string>
#include "GroundVehicle.h"

#ifdef RACESIMULATORLIB_EXPORTS
#define RACESIMULATORLIB_API __declspec(dllexport)
#else
#define RACESIMULATORLIB_API __declspec(dllimport)
#endif

// Класс Верблюд-быстроход
class CamelFastSpeed : public GroundVehicle {
public:
	RACESIMULATORLIB_API CamelFastSpeed();

	RACESIMULATORLIB_API std::string getType() override;
	
	RACESIMULATORLIB_API std::string getParentType() override;
};