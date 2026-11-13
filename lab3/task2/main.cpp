#include <iostream>
#include «functions.h»

int main()
{
    // 2. Проверка sumArray
    int arr[] = { 1, 2, 3, 4, 5 };
    const int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << «Сумма элементов массива: « << sumArray(arr, arr + size) << std::endl;

    // 6. Получаем указатель на функцию, затем вызываем функцию по указателю
    Operation plus = getOperation(‘+’);
    Operation minus = getOperation(‘-‘);

    if (plus != nullptr)
    {
        std::cout << «10 + 3 = « << plus(10, 3) << std::endl;
    }
    if (minus != nullptr)
    {
        std::cout << «10 - 3 = « << minus(10, 3) << std::endl;
    }

    // 7. Динамический указатель типа float
    float* dynamic = new float(3.14f);

    // 8. Вывод в консоль и удаление
    std::cout << «Адрес: « << dynamic << «, значение: « << *dynamic << std::endl;
    delete dynamic;
    dynamic = nullptr;

    return 0;
}
