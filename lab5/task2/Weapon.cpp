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

std::string Weapon::getName() {
    return name;
}

float Weapon::getDamage() {
    return damage;
}

float Weapon::getWeight() {
    return weight;
}

void Weapon::setDamage(float damage) {
    this->damage = damage; // Отличаем поле объекта от одноимённого параметра
}

bool Weapon::isTooHeavy(float maxWeight) {
    return maxWeight < weight;
}

float Weapon::getTotalWeight(const Weapon& other) {
    return getTotalWeight(other.weight);
}

float Weapon::getTotalWeight(float otherWeight) {
    return weight + otherWeight;
}

WeaponType Weapon::getType() {
    return type;
}

bool Weapon::operator>(Weapon& other) {
    return getDamage() > other.getDamage();
}

bool Weapon::operator<(Weapon& other) {
    return getDamage() < other.getDamage();
}
