#include <iostream>
#include <Windows.h>

class Figure {
private:
	int sides_count;
public:
	Figure():sides_count(0)	{};
};

class Triangle : public Figure {
private:
	int sides_count;
public:
	Triangle(int sidesCnt) : sides_count(sidesCnt) {};
};

class Rectangle : public Figure {
private:
	int sides_count;
public:
	Rectangle(int sidesCnt) : sides_count(sidesCnt) {};
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	return 0;
}