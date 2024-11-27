#include <iostream>
#include <Windows.h>

namespace my {
	class Figure {
	private:
		int sides_count;
	public:
		Figure() : sides_count(0) {};

		Figure(int sidesCnt) : sides_count(sidesCnt) {};

		int get_sides_count() {
			return sides_count;
		}
	};

	class Triangle : public Figure {
	public:
		Triangle() : Figure(3) {};

	};

	class Rectangle : public Figure {
	public:
		Rectangle() : Figure(4) {};
	};

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Количество сторон:" << std::endl;

	my::Figure figFig;
	std::cout << "Фигура: " << figFig.get_sides_count() << std::endl;

	my::Triangle figTriangle;
	std::cout << "Треугольник: " << figTriangle.get_sides_count() << std::endl;

	my::Rectangle figRectangle;
	std::cout << "Прямоугольник: " << figRectangle.get_sides_count() << std::endl;
	
	return 0;
}