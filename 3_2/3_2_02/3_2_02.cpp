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

	std::cout << "������� ����� �����: ";
	std::cin >> myAccount.account;
	std::cout << "������� ��� ���������: ";
	std::cin >> myAccount.name;
	std::cout << "������� ������: ";
	std::cin >> myAccount.balance;

	std::cout << "������� ����� ������: ";
	std::cin >> newBalance;
	ChangeBalance(myAccount, newBalance);

	std::cout << "��� ����: " << myAccount.name << ", " << myAccount.account << ", " << myAccount.balance;

	return 0;
}
/*
������� ����� ����� : 123456789
������� ��� ��������� : ������
������� ������ : 5000
������� ����� ������ : 6000
��� ���� : ������, 123456789, 6000
*/