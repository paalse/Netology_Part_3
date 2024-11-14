#include <iostream>
#include <Windows.h>
#include <string>

class Counter {

	int cnt;

	public:
		Counter() {
			cnt = 1;
		}

		Counter(int cnt) {
			this->cnt = cnt;
		}

		void increment() {
			cnt++;
		}

		void decrement() {
			cnt--;
		}

		int getCnt() {
			return cnt;
		}

		void setCnt(int cnt) {
			this->cnt = cnt;
		}
};



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string str = "";
	Counter myCnt;


	std::cout << "Хотите ввести начальное значение да/нет: ";
	std::cin >> str;

	if (str =="да") {
		std::cout << "Введите начальное значение счетчика: ";
		std::cin >> str;
		//Counter myCnt(std::stoi(str));
		myCnt.setCnt(std::stoi(str));
	}
	

	do {
		std::cout << "Введите команду('+', '-', '=' или 'x'): ";
		std::cin >> str;

		if (str == "+") {
			myCnt.increment();
		}
		else if (str == "-") {
			myCnt.decrement();
		}
		else if (str == "=") {
			std::cout << myCnt.getCnt() << std::endl;
		}

	} while (str != "x");

	std::cout << "До свидания!";

	return 0;
}