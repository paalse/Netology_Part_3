#include "Square.h"

namespace my {

	Square::Square(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD) : Rectangle(aa, bb, cc, dd, AA, BB, CC, DD) {
		
		if (aa != bb || bb != cc || cc != dd) {
			throw MyException("Стороны не равны");
		}
		name = "Квадрат";
	};
}