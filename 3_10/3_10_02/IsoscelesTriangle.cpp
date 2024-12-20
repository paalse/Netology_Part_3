#include "IsoscelesTriangle.h"

namespace my {

	IsoscelesTriangle::IsoscelesTriangle(int aa, int bb, int AA, int BB) : Triangle(aa, bb, aa, AA, BB, AA) {
		name = "Равнобедренный треугольник";
	};

}