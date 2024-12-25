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

	Greeter printName;
	printName.greet(name);
	system("pause");

	return 0;
}