#pragma once
#include "Arbre.h"
class Cerisier :
    public Arbre
{
public:
    using Arbre::Arbre;

    Cerisier() {
        this->nbFruits_ = rand() %5000;
        this->poidFruits_ = 5;
    }

    Cerisier(int nbFruits, int poidFruits) {

        nbFruits_ = nbFruits;
        poidFruits_ = poidFruits;
    }
};

