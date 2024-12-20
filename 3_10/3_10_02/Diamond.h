#pragma once
#include "Rectangle.h"

namespace my {

	// ромб(все стороны равны, углы A, C и B, D попарно равны).
	class Diamond : public Rectangle {
	public:
		Diamond(int aa, int AA, int BB); 
	};
}