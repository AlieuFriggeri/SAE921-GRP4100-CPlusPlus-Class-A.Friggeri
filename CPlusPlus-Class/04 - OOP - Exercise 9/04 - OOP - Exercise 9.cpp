// 04 - OOP - Exercise 9.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include "Items.h"
#include "Maps.h"
#include "Inventory.h"
#include "Potion.h"
#include "ATKPotion.h"
#include "HealthPotion.h"
#include "Sword.h"


int main()
{
    Inventory myInventory;

    Sword mySword;
    Maps myMap;
    ATKPotion myATKPotion;
    HealthPotion myHealthPotion;
    Potion myPotion;

    
    
    myMap.use();

    myInventory.add(&myMap);
    myInventory.add(&myHealthPotion);
    myInventory.add(&myPotion);
    myInventory.display();
    



}


