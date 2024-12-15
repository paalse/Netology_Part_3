#pragma once
#include "Rectangle.h"

namespace my {

	// прямоугольник(стороны a, c и b, d попарно равны, все углы равны 90);
	class RightRectangle : public Rectangle {
	public:
		RightRectangle(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD);
	};
}