// Theobald vs Orc Noir.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
	//Genere une seed random (cree du "pseudo aleatoire")
	srand(time(NULL));

	int chevalier;
	int hpChevalier = 70;
	int atkChevalier = 5;
	int orc;
	int hpOrc = 50;
	int nbTour;
	char actionChevalier;
	

	std::cout << "Nous vous attendions chevalier, Grimgor l'horrible orc noir veut nous tuez, pouvez vous nous aidez a l'eliminer ?" << std::endl;
	
	//initialisation du tour
	for (nbTour=0 ; hpOrc>0 && hpChevalier>0 ; nbTour++) {
		// generation de l'atk de l'orc
		int atkOrc = 1 + (rand() % 8);
		// generation de la chance de crit de l'orc
		int critOrc = 1 + (rand() % 10);

		std::cout << "que voulez vous faire? (ATK|DEF|HEAl)" << std::endl;
		std::cin >> actionChevalier;
		
		// action d'attaque
		if (actionChevalier == 'a') {
			hpOrc -= atkChevalier;
			std::cout << "il reste " << hpOrc << " point de vie a l'ennemi" << std::endl;
			
			if (critOrc == 10) {
				std::cout << " Grimgor a invoque la waagh, coup critique!!" << std::endl;
				atkOrc *= 2;
			}
			
			hpChevalier -= atkOrc;
			std::cout << "Aie, Grimgor vous a enlevez " << atkOrc << " point de vie" << std::endl;
			std::cout << "il vous reste " << hpChevalier << " point de vie" << std::endl;
		}
		
		// action de defense
		else if (actionChevalier == 'd') {
			std::cout << "Armure renforcee, 70% des degats seront reduits au prochain tour!"<< std::endl;
			
			if (critOrc == 10) {
				std::cout << " Grimgor a invoque la waagh, coup critique!!" << std::endl;
				atkOrc *= 2;
			}
			
			hpChevalier -= atkOrc * 0.3;
			std::cout << "Grace a votre armure renforcee, Grimgor vous enleve " << atkOrc << " point de vie" << std::endl;
			std::cout << "il reste " << hpOrc << " point de vie a l'ennemi" << std::endl;
			std::cout << "il vous reste " << hpChevalier << " point de vie" << std::endl;
		}
		
		//action de heal
		else if (actionChevalier == 'h') {
			std::cout << "vous recuperez 3 point de vie!" << std::endl;
			hpChevalier += 3;
			std::cout << "vous avez " << hpChevalier << " point de vie" << std::endl;
			
			if (critOrc == 10) {
				std::cout << " Grimgor a invoque la waagh, coup critique!!" << std::endl;
				atkOrc *= 2;
			}
			
			hpChevalier -= atkOrc;
			std::cout << "Aie, Grimgor vous a enlevez " << atkOrc << " point de vie" << std::endl;
			std::cout << "il reste " << hpOrc << " point de vie a l'ennemi" << std::endl;
			std::cout << "il vous reste " << hpChevalier << " point de vie" << std::endl;
		}
		
		
		else {

		}
	} if (hpOrc < hpChevalier) {
		std::cout << "Felicitations chevalier, vous venez de sauver ce royaume d'une fin sombre, gloire a vous, notre sauveur" << std::endl; 
		std::cout << "nombre de tour joué: " << nbTour;
	}
	else {
		std::cout << "Grimgor a gagner, peu apres, votre royaume sombrit dans les abysses d'une civilisation sauvage et primitive, GAME OVER" << std::endl;
		std::cout << "nombre de tour joué: " << nbTour;
	}
	




		
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
