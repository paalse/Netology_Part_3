#pragma once
#include <string>

namespace my {
	// Фигура
	class Figure {
	protected:
		int sides_count;	// Количество сторон
		std::string name;	// Наименование фигуры
	public:
		Figure();

		Figure(int sidesCnt);

		int get_sides_count();

		virtual void print_info();
	};
}