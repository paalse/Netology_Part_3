#pragma once
#include <iostream>
#include "Figure.h"

namespace my {
	// �����������
	class Triangle : public Figure {
	protected:
		int a;	// ����� ������� a
		int b;	// ����� ������� b
		int c;	// ����� ������� c
		int A;	// ���� ����� a � b
		int B;  // ���� ����� b � �
		int C;	// ���� ����� c � a
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