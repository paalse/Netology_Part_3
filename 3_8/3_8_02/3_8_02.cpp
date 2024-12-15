#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "RightRectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Diamond.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// треугольник
	try {
		my::Triangle triangle(10, 20, 30, 50, 60, 70);
		my::Figure* pFig = &triangle;
		pFig->print_info();
	}
	catch (const MyException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}

	// прямоугольный треугольник(угол C всегда равен 90);
	try {
		my::RightTriangle rightTriangle(10, 20, 30, 30, 60, 90);
		my::Figure* pRightTriangle = &rightTriangle;
		pRightTriangle->print_info();
	}
	catch (const MyException& err)	{
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	
	// равнобедренный треугольник(стороны a и c равны, углы A и C равны);
	try {
		my::IsoscelesTriangle isoscelesTriangle(10, 20, 10, 70, 40, 70);
		my::Figure* pIsoscelesTriangle = &isoscelesTriangle;
		pIsoscelesTriangle->print_info();
	}
	catch (const MyException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
		
	// равносторонний треугольник(все стороны равны, все углы равны 60);
	try {
		my::EquilateralTriangle equilateralTriangle(20, 20, 20, 60, 60, 60);
		my::Figure* pEquilateralTriangle = &equilateralTriangle;
		pEquilateralTriangle->print_info();
	}
	catch (const MyException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}


	// четырехугольник
	try {
		my::Rectangle rectangle(10, 20, 30, 40, 90, 90, 90, 90);
		my::Figure* pRectangle = &rectangle;
		pRectangle->print_info();
	}
	catch (const MyException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}


	// прямоугольник(стороны a, c и b, d попарно равны, все углы равны 90);
	try {
		my::RightRectangle rightRectangle(10,20,10,20,90,90,90,90);
		my::Figure* pRightRectangle = &rightRectangle;
		pRightRectangle->print_info();
	}
	catch (const MyException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	

	// квадрат(все стороны равны, все углы равны 90);
	try {
		my::Square square(20,20,20,20,90,90,90,90);
		my::Figure* pSquare = &square;
		pSquare->print_info();
	}
	catch (const MyException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}


	// параллелограмм(стороны a, c и b, d попарно равны, углы A, C и B, D попарно равны);
	try {
		my::Parallelogram parallelogram(20, 30, 20, 30, 30, 150, 30, 150);
		my::Figure* pParallelogram = &parallelogram;
		pParallelogram->print_info();
	}
	catch (const MyException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	
	//ромб(все стороны равны, углы A, C и B, D попарно равны).
	try {
		my::Diamond diamond(20, 20, 20, 20, 35, 150, 25, 150);
		my::Figure* pDiamond = &diamond;
		pDiamond->print_info();
	}
	catch (const MyException& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	return 0;
}