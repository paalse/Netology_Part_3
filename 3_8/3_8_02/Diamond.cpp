#include "Diamond.h"

namespace my {
	Diamond::Diamond(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD) : Rectangle(aa, bb, cc, dd, AA, BB, CC, DD) {
		if (aa != bb || bb != cc || cc != dd) {
			throw MyException("Не все стороны равны");
		}
		else if (AA != CC || BB != DD) {
			throw MyException("Не равны углы A и C или B и D");
		}

		name = "Ромб";
	};
}