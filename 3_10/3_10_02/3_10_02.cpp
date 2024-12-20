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
	my::Triangle triangle(10, 20, 30, 50, 60, 70);
	my::Figure* pFig = &triangle;
	pFig->print_info();

	// прямоугольный треугольник(угол C всегда равен 90);
	my::RightTriangle rightTriangle(10, 20, 30, 50, 60);
	my::Figure* pRightTriangle = &rightTriangle;
	pRightTriangle->print_info();

	// равнобедренный треугольник(стороны a и c равны, углы A и C равны);
	my::IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
	my::Figure* pIsoscelesTriangle = &isoscelesTriangle;
	pIsoscelesTriangle->print_info();

	// равносторонний треугольник(все стороны равны, все углы равны 60);
	my::EquilateralTriangle equilateralTriangle(30, 60);
	my::Figure* pEquilateralTriangle = &equilateralTriangle;
	pEquilateralTriangle->print_info();

	// четырехугольник
	my::Rectangle rectangle(10, 20, 30, 40, 50, 60, 70, 80);
	my::Figure* pRectangle = &rectangle;
	pRectangle->print_info();

	// прямоугольник(стороны a, c и b, d попарно равны, все углы равны 90);
	my::RightRectangle rightRectangle(10, 20);
	my::Figure* pRightRectangle = &rightRectangle;
	pRightRectangle->print_info();

	// квадрат(все стороны равны, все углы равны 90);
	my::Square square(20);
	my::Figure* pSquare = &square;
	pSquare->print_info();

	// параллелограмм(стороны a, c и b, d попарно равны, углы A, C и B, D попарно равны);
	my::Parallelogram parallelogram(20, 30, 30, 40);
	my::Figure* pParallelogram = &parallelogram;
	pParallelogram->print_info();

	//ромб(все стороны равны, углы A, C и B, D попарно равны).
	my::Diamond diamond(30, 30, 40);
	my::Figure* pDiamond = &diamond;
	pDiamond->print_info();

	return 0;
}