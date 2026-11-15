#include <iostream>
#include "Weapon.h"
#include "MagicWeapon.h"

int main() {
    Weapon sword("Меч", 30.0f, 3.0f, WeaponType::ONEHANDED);
    Weapon axe("Топор", 40.0f, 5.0f, WeaponType::TWOHANDED);
    MagicWeapon staff("Посох", 20.0f, 2.0f, WeaponType::TWOHANDED, 25.0f);
    MagicWeapon bow("Магический лук", 35.0f, 2.0f, WeaponType::BOW, 5.0f);
    MagicWeapon defaultMagic;

    std::cout << "Урон меча: " << sword.GetDamage() << '\n'; // 30
    std::cout << "Урон топора: " << axe.GetDamage() << '\n'; // 40
    std::cout << "Базовый урон посоха: " << staff.Weapon::GetDamage() << '\n'; // 20
    std::cout << "Дополнительный урон посоха: " << staff.GetAdditionalDamage() << '\n'; // 25
    std::cout << "Полный урон посоха: " << staff.GetDamage() << '\n'; // 45
    std::cout << "Полный урон магического лука: " << bow.GetDamage() << '\n'; // 40
    std::cout << "Урон магического оружия по умолчанию: " << defaultMagic.GetDamage() << '\n'; // 15

    // Указатель имеет тип Weapon*, но вызывает метод MagicWeapon.
    Weapon* weapon = &staff;
    std::cout << "Урон посоха через Weapon*: " << weapon->GetDamage() << '\n'; // 45

    // Операторы возвращают bool: в консоли 1 означает true, 0 — false.
    std::cout << "Меч > топор: " << (sword > axe) << '\n'; // 0
    std::cout << "Меч < топор: " << (sword < axe) << '\n'; // 1
    std::cout << "Посох > меч: " << (staff > sword) << '\n'; // 1
    std::cout << "Посох < меч: " << (staff < sword) << '\n'; // 0
    std::cout << "Меч > посох: " << (sword > staff) << '\n'; // 0
    std::cout << "Меч < посох: " << (sword < staff) << '\n'; // 1
    std::cout << "Посох > магический лук: " << (staff > bow) << '\n'; // 1
    std::cout << "Посох < магический лук: " << (staff < bow) << '\n'; // 0

    // При одинаковом уроне оба строгих сравнения дают false.
    std::cout << "Топор > магический лук: " << (axe > bow) << '\n'; // 0
    std::cout << "Топор < магический лук: " << (axe < bow) << '\n'; // 0

    // Проверяем сравнение через ссылки базового типа с обеих сторон.
    Weapon& first = staff;
    Weapon& second = bow;
    std::cout << "Сравнение через Weapon& (посох > лук): " << (first > second) << '\n'; // 1
    std::cout << "Сравнение через Weapon& (посох < лук): " << (first < second) << '\n'; // 0

    staff.SetDamage(10.0f); // Меняем базовую часть, дополнительная остаётся 25
    std::cout << "Урон посоха после SetDamage: " << staff.GetDamage() << '\n'; // 35
    std::cout << "Посох < топор после SetDamage: " << (staff < axe) << '\n'; // 1

    // Все объекты автоматические; weapon лишь указывает на staff.
    return 0;
}
