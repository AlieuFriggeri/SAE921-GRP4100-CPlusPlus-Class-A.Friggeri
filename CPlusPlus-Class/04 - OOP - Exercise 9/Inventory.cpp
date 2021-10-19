#include "Inventory.h"
#include <iostream>

void Inventory::add(Items* myItem)
{

	items.emplace_back(myItem);
}

void Inventory::display()
{
	for (auto i : items)
	{
		i->display();
	}
}



