#pragma once // Защита от повторного подключения

#include <string>

class Weapon {
public:
    std::string name; // Название оружия
    float damage; // Наносимый урон
    float weight; // Вес в килограммах

    Weapon(std::string name, float damage, float weight);
    Weapon(); // Конструктор без параметров
};
