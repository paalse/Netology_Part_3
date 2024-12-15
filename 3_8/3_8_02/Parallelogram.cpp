#include "Parallelogram.h"

namespace my {

	// ��������������(������� a, c � b, d ������� �����, ���� A, C � B, D ������� �����);
	Parallelogram::Parallelogram(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD) : Rectangle(aa, bb, cc, dd, AA, BB, CC, DD) {

		if (aa != cc || bb != dd) {
			throw MyException("�� ����� ������� a � c ���  b � d");
		}
		else if (AA != CC || BB != DD) {
			throw MyException("�� ����� ���� A � C ��� B � D");
		}

		name = "��������������";
	};
}