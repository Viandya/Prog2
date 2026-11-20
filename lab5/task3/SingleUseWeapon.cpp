#include <iostream>
#include "SingleUseWeapon.h"

SingleUseWeapon::SingleUseWeapon(std::string name, float damage, float weight, WeaponType type)
    : Weapon(name, damage, weight, type), used(false) {}

SingleUseWeapon::SingleUseWeapon()
    : SingleUseWeapon("Метательный нож", 15.0f, 0.5f, WeaponType::ONEHANDED) {}

void SingleUseWeapon::attack() {
    if (used) {
        std::cout << "Оружие уже было использовано\n";
    } else {
        std::cout << "Атакуем одноразовым оружием\n";
        used = true;
    }
}
