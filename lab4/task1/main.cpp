#include <iostream>
#include "Weapon.h"

int main() {
    Weapon sword("Меч", 30.0f, 3.0f); // Конструктор с параметрами
    Weapon defaultWeapon; // Конструктор без параметров

    std::cout << "Оружие: " << sword.name
              << ", урон: " << sword.damage
              << ", вес: " << sword.weight << " кг\n";

    std::cout << "Оружие по умолчанию: " << defaultWeapon.name
              << ", урон: " << defaultWeapon.damage
              << ", вес: " << defaultWeapon.weight << " кг\n";

    return 0;
}
