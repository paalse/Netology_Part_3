#include "MyException.h"

const char* MyException::what() const
{
    return message.c_str();     // получаем из std::string строку const char*
}