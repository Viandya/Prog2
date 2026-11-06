#include <iostream> // Библиотека вывода
#include <clocale> // Библиотека локали
#include "functions.h" // Подключаем заголовочный файл

using namespace std; // Стандартное пространство имен
using namespace MyFunctions; // Наше пространство имен

int main() { // Начало главной функции
    setlocale(LC_ALL, ""); // Настраиваем русскую локаль

    staticFunction(5); // Первый вызов функции
    staticFunction(10); // Второй вызов функции
    staticFunction(20); // Третий вызов функции
    staticFunction(7); // Четвертый вызов функции

    cout << "Макрос SUM = " << SUM(10, 20) << endl; // Проверяем макрос

    return 0; // Завершение программы
} // Конец главной функции
