#include "Parallelogram.h"

namespace my {

	// ��������������(������� a, c � b, d ������� �����, ���� A, C � B, D ������� �����);
	Parallelogram::Parallelogram(int aa, int bb, int AA, int BB) : Rectangle(aa, bb, aa, bb, AA, BB, AA, BB) {
			name = "��������������";
	};
}