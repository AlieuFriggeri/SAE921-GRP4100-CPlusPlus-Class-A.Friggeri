// Formative Annuaire Téléphonique (Map).cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, int> book;

    book.emplace("alieu friggeri", 345);
    book.emplace("orlando andreose", 123);

    std::string nom;
    std::string prenom;
    int numeroTel;
    char reponse;
    bool  continuer = true;

    //fonction d'ajout de personne dans l'annuaire (OK)
    while (continuer == true) {
        std::cout << "qui voulez vous ajoutez a votre annuaire?" << std::endl;

        std::cout << "son prenom?" << std::endl;
        std::cin >> prenom;

        std::cout << "son nom?" << std::endl;
        std::cin >> nom;

        std::cout << "son numero de tel?" << std::endl;
        std::cin >> numeroTel;

        book.emplace(prenom + " " + nom, numeroTel);
        std::cout << "l'ajout de " << prenom << " a ete effectuer avec succes, voulez vous ajoutez quelqun d'autre? (y/n)" << std::endl;
        std::cin >> reponse;
        if (reponse == 'y') {
            continuer = true;
        }
        else {
            continuer = false;
        }

    }
    //fonction de recherche de personne dans l'annuaire  (WIP)
    bool research = true;
    char reponse2;

    while (research == true) {

        std::string nom_voulu;
        std::string prenom_voulu;

        std::cout << "qui souhaitez vous rechercher dans l'annuaire? " << std::endl;

        std::cout << "son prenom?" << std::endl;
        std::cin >> prenom_voulu;

        std::cout << "son nom?" << std::endl;
        std::cin >> nom_voulu;

        for (auto it = book.begin(); it != book.end(); it++) {

            if (it->first == prenom_voulu + " " + nom_voulu) {

                std::cout << "le numero de " << prenom_voulu << " " << nom_voulu << " est: " << it->second << std::endl;
            }
            
        }
        
        std::cout << "voulez vous rechercher quelqun d'autre? (y/n)" << std::endl;
        std::cin >> reponse2;
        if (reponse2 == 'y') {
            research = true;
        }
        else {
            research = false;
        }











    }
}