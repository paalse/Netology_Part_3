#pragma once
#include "Rectangle.h"

namespace my {

	// ����(��� ������� �����, ���� A, C � B, D ������� �����).
	class Diamond : public Rectangle {
	public:
		Diamond(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD);
	};
}