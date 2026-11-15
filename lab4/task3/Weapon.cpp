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

std::string Weapon::GetName() {
    return name;
}

float Weapon::GetDamage() {
    return damage;
}

float Weapon::GetWeight() {
    return weight;
}

void Weapon::SetDamage(float damage) {
    this->damage = damage; // Отличаем поле объекта от одноимённого параметра
}

bool Weapon::IsTooHeavy(float maxWeight) {
    return maxWeight < weight;
}

float Weapon::GetTotalWeight(const Weapon& other) {
    return GetTotalWeight(other.weight);
}

float Weapon::GetTotalWeight(float otherWeight) {
    return weight + otherWeight;
}
