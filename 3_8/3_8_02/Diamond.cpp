#include "Diamond.h"

namespace my {
	Diamond::Diamond(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD) : Rectangle(aa, bb, cc, dd, AA, BB, CC, DD) {
		if (aa != bb || bb != cc || cc != dd) {
			throw MyException("�� ��� ������� �����");
		}
		else if (AA != CC || BB != DD) {
			throw MyException("�� ����� ���� A � C ��� B � D");
		}

		name = "����";
	};
}