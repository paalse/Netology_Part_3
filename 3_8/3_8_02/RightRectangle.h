#pragma once
#include "Rectangle.h"

namespace my {

	// �������������(������� a, c � b, d ������� �����, ��� ���� ����� 90);
	class RightRectangle : public Rectangle {
	public:
		RightRectangle(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD);
	};
}