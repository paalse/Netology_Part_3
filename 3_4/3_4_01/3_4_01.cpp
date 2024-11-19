#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>

class Address {
	private:
		std::string sity;
		std::string street;
		int home;
		int flat;

	public:
		Address(std::string inSity, std::string inStreet, int inHome, int inFlat)
			:sity(inSity), street(inStreet), home(inHome), flat(inFlat)
		{};
		
		std::string printAddress() {
			return sity + ", " + street + ", " + std::to_string(home) + ", " + std::to_string(flat);
		}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	std::ifstream fin("in.txt");
	std::ofstream fout("out.txt");
	std::string str = "";
	int cnt = 0;
	std::string sity;
	std::string street;
	int home;
	int flat;

	if (fin.is_open()) {
		fin >> str;
		cnt = stoi(str);
		Address** addrArray = new Address*[cnt];

		for (int i=0; i < cnt; i++) {
			fin >> sity;
			fin >> street;
			fin >> home;
			fin >> flat;
			Address* addr = new Address(sity, street, home, flat);
			addrArray[i] = addr;
		}

		if (fout.is_open()) {
			for (int i = 0; i < cnt; i++) {
				std::cout << addrArray[i]->printAddress() << std::endl;
				fout << addrArray[i]->printAddress() << "\n";
			}
		}
		else {
			std::cout << "Ошибка открытия файла out.txt";
		}

		for (int i=0; i < cnt; i++) {
			std::cout << "Освобождение памяти";
			delete addrArray[i];
		}

		delete[] addrArray;
	}
	else {
		std::cout << "Ошибка открытия файла in.txt";
	}

	fin.close();
	fout.close();

	return EXIT_SUCCESS;
}