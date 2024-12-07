#include <iostream>
#include <Windows.h>
#include "mymath.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	int b;
	int oper;

	while (1) {
		std::cout << "¬ведите первое число: ";
		std::cin >> a;
		std::cout << "¬ведите второе число: ";
		std::cin >> b;
		std::cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
		std::cin >> oper;

		switch (oper) {
		case 1: std::cout << a << " + " << b << " = " << add(a, b) << std::endl; break;
		case 2: std::cout << a << " - " << b << " = " << sub(a, b) << std::endl; break;
		case 3: std::cout << a << " * " << b << " = " << mul(a, b) << std::endl; break;
		case 4: std::cout << a << " / " << b << " = " << division(a, b) << std::endl; break;
		case 5: std::cout << a << " в степени " << b << " = " << degree(a, b) << std::endl; break;
		default: break;
		}
	}
	
	return 0;
}
