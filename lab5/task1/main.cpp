#include <iostream>
#include "Weapon.h"
#include "MagicWeapon.h"
#include "Player.h"

int main() {
    // Проверяем конструкторы Weapon и все четыре значения перечисления.
    Weapon weapons[4] = {
        Weapon(),
        Weapon("Двуручный меч", 40.0f, 5.0f, WeaponType::TWOHANDED),
        Weapon("Лук", 20.0f, 2.0f, WeaponType::BOW),
        Weapon("Арбалет", 35.0f, 4.0f, WeaponType::CROSSBOW)
    };

    for (int i = 0; i < 4; i++) {
        std::cout << weapons[i].getName() << ": ";
        WeaponType type = weapons[i].getType();
        if (type == WeaponType::ONEHANDED) {
            std::cout << "Одноручное оружие\n";
        } else if (type == WeaponType::TWOHANDED) {
            std::cout << "Двуручное оружие\n";
        } else if (type == WeaponType::BOW) {
            std::cout << "Лук\n";
        } else if (type == WeaponType::CROSSBOW) {
            std::cout << "Арбалет\n";
        }
    }

    // Учебные данные игрока: присваиваем значение каждому полю.
    Player player;
    player.id = 1;
    player.login = "student";
    player.password = "example123";
    player.print();

    MagicWeapon staff("Магический посох", 30.0f, 3.0f, WeaponType::TWOHANDED, 15.0f);
    MagicWeapon defaultMagic;

    std::cout << "Магическое оружие: " << staff.getName()
              << ", базовый урон: " << staff.getDamage()
              << ", вес: " << staff.getWeight()
              << ", дополнительный урон: " << staff.getAdditionalDamage() << '\n';
    std::cout << "Магическое оружие по умолчанию: " << defaultMagic.getName()
              << ", базовый урон: " << defaultMagic.getDamage()
              << ", вес: " << defaultMagic.getWeight()
              << ", дополнительный урон: " << defaultMagic.getAdditionalDamage() << '\n';

    // Унаследованный getType возвращает тип, переданный в базовый конструктор.
    if (staff.getType() == WeaponType::TWOHANDED) {
        std::cout << "Посох — двуручное оружие.\n";
    }
    if (defaultMagic.getType() == WeaponType::ONEHANDED) {
        std::cout << "Магический кинжал — одноручное оружие.\n";
    }

    staff.setDamage(35.0f); // SET-метод унаследован от Weapon
    std::cout << "Базовый урон посоха после setDamage: " << staff.getDamage() << '\n';
    // Булевы значения выводятся как 1 (true) и 0 (false).
    std::cout << "Посох слишком тяжёлый при лимите 2 кг: " << staff.isTooHeavy(2.0f) << '\n';
    std::cout << "Посох слишком тяжёлый при лимите 3 кг: " << staff.isTooHeavy(3.0f) << '\n';
    std::cout << "Вес посоха и магического кинжала: " << staff.getTotalWeight(defaultMagic) << '\n';
    std::cout << "Вес посоха плюс 2 кг: " << staff.getTotalWeight(2.0f) << '\n';

    return 0;
}
