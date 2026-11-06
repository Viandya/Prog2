#include <iostream> // Библиотека вывода
#include "functions.h" // Подключаем заголовочный файл

using namespace std; // Используем стандартное пространство имен

namespace MyFunctions { // Пространство имен
    void staticFunction(int number) { // Начало функции
        static int previous = 0; // Статическая переменная

        cout << "Сумма = " << number + previous << endl; // Вывод суммы

        previous = number; // Запоминаем переданное число
    } // Конец функции
} // Конец пространства имен
