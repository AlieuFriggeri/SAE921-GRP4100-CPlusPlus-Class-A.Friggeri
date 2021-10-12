#pragma once
#include "Arbre.h"
class Poirier :
    public Arbre
{
public:
    using Arbre::Arbre;

    Poirier() {
        this->nbFruits_ = rand() % 500;
        this->poidFruits_ = 90;
    }

    Poirier(int nbFruits, int poidFruits) {

        nbFruits_ = nbFruits;
        poidFruits_ = poidFruits;
    }

};

