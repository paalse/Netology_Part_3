#include "Figure.h"

namespace my {

	Figure::Figure() : sides_count(0) {};

	Figure::Figure(int sidesCnt) : sides_count(sidesCnt) {};

	int Figure::get_sides_count() {
		return sides_count;
	}

	void Figure::print_info() {};
}