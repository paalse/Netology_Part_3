#include "Rectangle.h"

namespace my {

	Rectangle::Rectangle() : Figure(4) {};

	Rectangle::Rectangle(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD) : a(aa), b(bb), c(cc), d(dd), A(AA), B(BB), C(CC), D(DD) {
		name = "Четырехугольник";
		sides_count = 4;
	};

	int Rectangle::get_a() { return a; }
	int Rectangle::get_b() { return b; }
	int Rectangle::get_c() { return c; }
	int Rectangle::get_d() { return d; }
	int Rectangle::get_A() { return A; }
	int Rectangle::get_B() { return B; }
	int Rectangle::get_C() { return C; }
	int Rectangle::get_D() { return D; }

	void Rectangle::print_info() 
	{
		std::cout << name << ":" << std::endl;
		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
		std::cout << std::endl;
	};
}