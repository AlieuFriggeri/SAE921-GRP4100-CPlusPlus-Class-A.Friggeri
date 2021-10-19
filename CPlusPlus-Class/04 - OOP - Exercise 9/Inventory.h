#include <vector>
#include "Items.h"
#pragma once
class Inventory
{

	std::vector<Items*> items;


public:
	void add(Items* myItem);
	void display() ;

};

