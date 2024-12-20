#include "Parallelogram.h"

namespace my {

	// параллелограмм(стороны a, c и b, d попарно равны, углы A, C и B, D попарно равны);
	Parallelogram::Parallelogram(int aa, int bb, int AA, int BB) : Rectangle(aa, bb, aa, bb, AA, BB, AA, BB) {
			name = "Параллелограмм";
	};
}