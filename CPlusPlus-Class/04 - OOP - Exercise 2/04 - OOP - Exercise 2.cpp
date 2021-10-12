// 04 - OOP - Exercise 2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Point.h"

int main()
{

    Point firstPoint;
    firstPoint.x_ = 100;
    firstPoint.y_ = 100;

    firstPoint.afficher();
    
    Point secondPoint;
    secondPoint.x_ = 150;
    secondPoint.y_ = 150;

    secondPoint.afficher();
    
    Point middle = firstPoint + secondPoint;
    middle.afficher();
    
}

