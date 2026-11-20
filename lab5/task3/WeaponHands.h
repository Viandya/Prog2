#pragma once

// Два независимых типа: для левой и для правой руки.
// Реализация обычного шаблона находится в заголовке, чтобы компилятор
// видел её при создании вариантов с оружием или с int.
template <typename Left, typename Right>
class WeaponHands {
private:
    Left leftWeapon;
    Right rightWeapon;

public:
    WeaponHands(const Left& leftWeapon, const Right& rightWeapon)
        : leftWeapon(leftWeapon), rightWeapon(rightWeapon) {}

    // Ссылки позволяют работать именно с объектами, хранящимися в руках.
    Left& getLeftWeapon() {
        return leftWeapon;
    }

    Right& getRightWeapon() {
        return rightWeapon;
    }

    void setLeftWeapon(const Left& weapon) {
        leftWeapon = weapon;
    }

    void setRightWeapon(const Right& weapon) {
        rightWeapon = weapon;
    }
};
