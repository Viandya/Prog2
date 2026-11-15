#include "MagicWeapon.h"

MagicWeapon::MagicWeapon(std::string name, float damage, float weight,
                         WeaponType type, float additionalDamage)
    : Weapon(name, damage, weight, type), additionalDamage(additionalDamage) {}

MagicWeapon::MagicWeapon()
    : MagicWeapon("Магический кинжал", 10.0f, 1.0f, WeaponType::ONEHANDED, 5.0f) {}

float MagicWeapon::GetAdditionalDamage() {
    return additionalDamage;
}

float MagicWeapon::GetDamage() {
    // Явно вызываем метод родителя, чтобы получить базовую часть урона.
    return Weapon::GetDamage() + additionalDamage;
}
