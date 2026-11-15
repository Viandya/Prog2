#include <iostream>
#include "Weapon.h"
#include "Characteristic.h"
#include "MyMath.h"

int main() {
    Weapon sword("Меч", 30.0f, 3.0f);
    Weapon defaultWeapon;

    // Закрытые поля читаем через GET-методы.
    std::cout << "Оружие: " << sword.GetName()
              << ", урон: " << sword.GetDamage()
              << ", вес: " << sword.GetWeight() << " кг\n";
    std::cout << "Оружие по умолчанию: " << defaultWeapon.GetName()
              << ", урон: " << defaultWeapon.GetDamage()
              << ", вес: " << defaultWeapon.GetWeight() << " кг\n";

    sword.SetDamage(45.0f); // Изменяем закрытое поле через SET-метод
    std::cout << "Урон меча после SetDamage: " << sword.GetDamage() << '\n';

    // Проверяем методы веса после разделения класса на .h и .cpp.
    // Булевы результаты выводятся как 1 (true) и 0 (false).
    std::cout << "Меч слишком тяжёлый при лимите 2 кг: "
              << sword.IsTooHeavy(2.0f) << '\n';
    std::cout << "Меч слишком тяжёлый при лимите 3 кг: "
              << sword.IsTooHeavy(3.0f) << '\n';
    std::cout << "Меч слишком тяжёлый при лимите 4 кг: "
              << sword.IsTooHeavy(4.0f) << '\n';
    std::cout << "Вес меча и кинжала: "
              << sword.GetTotalWeight(defaultWeapon) << " кг\n";
    std::cout << "Вес меча плюс 2 кг: "
              << sword.GetTotalWeight(2.0f) << " кг\n";

    Weapon* axe = new Weapon("Топор", 40.0f, 5.0f);
    std::cout << "Динамический объект: " << axe->GetName()
              << ", урон: " << axe->GetDamage()
              << ", вес: " << axe->GetWeight() << " кг\n";
    delete axe;

    Characteristic character(20.0f);
    std::cout << "Сила персонажа + урон меча: "
              << character.GetDamage(sword) << '\n'; // 20 + 45 = 65

    // Статические методы вызываем через имя класса, без создания объекта.
    std::cout << "Начальное количество вызовов: " << MyMath::counter << '\n';
    std::cout << "Add(10, 4) = " << MyMath::Add(10, 4) << '\n';
    std::cout << "Sub(10, 4) = " << MyMath::Sub(10, 4) << '\n';
    std::cout << "Mult(10, 4) = " << MyMath::Mult(10, 4) << '\n';
    std::cout << "Div(10, 4) = " << MyMath::Div(10, 4) << '\n';
    std::cout << "Количество вызовов: " << MyMath::counter << '\n'; // 4

    return 0; // Автоматические объекты уничтожаются при выходе из main
}
