#include "HealthPotion.h"
#include <iostream>

void HealthPotion::use()
{
	std::cout << "Vous buvez une potion de soin: +5HP!!" << std::endl;
}

void HealthPotion::display()
{
	std::cout << "Une potion de soin (+5H)" << std::endl;
}
