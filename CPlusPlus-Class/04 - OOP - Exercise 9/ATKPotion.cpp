#include "ATKPotion.h"
#include <iostream>

void ATKPotion::use()
{
	std::cout << "Vous buvez une potion de force: +5ATK!!" << std::endl;
}

void ATKPotion::display()
{
	std::cout << "Une potion de force (+5ATK)" << std::endl;
}
