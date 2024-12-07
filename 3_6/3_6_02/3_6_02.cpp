#include <iostream>
#include <Windows.h>
#include <string>
#include "Counter.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string str = "";
	Counter myCnt;


	std::cout << "������ ������ ��������� �������� ��/���: ";
	std::cin >> str;

	if (str == "��") {
		std::cout << "������� ��������� �������� ��������: ";
		std::cin >> str;
		//Counter myCnt(std::stoi(str));
		myCnt.setCnt(std::stoi(str));
	}

	do {
		std::cout << "������� �������('+', '-', '=' ��� 'x'): ";
		std::cin >> str;

		if (str == "+") {
			myCnt.increment();
		}
		else if (str == "-") {
			myCnt.decrement();
		}
		else if (str == "=") {
			std::cout << myCnt.getCnt() << std::endl;
		}

	} while (str != "x");

	std::cout << "�� ��������!";

	return 0;
}