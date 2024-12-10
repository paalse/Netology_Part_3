#include <iostream>
#include <exception>
#include <Windows.h>

int function(std::string str, int forbidden_length) {

	if (str.length() != forbidden_length) {
		return str.length();
	} 
	throw std::exception("�� ����� ����� ��������� ����� !");
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int bad_length;
	std::string str;

	std::cout << "������� ��������� �����: ";
	std::cin >> bad_length;
	try {
		while (1) {
			std::cout << "������� �����: ";
			std::cin >> str;
			std::cout << "����� ����� \"" << str << "\" ����� " << function(str, bad_length) << std::endl;
		}
	}
	catch (const std::exception& msg) {
		std::cout << msg.what() << std::endl;
	}
	std::cout << "�� ��������." << std::endl;

	return 0;
}