#include <iostream>
#include "Weapon.h"

Weapon::Weapon(std::string name, float damage, float weight, WeaponType type)
    : name(name), damage(damage), weight(weight), type(type) {}

Weapon::Weapon() : Weapon("Кинжал", 10.0f, 1.0f, WeaponType::ONEHANDED) {}

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

WeaponType Weapon::GetType() {
    return type;
}

bool Weapon::operator>(Weapon& other) {
    return GetDamage() > other.GetDamage();
}

bool Weapon::operator<(Weapon& other) {
    return GetDamage() < other.GetDamage();
}
