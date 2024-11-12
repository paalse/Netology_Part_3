#include <iostream>
#include <Windows.h>

struct BankAccount
{
	int account;
	std::string name;
	float balance;
};

void ChangeBalance(BankAccount& bankAccount, float newBalance)
{
	bankAccount.balance = newBalance;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	BankAccount myAccount;
	float newBalance;

	std::cout << "¬ведите номер счЄта: ";
	std::cin >> myAccount.account;
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> myAccount.name;
	std::cout << "¬ведите баланс: ";
	std::cin >> myAccount.balance;

	std::cout << "¬ведите новый баланс: ";
	std::cin >> newBalance;
	ChangeBalance(myAccount, newBalance);

	std::cout << "¬аш счет: " << myAccount.name << ", " << myAccount.account << ", " << myAccount.balance;

	return 0;
}
/*
¬ведите номер счЄта : 123456789
¬ведите им€ владельца : јндрей
¬ведите баланс : 5000
¬ведите новый баланс : 6000
¬аш счЄт : јндрей, 123456789, 6000
*/