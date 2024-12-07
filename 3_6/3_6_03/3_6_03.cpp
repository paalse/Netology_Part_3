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

	// �����������
	my::Triangle triangle(10, 20, 30, 50, 60, 70);
	my::Figure* pFig = &triangle;
	pFig->print_info();

	// ������������� �����������(���� C ������ ����� 90);
	my::RightTriangle rightTriangle(10, 20, 30, 50, 60);
	my::Figure* pRightTriangle = &rightTriangle;
	pRightTriangle->print_info();

	// �������������� �����������(������� a � c �����, ���� A � C �����);
	my::IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
	my::Figure* pIsoscelesTriangle = &isoscelesTriangle;
	pIsoscelesTriangle->print_info();

	// �������������� �����������(��� ������� �����, ��� ���� ����� 60);
	my::EquilateralTriangle equilateralTriangle(30, 60);
	my::Figure* pEquilateralTriangle = &equilateralTriangle;
	pEquilateralTriangle->print_info();

	// ���������������
	my::Rectangle rectangle(10, 20, 30, 40, 50, 60, 70, 80);
	my::Figure* pRectangle = &rectangle;
	pRectangle->print_info();

	// �������������(������� a, c � b, d ������� �����, ��� ���� ����� 90);
	my::RightRectangle rightRectangle(10, 20);
	my::Figure* pRightRectangle = &rightRectangle;
	pRightRectangle->print_info();

	// �������(��� ������� �����, ��� ���� ����� 90);
	my::Square square(20);
	my::Figure* pSquare = &square;
	pSquare->print_info();

	// ��������������(������� a, c � b, d ������� �����, ���� A, C � B, D ������� �����);
	my::Parallelogram parallelogram(20, 30, 30, 40);
	my::Figure* pParallelogram = &parallelogram;
	pParallelogram->print_info();

	//����(��� ������� �����, ���� A, C � B, D ������� �����).
	my::Diamond diamond(30, 30, 40);
	my::Figure* pDiamond = &diamond;
	pDiamond->print_info();

	return 0;
}