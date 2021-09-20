#include <iostream>

int main()
{

    /* initialize random seed */
    srand(time(NULL));

    int scoreCourant;
    int scorePrecedent = 7;
    
    bool continuer = true;
    
    int mise = 5;
    

        // je tire 30 fois les dés
    do
    {

        //un tirage
        int tirageDe1 = 1 + (rand() % 6);
        int tirageDe2 = 1 + (rand() % 6);

        //calcul de la somme des deux des
        scoreCourant = tirageDe1 + tirageDe2;

        //affichage du score
        std::cout << "Tirage " << tirageDe1 << " : " << tirageDe2 << std::endl;
        std::cout << "Votre score est :  " << scoreCourant << std::endl;
        std::cout << "score precedent : " << scorePrecedent << std::endl;

        //determiner si je gagne ou je perd
        if (scoreCourant > scorePrecedent) {
            mise *= 2;
            std::cout << "Bravo winner!" << std::endl;
            scorePrecedent = scoreCourant;

            //demander au joueur si il veut rejouer
            char reponse;
            std::cout <<"Vous possedez "<< mise <<" bitcoins" << std::endl;
            std::cout << "Voulez vous tentez de doublez votre mise? ( o/n )" << std::endl;
            std::cin >> reponse;
            if (reponse == 'o') {
                continuer = true;
            }
            
            //si le joueur perd, arreter le jeu
            else if ( reponse == 'n') {
                continuer = false;
            }
            else {
            }

        }
        else {
            std::cout << "tu as perdu mdr" << std::endl;
            std::cout << "Tu rentre avec " << mise << " bitcoins" << std::endl;
            //on perd donc on sort
            continuer = false;

            
        }
    } while (continuer == true);
}
