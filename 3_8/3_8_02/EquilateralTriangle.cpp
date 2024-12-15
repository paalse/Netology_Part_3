#include "EquilateralTriangle.h"

namespace my {

	EquilateralTriangle::EquilateralTriangle(int aa, int bb, int cc, int AA, int BB, int CC) : Triangle(aa, bb, cc, AA, BB, CC) {
		if (aa != bb && aa != cc && bb != cc) {
			throw MyException("Стороны а, b и с не равны.");
		}
		else if (AA != BB && AA != CC && BB != CC)
		{
			throw MyException("Углы А, B и С не равны.");
		}

		name = "Равносторонний треугольник";
	};
}