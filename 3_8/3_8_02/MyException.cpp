#include "MyException.h"

const char* MyException::what() const
{
    return message.c_str();     // �������� �� std::string ������ const char*
}