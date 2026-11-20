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

    // Чисто виртуальный метод делает Weapon абстрактным классом.
    virtual void attack() = 0;

    std::string getName();
    virtual float getDamage(); // Может быть переопределён в дочернем классе
    float getWeight();
    WeaponType getType();
    void setDamage(float damage);

    // Принимаем ссылку, чтобы сохранить поведение магического оружия.
    bool operator>(Weapon& other);
    bool operator<(Weapon& other);

    bool isTooHeavy(float maxWeight);
    float getTotalWeight(const Weapon& other);
    float getTotalWeight(float otherWeight);
};
