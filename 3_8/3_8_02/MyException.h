#pragma once

#include <iostream>
#include <exception>

class MyException : public std::exception {
public:

    MyException(const std::string& message) : message{ message } {};

    const char* what() const override;

private:
    std::string message;    // сообщение об ошибке
};