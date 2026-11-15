#pragma once

#include "Weapon.h"

class SingleUseWeapon : public Weapon {
private:
    bool used; // false — ещё не использовано, true — уже использовано

public:
    SingleUseWeapon(std::string name, float damage, float weight, WeaponType type);
    SingleUseWeapon();

    void Attack() override;
};
