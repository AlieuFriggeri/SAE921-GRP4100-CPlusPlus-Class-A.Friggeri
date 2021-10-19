#pragma once
#include "Weapons.h"
class Bow :
    public Weapons
{
    void use() override;
    void display() override;
};

