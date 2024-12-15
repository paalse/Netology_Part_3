#include "Parallelogram.h"

namespace my {

	// параллелограмм(стороны a, c и b, d попарно равны, углы A, C и B, D попарно равны);
	Parallelogram::Parallelogram(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD) : Rectangle(aa, bb, cc, dd, AA, BB, CC, DD) {

		if (aa != cc || bb != dd) {
			throw MyException("Не равны стороны a и c или  b и d");
		}
		else if (AA != CC || BB != DD) {
			throw MyException("Не равны углы A и C или B и D");
		}

		name = "Параллелограмм";
	};
}