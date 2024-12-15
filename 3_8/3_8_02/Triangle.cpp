#include "Triangle.h"

namespace my {

	Triangle::Triangle() : Figure(3) {};

	Triangle::Triangle(int aa, int bb, int cc, int AA, int BB, int CC) : a(aa), b(bb), c(cc), A(AA), B(BB), C(CC)
	{
		if ((AA + BB + CC) != 180){
			throw MyException("����� ����� �� ����� 180");
		}
		else if(aa==0 || bb==0 || cc==0){
			throw MyException("���� ��� ����� �� ������ ����� 0");
		}

		name = "�����������";
		sides_count = 3;

	};

	int Triangle::get_a() { return a; }
	int Triangle::get_b() { return b; }
	int Triangle::get_c() { return c; }
	int Triangle::get_A() { return A; }
	int Triangle::get_B() { return B; }
	int Triangle::get_C() { return C; }

	void Triangle::print_info()
	{
		/*
		std::cout << name << ":" << std::endl;
		std::cout << "�������: a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "����: A=" << A << " B=" << B << " C=" << C << std::endl;
		std::cout << std::endl;
		*/
		std::cout << name << "(������� " << a << ", " << b << ", " << c << "; ���� " << A << ", " << B << ", " << C << ") ������" << std::endl;
	};
}