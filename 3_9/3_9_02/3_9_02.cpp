#include <iostream>
#include <string>
#include <Windows.h>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction() {
		numerator_ = 0;
		denominator_ = 0;
	};

	Fraction(int numerator, int denominator)
	{
		int del = 1;
		for (int i = 10; i > 1; --i) {
			if ((numerator%i==0) && (denominator%i==0))
			{
				del = i;
				break;
			}
		}
		numerator_ = numerator/del;
		denominator_ = denominator/del;
	}

	std::string get() {
		return std::to_string(numerator_) + "/" + std::to_string(denominator_);
	};

	Fraction operator + (Fraction other) {
		if (denominator_ == other.denominator_) {
			return Fraction(numerator_ + other.numerator_, denominator_);
		}
		return Fraction(numerator_ * other.denominator_ + other.numerator_ * denominator_, denominator_ * other.denominator_);
	};

	Fraction operator - (Fraction other) {
		if (denominator_ == other.denominator_) {
			return Fraction(numerator_ - other.numerator_, denominator_);
		}
		return Fraction(numerator_ * other.denominator_ - other.numerator_ * denominator_, denominator_ * other.denominator_);
	};

	Fraction operator * (Fraction other) {
		return Fraction(numerator_ * other.numerator_, denominator_ * other.denominator_);
	};

	Fraction operator / (Fraction other) {
		return Fraction(numerator_ * other.denominator_, denominator_ * other.numerator_);
	};

	Fraction operator ++ () {numerator_ += denominator_; return *this;}

	Fraction operator -- () { numerator_ -= denominator_; return *this;}
	Fraction operator -- (int)
	{
		Fraction temp = *this;
		--(*this);
		return temp;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int numerator = 0;
	int denominator = 0;

	std::cout << "������� ��������� ����� 1: ";
	std::cin >> numerator;
	std::cout << "������� ����������� ����� 1: ";
	std::cin >> denominator;
	Fraction f1(numerator, denominator);
	
	std::cout << "������� ��������� ����� 2: ";
	std::cin >> numerator;
	std::cout << "������� ����������� ����� 2: ";
	std::cin >> denominator;
	Fraction f2(numerator, denominator);
	
	std::cout << f1.get() << " + " << f2.get() << " = " << (f1 + f2).get() << std::endl;
	std::cout << f1.get() << " - " << f2.get() << " = " << (f1 - f2).get() << std::endl;
	std::cout << f1.get() << " * " << f2.get() << " = " << (f1 * f2).get() << std::endl;
	std::cout << f1.get() << " / " << f2.get() << " = " << (f1 / f2).get() << std::endl;
	
	std::cout << "++" << f1.get() << " * " << f2.get() << " = ";
	std::cout << (++f1 * f2).get() << std::endl;
	std::cout << "�������� ����� 1: " << f1.get() << std::endl;
	
	std::cout << f1.get() << "-- * " << f2.get() << " = ";
	std::cout << (f1-- * f2).get() << std::endl;
	std::cout << "�������� ����� 1: " << f1.get() << std::endl;

	return 0;
}

/*
������� ��������� ����� 1: 3
	������� ����������� ����� 1 : 4
	������� ��������� ����� 2 : 4
	������� ����������� ����� 2 : 5
	3 / 4 + 4 / 5 = 31 / 20
	3 / 4 - 4 / 5 = -1 / 20
	3 / 4 * 4 / 5 = 3 / 5
	3 / 4 / 4 / 5 = 15 / 16
	++3 / 4 * 4 / 5 = 7 / 5
	�������� ����� 1 = 7 / 4
	7 / 4-- * 4 / 5 = 7 / 5
	������� ����� 1 = 3 / 4
	*/