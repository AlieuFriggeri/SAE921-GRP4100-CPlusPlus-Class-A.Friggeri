// 04 - OOP - Exercise 7.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "Arbre.h"
#include "Pommier.h"
#include "Poirier.h"
#include "Cerisier.h"
#include <iostream>
#include <vector>



int main()
{
    int stockFruits;

    srand (time(NULL));

    std::vector<Arbre> jardinArbre;

    Arbre stockFruits;
    Pommier pommier;
    Cerisier cerisier;
    Poirier poirier;
    
    
    



    





        return 0;
    
        poirier.getNbFruits(stockFruits);

   
    
    

    jardinArbre.push_back(cerisier);
    jardinArbre.push_back(poirier);
    jardinArbre.push_back(pommier);
    
    
    stockFruits.displayStock();

    poirier.displayArbre();
    
    poirier.couperArbre();

    poirier.displayArbre();

    stockFruits.displayStock();

   /* for (std::vector<Arbre>::iterator it = jardinArbre.begin(); it < jardinArbre.end(); it++)
    {
        int valeurArbre 



        std::cout << " dans ce " << "monde" << "il y a" <<  << std::endl;
    }


    std::cout << "Hello World!\n"; */
    
}


