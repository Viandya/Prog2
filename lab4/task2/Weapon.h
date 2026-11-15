#pragma once

#include <string>

class Weapon {
public:
    std::string name;
    float damage;
    float weight;

    Weapon(std::string name, float damage, float weight);
    Weapon();
    ~Weapon(); // Вызывается при уничтожении объекта

    // true означает, что вес оружия превышает допустимый вес.
    bool IsTooHeavy(float maxWeight);

    // Перегрузки: одно имя, но разные типы параметров.
    float GetTotalWeight(const Weapon& other);
    float GetTotalWeight(float otherWeight);
};
