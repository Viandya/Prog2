#include <iostream>
#include "pointers.h"

void basicPointer()
{
    // 1. Переменная
    int number = 42;

    // 2. Указатель на переменную
    int* ptr = &number;

    // 3. Адрес и значение по этому адресу
    std::cout << "Адрес в указателе: " << ptr << std::endl;
    std::cout << "Значение по адресу: " << *ptr << std::endl;

    // 4. Меняем значение через указатель
    *ptr = 100;

    // 5. Проверяем, что переменная тоже изменилась
    std::cout << "number после изменения: " << number << std::endl;
}

void arrayPointer()
{
    // 6. Массив из нескольких элементов
    int arr[] = { 10, 20, 30, 40, 50 };
    const int size = sizeof(arr) / sizeof(arr[0]);

    // 7. Вывод всех элементов через указатель
    int* ptr = arr;
    std::cout << "Элементы массива: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;
}

void constPointer()
{
    // 8. Целая переменная со значением 5
    int five = 5;

    // 9. Константный указатель: адрес менять нельзя, значение - можно
    int* const constPtr = &five;

    // 10. Проверка
    // int other = 7;
    // constPtr = &other; // ОШИБКА КОМПИЛЯТОРА (раскомментируйте обе строки, чтобы увидеть)

    *constPtr = 55; // значение менять можно
    std::cout << "five после изменения через указатель: " << five << std::endl;
}
