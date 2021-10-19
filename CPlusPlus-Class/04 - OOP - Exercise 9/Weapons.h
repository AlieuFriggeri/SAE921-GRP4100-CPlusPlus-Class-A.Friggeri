#pragma once
#include "Items.h"
class Weapons :
    public Items
{
    Weapons currentWeapon;

public:
    void use() override;
    void display() override;
    void virtual equip() = 0;
};

