#pragma once
#include <iostream>
#include "Figure.h"
#include "MyException.h"

namespace my {

	// Прямоугольник
	class Rectangle : public Figure {
		int a;	// Длина стороны a
		int b;	// Длина стороны b
		int c;	// Длина стороны c
		int d;	// Длина стороны c
		int A;	// Угол между a и b
		int B;  // Угол между b и с
		int C;	// Угол между c и d
		int D;	// Угол между d и a
	public:
		Rectangle();

		Rectangle(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD);

		int get_a();
		int get_b();
		int get_c();
		int get_d();
		int get_A();
		int get_B();
		int get_C();
		int get_D();

		void print_info() override;
	};
}