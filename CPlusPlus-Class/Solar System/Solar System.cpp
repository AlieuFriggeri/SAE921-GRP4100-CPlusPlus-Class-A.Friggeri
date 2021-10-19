// Solar System.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "AstroObject.h"
int main()
{
    std::cout << "Hello World!\n";
    std::string Terre = "terre";
    int poids;
    int diametre;
    int distanceFromSun;
        AstroObject terre(Terre, diametre, poids, distanceFromSun);

}


