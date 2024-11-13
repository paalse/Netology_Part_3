#include <iostream>
#include <Windows.h>

class Calculator
{
	double num1;
	double num2;

	public:
		double add() // метод должен возвращать результат сложения num1 и num2
		{
			return num1 + num2;
		}
		
		double multiply() //метод должен возвращать результат перемножения num1 и num2
		{
			return num1 * num2;
		}

		double subtract_1_2() // метод должен возвращать результат вычитания num2 из num1
		{
			return num1 - num2;
		}

		double subtract_2_1() // метод должен возвращать результат вычитания num1 из num2
		{
			return num2 - num1;
		}
		
		double divide_1_2() // метод должен возвращать результат деления num1 на num2
		{
			return num1/num2;
		}

		double divide_2_1() // метод должен возвращать результат деления num2 на num1
		{
			return num2/num1;
		}

		bool set_num1(double num1) //метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
		{
			if (num1 != 0)
			{
				this->num1 = num1;
				return true;
			}
			return false;
		}
		
		bool set_num2(double num2) //метод должен установить значение поля num2 равное значению аргумента num2 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
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
		std::cout << "Введите число num1: ";
		std::cin >> num1;
		calc.set_num1(num1);

		std::cout << "Введите число num2: ";
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