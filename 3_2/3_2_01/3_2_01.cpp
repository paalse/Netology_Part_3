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
        std::cout << "Введите номер месяца: ";
        std::cin >> monthNum;

        if (monthNum > 0 && monthNum < 13) {
            Months month = static_cast<Months>(monthNum);

            switch (month) {
            case Months::January: strOutput = "Январь"; break;
            case Months::February: strOutput = "Февраль"; break;
            case Months::March: strOutput = "Март"; break;
            case Months::April: strOutput = "Апрель"; break;
            case Months::May: strOutput = "Май"; break;
            case Months::June: strOutput = "Июнь"; break;
            case Months::July: strOutput = "Июль"; break;
            case Months::August: strOutput = "Август"; break;
            case Months::September: strOutput = "Сентябрь"; break;
            case Months::October: strOutput = "Октябрь"; break;
            case Months::November: strOutput = "Ноябрь"; break;
            case Months::December: strOutput = "Декабрь"; break;
            default:  break;
            }
        }
        else {
            strOutput = "Неправильный номер!";
        }

        std::cout << strOutput << std::endl;

    } while (monthNum != 0);

    std::cout << "До свидание";

    return 0;
}