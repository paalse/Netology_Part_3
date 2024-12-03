#include <iostream>
#include <Windows.h>

namespace my {
	// ������
	class Figure {
	protected:
		int sides_count;	// ���������� ������
		std::string name;	// ������������ ������
	public:
		Figure() : sides_count(0), name("������") {};

		Figure(int sidesCnt) : sides_count(sidesCnt) {};

		int get_sides_count() {
			return sides_count;
		}

		virtual void print_info() {
			std::cout << name << ":" << std::endl;
			std::cout << ((check() == true) ? "����������":"������������") << std::endl;
			std::cout << "���������� ������: " << sides_count << std::endl;
			std::cout << std::endl;
		}

		virtual bool check() {
			return sides_count == 0;
		}
	};

	// ----------------------------------------
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
		Triangle() : Figure(3) {};

		Triangle(int aa, int bb, int cc, int AA, int BB, int CC) : a(aa), b(bb), c(cc), A(AA), B(BB), C(CC)
		{
			name = "�����������";
			sides_count = 3;
		};

		int get_a() { return a; }
		int get_b() { return b; }
		int get_c() { return c; }
		int get_A() { return A; }
		int get_B() { return B; }
		int get_C() { return C; }

		void print_info() override
		{
			std::cout << name << ":" << std::endl;
			std::cout << ((check() == true) ? "����������" : "������������") << std::endl;
			std::cout << "���������� ������: " << sides_count << std::endl;
			std::cout << "�������: a=" << a << " b=" << b << " c=" << c << std::endl;
			std::cout << "����: A=" << A << " B=" << B << " C=" << C << std::endl;
			std::cout << std::endl;
		};

		bool check() override {
			return (sides_count == 3) && (A+B+C == 180);
		}
	};

	// ������������� �����������(���� C ������ ����� 90);
	class RightTriangle : public Triangle {
	public:
		RightTriangle(int aa, int bb, int cc, int AA, int BB) : Triangle(aa, bb, cc, AA, BB, 90) {
			name = "������������� �����������";
		};

		bool check() override {
			return  C == 90;
		}
	};

	// �������������� �����������(������� a � c �����, ���� A � C �����);
	class IsoscelesTriangle : public Triangle {
	public:
		IsoscelesTriangle(int aa, int bb, int AA, int BB) : Triangle(aa, bb, aa, AA, BB, AA) {
			name = "�������������� �����������";
		};

		bool check() override {
			return  (a == c) && (A == C);
		}
	};

	//�������������� �����������(��� ������� �����, ��� ���� ����� 60);
	class EquilateralTriangle : public Triangle {
	public:
		EquilateralTriangle(int aa, int AA) : Triangle(aa, aa, aa, AA, AA, AA) {
			name = "�������������� �����������";
		};

		bool check() override {
			return  (a == b) && (a == c) && (A == 60) && (B == 60) && (C == 60);
		}
	};


	// ----------------------------------------
	// �������������
	class Rectangle : public Figure {
	protected:
		int a;	// ����� ������� a
		int b;	// ����� ������� b
		int c;	// ����� ������� c
		int d;	// ����� ������� c
		int A;	// ���� ����� a � b
		int B;  // ���� ����� b � �
		int C;	// ���� ����� c � d
		int D;	// ���� ����� d � a
	public:
		Rectangle() : Figure(4) {};

		Rectangle(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD) : a(aa), b(bb), c(cc), d(dd), A(AA), B(BB), C(CC), D(DD) {
			name = "���������������";
			sides_count = 4;
		};

		int get_a() { return a; }
		int get_b() { return b; }
		int get_c() { return c; }
		int get_d() { return d; }
		int get_A() { return A; }
		int get_B() { return B; }
		int get_C() { return C; }
		int get_D() { return D; }

		void print_info() override
		{
			std::cout << name << ":" << std::endl;
			std::cout << ((check() == true) ? "����������" : "������������") << std::endl;
			std::cout << "���������� ������: " << sides_count << std::endl;
			std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
			std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
			std::cout << std::endl;
		};

		bool check() override {
			return  (sides_count == 4) && (A+B+C+D == 360);
		}
	};

	// �������������(������� a, c � b, d ������� �����, ��� ���� ����� 90);
	class RightRectangle : public Rectangle {
	public:
		RightRectangle(int aa, int bb) : Rectangle(aa, bb, aa, bb, 90, 90, 90, 90) {
			name = "�������������";
		};

		bool check() override {
			return  (a == c) && (b == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90);
		}
	};

	//�������(��� ������� �����, ��� ���� ����� 90);
	class Square : public Rectangle {
	public:
		Square(int aa) : Rectangle(aa, aa, aa, aa, 90, 90, 90, 90) {
			name = "�������";
		};

		bool check() override {
			return  (a == b) && (a == c) && (a == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90);
		}
	};

	// ��������������(������� a, c � b, d ������� �����, ���� A, C � B, D ������� �����);
	class Parallelogram : public Rectangle {
	public:
		Parallelogram(int aa, int bb, int AA, int BB) : Rectangle(aa, bb, aa, bb, AA, BB, AA, BB) {
			name = "��������������";
		};

		bool check() override {
			return  (a == c) && (b == d) && (A == C) && (B == D);
		}
	};

	// ����(��� ������� �����, ���� A, C � B, D ������� �����).
	class Diamond : public Rectangle {
	public:
		Diamond(int aa, int AA, int BB) : Rectangle(aa, aa, aa, aa, AA, BB, AA, BB) {
			name = "����";
		};

		bool check() override {
			return  (a == b) && (a == c) && (a == d) && (A == C) && (B == D);
		}
	};
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ������
	my::Figure fig;
	my::Figure* pFig = &fig;
	pFig->print_info();


	// �����������
	my::Triangle triangle(10, 20, 30, 50, 60, 70);
	my::Figure* pTriangle = &triangle;
	pTriangle->print_info();

	// ������������� �����������(���� C ������ ����� 90);
	my::RightTriangle rightTriangle(10, 20, 30, 50, 60);
	my::Figure* pRightTriangle = &rightTriangle;
	pRightTriangle->print_info();

	// �������������� �����������(������� a � c �����, ���� A � C �����);
	my::IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
	my::Figure* pIsoscelesTriangle = &isoscelesTriangle;
	pIsoscelesTriangle->print_info();

	// �������������� �����������(��� ������� �����, ��� ���� ����� 60);
	my::EquilateralTriangle equilateralTriangle(30, 60);
	my::Figure* pEquilateralTriangle = &equilateralTriangle;
	pEquilateralTriangle->print_info();

	// ���������������
	my::Rectangle rectangle(10, 20, 30, 40, 50, 60, 70, 80);
	my::Figure* pRectangle = &rectangle;
	pRectangle->print_info();

	// �������������(������� a, c � b, d ������� �����, ��� ���� ����� 90);
	my::RightRectangle rightRectangle(10, 20);
	my::Figure* pRightRectangle = &rightRectangle;
	pRightRectangle->print_info();

	// �������(��� ������� �����, ��� ���� ����� 90);
	my::Square square(20);
	my::Figure* pSquare = &square;
	pSquare->print_info();

	// ��������������(������� a, c � b, d ������� �����, ���� A, C � B, D ������� �����);
	my::Parallelogram parallelogram(20, 30, 30, 40);
	my::Figure* pParallelogram = &parallelogram;
	pParallelogram->print_info();

	//����(��� ������� �����, ���� A, C � B, D ������� �����).
	my::Diamond diamond(30, 30, 40);
	my::Figure* pDiamond = &diamond;
	pDiamond->print_info();

	return 0;
}