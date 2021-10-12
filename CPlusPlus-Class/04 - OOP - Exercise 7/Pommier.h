#pragma once
#include "Arbre.h"
#include <vector>
class Pommier :
    public Arbre
{
public:
    //using Arbre::displayArbre;

    using Arbre::Arbre;
      
    Pommier() {
        this->nbFruits_ = rand() % 850;
        this->poidFruits_ = 150;
    }

    Pommier(int nbFruits, int poidFruits) {

        nbFruits_ = nbFruits;
        poidFruits_ = poidFruits;
 }

};

