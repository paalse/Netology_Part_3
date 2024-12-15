#include "RightTriangle.h"

namespace my {

	RightTriangle::RightTriangle(int aa, int bb, int cc, int AA, int BB, int CC) : Triangle(aa, bb, cc, AA, BB, CC) {
		if (CC != 90) {
			throw MyException("Угол С не равен 90 градусов");
		}

		name = "Прямоугольный треугольник";
	};
}