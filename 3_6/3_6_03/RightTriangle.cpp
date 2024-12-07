#include "RightTriangle.h"

namespace my {

	RightTriangle::RightTriangle(int aa, int bb, int cc, int AA, int BB) : Triangle(aa, bb, cc, AA, BB, 90) {
			name = "Прямоугольный треугольник";
	};
}