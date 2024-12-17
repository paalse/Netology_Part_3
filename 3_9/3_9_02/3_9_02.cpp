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

	std::cout << "¬ведите числитель дроби 1: ";
	std::cin >> numerator;
	std::cout << "¬ведите знаминатель дроби 1: ";
	std::cin >> denominator;
	Fraction f1(numerator, denominator);
	
	std::cout << "¬ведите числитель дроби 2: ";
	std::cin >> numerator;
	std::cout << "¬ведите знаминатель дроби 2: ";
	std::cin >> denominator;
	Fraction f2(numerator, denominator);
	
	std::cout << f1.get() << " + " << f2.get() << " = " << (f1 + f2).get() << std::endl;
	std::cout << f1.get() << " - " << f2.get() << " = " << (f1 - f2).get() << std::endl;
	std::cout << f1.get() << " * " << f2.get() << " = " << (f1 * f2).get() << std::endl;
	std::cout << f1.get() << " / " << f2.get() << " = " << (f1 / f2).get() << std::endl;
	
	std::cout << "++" << f1.get() << " * " << f2.get() << " = ";
	std::cout << (++f1 * f2).get() << std::endl;
	std::cout << "«начение дроби 1: " << f1.get() << std::endl;
	
	std::cout << f1.get() << "-- * " << f2.get() << " = ";
	std::cout << (f1-- * f2).get() << std::endl;
	std::cout << "«начение дроби 1: " << f1.get() << std::endl;

	return 0;
}

/*
¬ведите числитель дроби 1: 3
	¬ведите знаменатель дроби 1 : 4
	¬ведите числитель дроби 2 : 4
	¬ведите знаменатель дроби 2 : 5
	3 / 4 + 4 / 5 = 31 / 20
	3 / 4 - 4 / 5 = -1 / 20
	3 / 4 * 4 / 5 = 3 / 5
	3 / 4 / 4 / 5 = 15 / 16
	++3 / 4 * 4 / 5 = 7 / 5
	«начение дроби 1 = 7 / 4
	7 / 4-- * 4 / 5 = 7 / 5
	«начени дроби 1 = 3 / 4
	*/