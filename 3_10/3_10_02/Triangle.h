#pragma once
#include <iostream>
#include "Figure.h"

namespace my {
	// “реугольник
	class Triangle : public Figure {
	protected:
		int a;	// ƒлина стороны a
		int b;	// ƒлина стороны b
		int c;	// ƒлина стороны c
		int A;	// ”гол между a и b
		int B;  // ”гол между b и с
		int C;	// ”гол между c и a
	public:
		Triangle();

		Triangle(int aa, int bb, int cc, int AA, int BB, int CC);

		int get_a();
		int get_b();
		int get_c();
		int get_A();
		int get_B();
		int get_C();

		void print_info() override;
	};
}