#include "Arbre.h"
#include <iostream>


int Arbre::displayArbre()
{
	

		if (this->poidFruits_ == 150)
		{
			std::cout << "Dans ce Pommier il y a [" << this-> nbFruits_ << "] pommes" << std::endl;
		}
		else if (this->poidFruits_ == 5)
		{
			std::cout << "Dans ce Cerisier il y a [" << this->nbFruits_ << "] cerises" << std::endl;
		}
		else if (this->poidFruits_ == 90)
		{
			std::cout << "Dans ce Poirier il y a [" << this->nbFruits_ << "] poires" << std::endl;
		}
		else
		{

		}
		
		return 0;
    
}

int Arbre::displayStock()
{
	std::cout << "dans votre stock il y a {" << stockFruits_ << "} fruits" << std::endl;
	return 0;
}

int Arbre::couperArbre()
{
	 stockFruits_ =+ this->nbFruits_;
	this->nbFruits_ = 0;
	
	
	return 0;
}

int Arbre::getNbFruits(int stockFruits)
{
	stockFruits += nbFruits_;
	return nbFruits_;
}


