#pragma once
#include "Triangle.h"

namespace my {
	// �������������� �����������(������� a � c �����, ���� A � C �����);
	class IsoscelesTriangle : public Triangle {
	public:
		IsoscelesTriangle(int aa, int bb, int cc, int AA, int BB, int CC);
	};
}