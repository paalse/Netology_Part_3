#include <iostream>
#include <Windows.h>

class Calculator
{
	double num1;
	double num2;

	public:
		double add() // ����� ������ ���������� ��������� �������� num1 � num2
		{
			return num1 + num2;
		}
		
		double multiply() //����� ������ ���������� ��������� ������������ num1 � num2
		{
			return num1 * num2;
		}

		double subtract_1_2() // ����� ������ ���������� ��������� ��������� num2 �� num1
		{
			return num1 - num2;
		}

		double subtract_2_1() // ����� ������ ���������� ��������� ��������� num1 �� num2
		{
			return num2 - num1;
		}
		
		double divide_1_2() // ����� ������ ���������� ��������� ������� num1 �� num2
		{
			return num1/num2;
		}

		double divide_2_1() // ����� ������ ���������� ��������� ������� num2 �� num1
		{
			return num2/num1;
		}

		bool set_num1(double num1) //����� ������ ���������� �������� ���� num1 ������ �������� ��������� num1 � ������, ���� �������� ��������� �� ����� 0. ���������� true, ���� ��������� ��������� �������, � �������� ������ false
		{
			if (num1 != 0)
			{
				this->num1 = num1;
				return true;
			}
			return false;
		}
		
		bool set_num2(double num2) //����� ������ ���������� �������� ���� num2 ������ �������� ��������� num2 � ������, ���� �������� ��������� �� ����� 0. ���������� true, ���� ��������� ��������� �������, � �������� ������ false
		{
			if (num2 != 0)
			{
				this->num2 = num2;
				return true;
			}
			return false;
		}
};



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double num1;
	double num2;

	Calculator calc;

	while (true)
	{
		std::cout << "������� ����� num1: ";
		std::cin >> num1;
		calc.set_num1(num1);

		std::cout << "������� ����� num2: ";
		std::cin >> num2;
		calc.set_num2(num2);

		std::cout << "num1 + num2 = " << calc.add() << std::endl;
		std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
		std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
		std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
	}

	return 0;
}