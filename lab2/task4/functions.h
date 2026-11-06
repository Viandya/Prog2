#ifndef FUNCTIONS_H // Проверка подключения
#define FUNCTIONS_H // Защита от повторного подключения

#define SUM(a, b) ((a) + (b)) // Макрос для суммы двух чисел

namespace MyFunctions { // Создаем пространство имен
    void staticFunction(int number); // Объявляем функцию
} // Конец пространства имен

#endif // Конец защиты заголовочного файла
