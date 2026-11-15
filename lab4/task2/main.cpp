#include <iostream>
#include "Weapon.h"

int main() {
    Weapon sword("Меч", 30.0f, 3.0f); // Автоматический объект
    std::cout << "Обычный объект: " << sword.name
              << ", урон: " << sword.damage
              << ", вес: " << sword.weight << " кг\n";

    Weapon* axe = new Weapon("Топор", 40.0f, 5.0f); // Динамический объект
    std::cout << "Динамический объект: " << axe->name
              << ", урон: " << axe->damage
              << ", вес: " << axe->weight << " кг\n";

    // Булевы результаты выводятся как 1 (true) и 0 (false).
    std::cout << "Меч слишком тяжёлый при лимите 2 кг: "
              << sword.IsTooHeavy(2.0f) << '\n'; // true
    std::cout << "Меч слишком тяжёлый при лимите 3 кг: "
              << sword.IsTooHeavy(3.0f) << '\n'; // false: вес равен лимиту
    std::cout << "Меч слишком тяжёлый при лимите 4 кг: "
              << sword.IsTooHeavy(4.0f) << '\n'; // false

    // *axe — сам объект, на который указывает указатель axe.
    std::cout << "Суммарный вес меча и топора: "
              << sword.GetTotalWeight(*axe) << " кг\n"; // 8
    std::cout << "Вес меча плюс 2 кг: "
              << sword.GetTotalWeight(2.0f) << " кг\n"; // 5

    std::cout << "Вызываем delete для топора.\n";
    delete axe; // Вызывает деструктор и освобождает динамическую память

    std::cout << "Выходим из main: меч уничтожится автоматически.\n";
    return 0;
}
