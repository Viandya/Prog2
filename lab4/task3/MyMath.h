#pragma once

class MyMath {
public:
    static int counter; // Общий для класса счётчик вызовов

    static double Add(double a, double b);
    static double Sub(double a, double b);
    static double Mult(double a, double b);
    static double Div(double a, double b);
};
