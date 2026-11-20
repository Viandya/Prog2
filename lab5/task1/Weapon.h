#pragma once

#include <string>

// Перечисление ограничивает выбор четырьмя типами оружия.
enum class WeaponType {
    ONEHANDED,
    TWOHANDED,
    BOW,
    CROSSBOW
};

class Weapon {

private:
    std::string name;
    float damage;
    float weight;
    WeaponType type; // Тип оружия

public:
    Weapon(std::string name, float damage, float weight, WeaponType type);
    Weapon();
    ~Weapon();

    std::string getName();
    float getDamage();
    float getWeight();
    WeaponType getType();
    void setDamage(float damage);

    bool isTooHeavy(float maxWeight);
    float getTotalWeight(const Weapon& other);
    float getTotalWeight(float otherWeight);
};
