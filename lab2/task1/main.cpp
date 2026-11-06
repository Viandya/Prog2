
#include <iostream> // Библиотека ввода и вывода
#include <clocale> // Библиотека для локали
#include "functions.h" // Подключение заголовочного файла

using namespace std; // Стандартное пространство имен

void calculator() { // Начало функции
    double a, b; // Объявляем два числа
    char operation; // Переменная для знака операции

    cout << "Введите первое число: "; // Запрос числа
    cin >> a; // Ввод первого числа
    cout << "Введите второе число: "; // Запрос числа
    cin >> b; // Ввод второго числа

    cout << "Среднее арифметическое = " << (a + b) / 2 << endl; // Среднее арифметическое

    cout << "Введите операцию (+, -, *, /): "; // Запрос операции
    cin >> operation; // Сохраняем операцию

    /*
    // Решение через if-else
    if (operation == '+') {
        cout << a + b << endl;
    }
    else if (operation == '-') {
        cout << a - b << endl;
    }
    else if (operation == '*') {
        cout << a * b << endl;
    }
    else if (operation == '/') {
        if (b != 0) {
            cout << a / b << endl;
        }
        else {
            cout << "Деление на ноль!" << endl;
        }
    }
    else {
        cout << "Неверная операция!" << endl;
    }
    */

    switch (operation) { // Проверяем выбранную операцию
        case '+': // Сложение
            cout << a + b << endl; // Вывод суммы
            break; // Выход из switch
        case '-': // Вычитание
            cout << a - b << endl; // Вывод разности
            break; // Выход из switch
        case '*': // Умножение
            cout << a * b << endl; // Вывод произведения
            break; // Выход из switch
        case '/': // Деление
            if (b != 0) { // Проверка делителя
                cout << a / b << endl; // Вывод результата
            } else { // Если делитель равен нулю
                cout << "Деление на ноль!" << endl; // Ошибка
            } // Конец проверки
            break; // Выход из switch
        default: // Неизвестная операция
            cout << "Неверная операция!" << endl; // Ошибка
    } // Конец switch
} // Конец функции

int main() { // Начало главной функции
    setlocale(LC_ALL, ""); // Установка русской локали
    calculator(); // Вызов калькулятора
    return 0; // Завершение программы
} // Конец main
