#pragma once

#include <string>

struct Player {
    int id;
    std::string login;
    std::string password;

    void Print(); // По заданию метод вывода находится в структуре
};
