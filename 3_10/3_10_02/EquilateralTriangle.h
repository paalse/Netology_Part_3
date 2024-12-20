#pragma once
#include "Triangle.h"

namespace my {
	//равносторонний треугольник(все стороны равны, все углы равны 60);
	class EquilateralTriangle : public Triangle {
	public:
		EquilateralTriangle(int aa, int AA);
	};
}