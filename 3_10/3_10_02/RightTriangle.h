#pragma once
#include "Triangle.h"

namespace my {

	// прямоугольный треугольник(угол C всегда равен 90);
	class RightTriangle : public Triangle {
	public:
		RightTriangle(int aa, int bb, int cc, int AA, int BB);
	};
}