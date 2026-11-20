#include <iostream>
#include "Player.h"

void Player::print() {
    std::cout << "ID: " << id << '\n';
    std::cout << "Логин: " << login << '\n';
    std::cout << "Пароль: " << password << '\n';
}
