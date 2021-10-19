#pragma once
#include "Items.h"
class Potion :
    public Items
{
public:

    void use() override;
    void display() override;
};

