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

    std::string GetName();
    virtual float GetDamage(); // Может быть переопределён в дочернем классе
    float GetWeight();
    WeaponType GetType();
    void SetDamage(float damage);

    // Принимаем ссылку, чтобы сохранить поведение магического оружия.
    bool operator>(Weapon& other);
    bool operator<(Weapon& other);

    bool IsTooHeavy(float maxWeight);
    float GetTotalWeight(const Weapon& other);
    float GetTotalWeight(float otherWeight);
};
