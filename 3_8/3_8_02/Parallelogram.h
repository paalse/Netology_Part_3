#pragma once
#include "Rectangle.h"

namespace my {

	// ��������������(������� a, c � b, d ������� �����, ���� A, C � B, D ������� �����);
	class Parallelogram : public Rectangle {
	public:
		Parallelogram(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD);
	};
}