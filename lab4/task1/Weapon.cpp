#include "Weapon.h"

// Список инициализации задаёт значения всех полей.
Weapon::Weapon(std::string name, float damage, float weight)
    : name(name), damage(damage), weight(weight) {}

// Делегирующий конструктор вызывает конструктор с тремя параметрами.
Weapon::Weapon() : Weapon("Кинжал", 10.0f, 1.0f) {}
