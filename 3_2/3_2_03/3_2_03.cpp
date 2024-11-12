#include <iostream>
#include <Windows.h>

struct Address 
{
	std::string sity;	// �����
	std::string street;	// �����
	int home;			// ���
	int flat;			// ��������
	int index;			// ������
};

// ����� ������ � �������
void PrintAddress(Address& addr)
{
	std::cout << std::endl;
	std::cout << "�����: " << addr.sity << std::endl;
	std::cout << "�����: " << addr.street << std::endl;
	std::cout << "���: " << addr.home << std::endl;
	std::cout << "��������: " << addr.flat << std::endl;
	std::cout << "������: " << addr.index << std::endl;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Address addr1 = { "������", "������", 13, 35, 125000 };
	Address addr2 = { "�����", "����������", 313, 435, 425000 };

	PrintAddress(addr1);
	PrintAddress(addr2);

	return 0;
}
