#include <iostream>
#include <Windows.h>

struct Address 
{
	std::string sity;	// Город
	std::string street;	// Улица
	int home;			// Дом
	int flat;			// Квартира
	int index;			// Индекс
};

// Вывод адреса в консоль
void PrintAddress(Address& addr)
{
	std::cout << std::endl;
	std::cout << "Город: " << addr.sity << std::endl;
	std::cout << "Улица: " << addr.street << std::endl;
	std::cout << "Дом: " << addr.home << std::endl;
	std::cout << "Квартира: " << addr.flat << std::endl;
	std::cout << "Индекс: " << addr.index << std::endl;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Address addr1 = { "Москва", "Ленина", 13, 35, 125000 };
	Address addr2 = { "Тверь", "Пушкинская", 313, 435, 425000 };

	PrintAddress(addr1);
	PrintAddress(addr2);

	return 0;
}
