#include <iostream>
#include <Windows.h>
#include "Greeter.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	std::string name = "";
	std::cout << "¬ведите им€: ";
	std::cin >> name;

	Greeter greeter;
	std::cout << greeter.greet(name) << std::endl;
	system("pause");

	return 0;
}