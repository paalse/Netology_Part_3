#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int monthNum;
    std::string strOutput;

    enum class Months {
        January = 1,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December

    };

    do {
        monthNum = 0;
        strOutput = "";
        std::cout << "������� ����� ������: ";
        std::cin >> monthNum;

        if (monthNum > 0 && monthNum < 13) {
            Months month = static_cast<Months>(monthNum);

            switch (month) {
            case Months::January: strOutput = "������"; break;
            case Months::February: strOutput = "�������"; break;
            case Months::March: strOutput = "����"; break;
            case Months::April: strOutput = "������"; break;
            case Months::May: strOutput = "���"; break;
            case Months::June: strOutput = "����"; break;
            case Months::July: strOutput = "����"; break;
            case Months::August: strOutput = "������"; break;
            case Months::September: strOutput = "��������"; break;
            case Months::October: strOutput = "�������"; break;
            case Months::November: strOutput = "������"; break;
            case Months::December: strOutput = "�������"; break;
            default:  break;
            }
        }
        else {
            strOutput = "������������ �����!";
        }

        std::cout << strOutput << std::endl;

    } while (monthNum != 0);

    std::cout << "�� ��������";

    return 0;
}