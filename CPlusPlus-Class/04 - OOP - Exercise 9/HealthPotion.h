#pragma once
#include "Potion.h"
class HealthPotion :
    public Potion
{


public:
    void use() override;
    void display() override;

};

