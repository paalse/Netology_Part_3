#include "IsoscelesTriangle.h"

namespace my {

	IsoscelesTriangle::IsoscelesTriangle(int aa, int bb, int cc, int AA, int BB, int CC) : Triangle(aa, bb, cc, AA, BB, CC) {
		if (aa != cc) {
			throw MyException("������� � � � �� �����.");
		}
		else if (AA != CC)
		{
			throw MyException("���� � � � �� �����.");
		}

		name = "�������������� �����������";
	};
}