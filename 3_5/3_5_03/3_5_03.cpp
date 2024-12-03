#include <iostream>
#include <Windows.h>

namespace my {
	// Фигура
	class Figure {
	protected:
		int sides_count;	// Количество сторон
		std::string name;	// Наименование фигуры
	public:
		Figure() : sides_count(0), name("Фигура") {};

		Figure(int sidesCnt) : sides_count(sidesCnt) {};

		int get_sides_count() {
			return sides_count;
		}

		virtual void print_info() {
			std::cout << name << ":" << std::endl;
			std::cout << ((check() == true) ? "Правильная":"Неправильная") << std::endl;
			std::cout << "Количество сторон: " << sides_count << std::endl;
			std::cout << std::endl;
		}

		virtual bool check() {
			return sides_count == 0;
		}
	};

	// ----------------------------------------
	// Треугольник
	class Triangle : public Figure {
	protected:
		int a;	// Длина стороны a
		int b;	// Длина стороны b
		int c;	// Длина стороны c
		int A;	// Угол между a и b
		int B;  // Угол между b и с
		int C;	// Угол между c и a
	public:
		Triangle() : Figure(3) {};

		Triangle(int aa, int bb, int cc, int AA, int BB, int CC) : a(aa), b(bb), c(cc), A(AA), B(BB), C(CC)
		{
			name = "Треугольник";
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
			std::cout << ((check() == true) ? "Правильная" : "Неправильная") << std::endl;
			std::cout << "Количество сторон: " << sides_count << std::endl;
			std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
			std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
			std::cout << std::endl;
		};

		bool check() override {
			return (sides_count == 3) && (A+B+C == 180);
		}
	};

	// прямоугольный треугольник(угол C всегда равен 90);
	class RightTriangle : public Triangle {
	public:
		RightTriangle(int aa, int bb, int cc, int AA, int BB) : Triangle(aa, bb, cc, AA, BB, 90) {
			name = "Прямоугольный треугольник";
		};

		bool check() override {
			return  C == 90;
		}
	};

	// равнобедренный треугольник(стороны a и c равны, углы A и C равны);
	class IsoscelesTriangle : public Triangle {
	public:
		IsoscelesTriangle(int aa, int bb, int AA, int BB) : Triangle(aa, bb, aa, AA, BB, AA) {
			name = "Равнобедренный треугольник";
		};

		bool check() override {
			return  (a == c) && (A == C);
		}
	};

	//равносторонний треугольник(все стороны равны, все углы равны 60);
	class EquilateralTriangle : public Triangle {
	public:
		EquilateralTriangle(int aa, int AA) : Triangle(aa, aa, aa, AA, AA, AA) {
			name = "Равносторонний треугольник";
		};

		bool check() override {
			return  (a == b) && (a == c) && (A == 60) && (B == 60) && (C == 60);
		}
	};


	// ----------------------------------------
	// Прямоугольник
	class Rectangle : public Figure {
	protected:
		int a;	// Длина стороны a
		int b;	// Длина стороны b
		int c;	// Длина стороны c
		int d;	// Длина стороны c
		int A;	// Угол между a и b
		int B;  // Угол между b и с
		int C;	// Угол между c и d
		int D;	// Угол между d и a
	public:
		Rectangle() : Figure(4) {};

		Rectangle(int aa, int bb, int cc, int dd, int AA, int BB, int CC, int DD) : a(aa), b(bb), c(cc), d(dd), A(AA), B(BB), C(CC), D(DD) {
			name = "Четырехугольник";
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
			std::cout << ((check() == true) ? "Правильная" : "Неправильная") << std::endl;
			std::cout << "Количество сторон: " << sides_count << std::endl;
			std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
			std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
			std::cout << std::endl;
		};

		bool check() override {
			return  (sides_count == 4) && (A+B+C+D == 360);
		}
	};

	// прямоугольник(стороны a, c и b, d попарно равны, все углы равны 90);
	class RightRectangle : public Rectangle {
	public:
		RightRectangle(int aa, int bb) : Rectangle(aa, bb, aa, bb, 90, 90, 90, 90) {
			name = "Прямоугольник";
		};

		bool check() override {
			return  (a == c) && (b == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90);
		}
	};

	//квадрат(все стороны равны, все углы равны 90);
	class Square : public Rectangle {
	public:
		Square(int aa) : Rectangle(aa, aa, aa, aa, 90, 90, 90, 90) {
			name = "Квадрат";
		};

		bool check() override {
			return  (a == b) && (a == c) && (a == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90);
		}
	};

	// параллелограмм(стороны a, c и b, d попарно равны, углы A, C и B, D попарно равны);
	class Parallelogram : public Rectangle {
	public:
		Parallelogram(int aa, int bb, int AA, int BB) : Rectangle(aa, bb, aa, bb, AA, BB, AA, BB) {
			name = "Параллелограмм";
		};

		bool check() override {
			return  (a == c) && (b == d) && (A == C) && (B == D);
		}
	};

	// ромб(все стороны равны, углы A, C и B, D попарно равны).
	class Diamond : public Rectangle {
	public:
		Diamond(int aa, int AA, int BB) : Rectangle(aa, aa, aa, aa, AA, BB, AA, BB) {
			name = "Ромб";
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

	// фигура
	my::Figure fig;
	my::Figure* pFig = &fig;
	pFig->print_info();


	// треугольник
	my::Triangle triangle(10, 20, 30, 50, 60, 70);
	my::Figure* pTriangle = &triangle;
	pTriangle->print_info();

	// прямоугольный треугольник(угол C всегда равен 90);
	my::RightTriangle rightTriangle(10, 20, 30, 50, 60);
	my::Figure* pRightTriangle = &rightTriangle;
	pRightTriangle->print_info();

	// равнобедренный треугольник(стороны a и c равны, углы A и C равны);
	my::IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
	my::Figure* pIsoscelesTriangle = &isoscelesTriangle;
	pIsoscelesTriangle->print_info();

	// равносторонний треугольник(все стороны равны, все углы равны 60);
	my::EquilateralTriangle equilateralTriangle(30, 60);
	my::Figure* pEquilateralTriangle = &equilateralTriangle;
	pEquilateralTriangle->print_info();

	// четырехугольник
	my::Rectangle rectangle(10, 20, 30, 40, 50, 60, 70, 80);
	my::Figure* pRectangle = &rectangle;
	pRectangle->print_info();

	// прямоугольник(стороны a, c и b, d попарно равны, все углы равны 90);
	my::RightRectangle rightRectangle(10, 20);
	my::Figure* pRightRectangle = &rightRectangle;
	pRightRectangle->print_info();

	// квадрат(все стороны равны, все углы равны 90);
	my::Square square(20);
	my::Figure* pSquare = &square;
	pSquare->print_info();

	// параллелограмм(стороны a, c и b, d попарно равны, углы A, C и B, D попарно равны);
	my::Parallelogram parallelogram(20, 30, 30, 40);
	my::Figure* pParallelogram = &parallelogram;
	pParallelogram->print_info();

	//ромб(все стороны равны, углы A, C и B, D попарно равны).
	my::Diamond diamond(30, 30, 40);
	my::Figure* pDiamond = &diamond;
	pDiamond->print_info();

	return 0;
}