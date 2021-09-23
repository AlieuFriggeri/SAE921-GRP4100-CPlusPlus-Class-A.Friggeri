// Array exercise 01.02.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <array>


int main() {
	
	int nbToFind;
	
	bool nbTableau = false;

	char continuer = 'y';
	
	std::array<int, 10> tableau {};
	
	srand(time(NULL));
	
	
	do {
		std::cout << "veuillez inserer une valeur entre 0 et 20" << std::endl;

		std::cin >> nbToFind;

		for (int i = 0; i < tableau.size(); i++) {
			tableau.at(i) = rand() % 21;


		}
		for (int i = 0; i < tableau.size(); i++) {
			std::cout << tableau.at(i) << " : ";
			if (nbToFind == tableau.at(i)) {

				nbTableau = true;
			}
		}
		if (nbTableau == true) {
			std::cout << "votre valeur " << nbToFind << " est presente dans ce tableau" << std::endl;
		}
		else {
			std::cout << "votre valeur " << nbToFind << " n'est pas presente dans ce tableau" << std::endl;
		}
		std::cout << "voulez vous recommencer ? (y/n)" << std::endl;
		std::cin >> continuer;
	} while (continuer == 'y');

}
/*exercice tableau n*1 
int bestScore;
int main()
{
	int score[5]{ 84, 92, 76, 81, 56 };
	for (int i = 0; i < 5; i++) {
		std::cout <<"votre meilleur score actuellement est de " << bestScore << std:: endl;
		std::cout << "tour numero " << i << " : " << score[i] << std::endl;
		if (bestScore < score[i]) {
			bestScore = score[i];
			std::cout << "votre nouveau meilleur score est de " << bestScore << std::endl;
		}
		
	}
}
*/

