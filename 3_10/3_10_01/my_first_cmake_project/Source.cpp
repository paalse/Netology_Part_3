#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;

	std::cout << "������� ���: ";
	std::cin >> name;
	std::cout << "������������, " << name << "!\n";

	return 0;
}