#include <iostream>
#include <exception>
#include <Windows.h>

int function(std::string str, int forbidden_length) {

	if (str.length() != forbidden_length) {
		return str.length();
	} 
	throw std::exception("Вы ввели слово запретной длины !");
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int bad_length;
	std::string str;

	std::cout << "Введите запретную длину: ";
	std::cin >> bad_length;
	try {
		while (1) {
			std::cout << "Введите слово: ";
			std::cin >> str;
			std::cout << "Длина слова \"" << str << "\" равна " << function(str, bad_length) << std::endl;
		}
	}
	catch (const std::exception& msg) {
		std::cout << msg.what() << std::endl;
	}
	std::cout << "До свидания." << std::endl;

	return 0;
}