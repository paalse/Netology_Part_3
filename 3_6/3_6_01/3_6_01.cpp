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
		std::cout << "������� ������ �����: ";
		std::cin >> a;
		std::cout << "������� ������ �����: ";
		std::cin >> b;
		std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
		std::cin >> oper;

		switch (oper) {
		case 1: std::cout << a << " + " << b << " = " << add(a, b) << std::endl; break;
		case 2: std::cout << a << " - " << b << " = " << sub(a, b) << std::endl; break;
		case 3: std::cout << a << " * " << b << " = " << mul(a, b) << std::endl; break;
		case 4: std::cout << a << " / " << b << " = " << division(a, b) << std::endl; break;
		case 5: std::cout << a << " � ������� " << b << " = " << degree(a, b) << std::endl; break;
		default: break;
		}
	}
	
	return 0;
}
