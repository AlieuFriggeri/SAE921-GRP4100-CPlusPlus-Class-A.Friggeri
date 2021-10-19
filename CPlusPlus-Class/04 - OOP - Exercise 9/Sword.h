#pragma once
#include "Weapons.h"
class Sword :
    public Weapons
{
    void use() override;

    void display() override;
    void equip() override;
};

