#include "RightRectangle.h"

namespace my {

	RightRectangle::RightRectangle(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD) : Rectangle(aa, bb, aa, bb, AA, BB, CC, DD)
	{
		if (aa != cc || bb != dd) {
			throw MyException("�� ����� ������� a � c ��� b � d");
		}
		
		name = "�������������";
	};
}