#pragma once
#include <iostream>
#include "Figure.h"
#include "MyException.h"

namespace my {

	// �������������
	class Rectangle : public Figure {
		int a;	// ����� ������� a
		int b;	// ����� ������� b
		int c;	// ����� ������� c
		int d;	// ����� ������� c
		int A;	// ���� ����� a � b
		int B;  // ���� ����� b � �
		int C;	// ���� ����� c � d
		int D;	// ���� ����� d � a
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