#pragma once

#include <string>

class Weapon {
    // Characteristic получает доступ к закрытым полям Weapon.
    friend class Characteristic;

private:
    std::string name;
    float damage;
    float weight;

public:
    Weapon(std::string name, float damage, float weight);
    Weapon();
    ~Weapon();

    std::string GetName();
    float GetDamage();
    float GetWeight();
    void SetDamage(float damage);

    bool IsTooHeavy(float maxWeight);
    float GetTotalWeight(const Weapon& other);
    float GetTotalWeight(float otherWeight);
};
