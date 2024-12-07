#pragma once
#include "Triangle.h"

namespace my {
	// равнобедренный треугольник(стороны a и c равны, углы A и C равны);
	class IsoscelesTriangle : public Triangle {
	public:
		IsoscelesTriangle(int aa, int bb, int AA, int BB);
	};
}