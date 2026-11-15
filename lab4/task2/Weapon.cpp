#include <iostream>
#include "Weapon.h"

Weapon::Weapon(std::string name, float damage, float weight)
    : name(name), damage(damage), weight(weight) {}

Weapon::Weapon() : Weapon("Кинжал", 10.0f, 1.0f) {}

Weapon::~Weapon() {
    std::cout << "Удаляется оружие: " << name
              << ", урон: " << damage
              << ", вес: " << weight << " кг\n";
}

bool Weapon::IsTooHeavy(float maxWeight) {
    return maxWeight < weight;
}

float Weapon::GetTotalWeight(const Weapon& other) {
    // Передаём вес в другую перегрузку, не дублируя сложение.
    return GetTotalWeight(other.weight);
}

float Weapon::GetTotalWeight(float otherWeight) {
    return weight + otherWeight;
}
