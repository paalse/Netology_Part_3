#define CATCH_CONFIG_MAIN
#include"catch2/catch_all.hpp"
#include"extended_array.h"

// �������� ������ ��� ���������� �������� �������� �� ����� �������
TEST_CASE("Mean value") {
	SECTION("int numbers") {
		ExtArray<int> v1{ 4, 2, 7, 3, -5, 0, -3, 1 };
		REQUIRE(v1.mean() == 1.125);
	}
	// �������� ������ � ������ ��������
	SECTION("Emty array") {
		ExtArray<int> v1{};
		REQUIRE(v1.mean() == 0);
	}
}
// �������� ������ ��� ���������� �������� �������� �� ����� �������
TEST_CASE("Mean value of range") {
	SECTION("int numbers") {
		ExtArray<int> v1{ 4, 2, 7, 3, -5, 0, -3, 1 };
		REQUIRE(v1.mean(1,3) == 4);
	}
	// �������� ������ � ������ ��������
	SECTION("Emty array") {
		ExtArray<int> v1{};
		REQUIRE(v1.mean(1,3) == 0);
	}
	// �������� ������������ ������� ����������, ������ ���������� ����������
	SECTION("Incorrect range") {
		ExtArray<int> v1{ 4, 2, 7, 3, -5, 0, -3, 1 };
		REQUIRE_THROWS(v1.mean(3, 1) == 4);
	}
}
// �������� ������ ��� ���������� �������
TEST_CASE("Median value") {
	SECTION("real numbers") {
		ExtArray<double> v2{ 4.5, 0.7, 10.8, -3.5 };
		REQUIRE(v2.median() == 2.6);
	}
	// �������� ������ � ������ ��������
	SECTION("Emty array") {
		ExtArray<double> v2{};
		REQUIRE(v2.median() == 0);
	}
}
// �������� ������ ��� ������ ����
TEST_CASE("Mode value") {
	SECTION("int numbers") {
		ExtArray<int> v1{ 4, 2, 7, 2, 5, -5, 0, 5, 5 };
		REQUIRE(v1.mode().first == 5);
	}
	// �������� ������ � ������ ��������
	SECTION("Emty array") {
		ExtArray<int> v1{};
		REQUIRE(v1.mode().first == 0);
	}
}
// �������� ������ ��� ���������� ����������� �����
TEST_CASE("CheckSum value") {
	SECTION("int value") {
		ExtArray<int> v1{ 0, 1, 1, 0, 0, 1, 0, 1, 0 };
		REQUIRE(v1.checkSum() == 4);
	}
	SECTION("bool value") {
		ExtArray<bool> v1{ true, false, false, true, true };
		REQUIRE(v1.checkSum() == 3);
	}
	// �������� ���������� � ������ ������������� ����
	SECTION("Incorrect type") {
		ExtArray<double> v1{ 4, 2, 7, 3, -5, 0, -3, 1 };
		REQUIRE_THROWS_AS(v1.checkSum(), std::bad_typeid);
	}
	// �������� ���������� � ������ ������������ ������
	SECTION("Incorrect data") {
		ExtArray<int> v1{ 4, 2, 7, 3, -5, 0, -3, 1 };
		REQUIRE_THROWS_AS(v1.checkSum(), std::logic_error);
	}
	// �������� ������ � ������ ��������
	SECTION("Emty array") {
		ExtArray<int> v1{};
		REQUIRE(v1.mode().first == 0);
	}
}

