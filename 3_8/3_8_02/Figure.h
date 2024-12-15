#pragma once
#include <string>

namespace my {
	// ������
	class Figure {
	protected:
		int sides_count;	// ���������� ������
		std::string name;	// ������������ ������
	public:
		Figure();

		Figure(int sidesCnt);

		int get_sides_count();

		virtual void print_info();
	};
}