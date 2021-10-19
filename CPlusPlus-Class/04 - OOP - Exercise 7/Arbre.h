#pragma once
#include <vector>
class Arbre
{
public:
	Arbre() {
		poidFruits_ = 10;
		nbFruits_ = 15;

	}

	Arbre(int nbFruits, int poidFruits) {

		nbFruits_ = nbFruits;
		poidFruits_ = poidFruits;

	}

	int displayArbre();

	int displayStock();
	
	int couperArbre();

	int getNbFruits(int stockFruits);
protected:

	int poidFruits_;
	int nbFruits_;
	



public:
	
	static int stockFruits_;






};

