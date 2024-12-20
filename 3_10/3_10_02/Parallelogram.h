#pragma once
#include "Rectangle.h"

namespace my {

	// параллелограмм(стороны a, c и b, d попарно равны, углы A, C и B, D попарно равны);
	class Parallelogram : public Rectangle {
	public:
		Parallelogram(int aa, int bb, int AA, int BB);
	};
}