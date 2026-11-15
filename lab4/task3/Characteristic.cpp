#include "Characteristic.h"

Characteristic::Characteristic(float strength) : strength(strength) {}

float Characteristic::GetDamage(const Weapon& weapon) {
    // Прямой доступ к private-полю разрешён благодаря friend class.
    return strength + weapon.damage;
}
