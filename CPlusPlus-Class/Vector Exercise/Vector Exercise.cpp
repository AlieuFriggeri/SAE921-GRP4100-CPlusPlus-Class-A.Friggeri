// Vector Exercise.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>





int main()
{

	srand(time(NULL));

	std::vector <int> nombres (12);
	

	
	for (int i = 0; i < nombres.size(); i++) {
		nombres.at(i) = rand() % 20 + 1;
		std::cout << "valeure :" << nombres.at(i) << std::endl;
		
		
	}
	std::vector <int>::iterator placeMin;
	int minVal = 20;
	
	for(std::vector<int>::iterator it = nombres.begin() ; it < nombres.end(); it++){
	
		
		if (minVal > *it) {
			minVal = *it;
			placeMin = it;
			std::cout << "la valeure min est desormais :" << minVal << std::endl;
			std::cout << "la valeure minimale est situé a la case :" << *placeMin << std::endl;
		}
	}
	nombres.insert(placeMin, 5, 0);








}

