#include <iostream>
#include "MyMath.h"

int MyMath::counter = 0; // Единственное определение статического поля

double MyMath::Add(double a, double b) {
    counter++;
    return a + b;
}

double MyMath::Sub(double a, double b) {
    counter++;
    return a - b;
}

double MyMath::Mult(double a, double b) {
    counter++;
    return a * b;
}

double MyMath::Div(double a, double b) {
    counter++;
    if (b == 0) {
        std::cout << "Ошибка: деление на ноль!\n";
        return 0; // Условное значение при ошибке, а не результат деления
    }
    return a / b;
}
