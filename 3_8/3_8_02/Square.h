#pragma once
#include "Rectangle.h"

namespace my {

	//квадрат(все стороны равны, все углы равны 90);
	class Square : public Rectangle {
	public:
		Square(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD);
	};
}
