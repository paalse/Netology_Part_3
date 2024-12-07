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


	std::cout << "Хотите ввести начальное значение да/нет: ";
	std::cin >> str;

	if (str == "да") {
		std::cout << "Введите начальное значение счетчика: ";
		std::cin >> str;
		//Counter myCnt(std::stoi(str));
		myCnt.setCnt(std::stoi(str));
	}

	do {
		std::cout << "Введите команду('+', '-', '=' или 'x'): ";
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

	std::cout << "До свидания!";

	return 0;
}