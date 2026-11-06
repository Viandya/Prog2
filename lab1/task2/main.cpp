
#include <iostream> // Библиотека для вывода
#include <string> // Библиотека для строк
#include <clocale> // Библиотека для локали
#include "functions.h" // Подключаем заголовочный файл

using namespace std; // Используем стандартное пространство имен

void printData() { // Начало функции
    int number = 150; // Переменная типа int
    float decimal = 15.933f; // Переменная типа float
    unsigned char smallNumber = 250; // Переменная размером 1 байт

    cout << "number = " << number << endl; // Выводим int
    cout << "decimal = " << decimal << endl; // Выводим float
    cout << "smallNumber = " << (int)smallNumber << endl; // Выводим число 250

    int day = 15; // День рождения
    string month = "марта"; // Месяц рождения
    int year = 2005; // Год рождения

    cout << "Моя дата рождения: " << day << " " << month << " " << year << " года" << endl; // Выводим дату

    const float numberConst = 2.3f; // Числовая константа
    const string os = "WINDOWS"; // Строковая константа

    cout << numberConst << " " << os << endl; // Выводим константы
} // Конец функции

int main() { // Начало главной функции
    setlocale(LC_ALL, ""); // Настраиваем русскую локаль

    printData(); // Вызываем функцию

    return 0; // Завершаем программу
} // Конец главной функции
