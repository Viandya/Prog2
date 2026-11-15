#pragma once

#include "Weapon.h"

class MagicWeapon : public Weapon {
private:
    float additionalDamage; // Дополнительный магический урон

public:
    MagicWeapon(std::string name, float damage, float weight,
                WeaponType type, float additionalDamage);
    MagicWeapon();

    float GetAdditionalDamage();
};
