// 01.02 Formative Strings.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <array>


std::array < std::string, 3> messages{};


struct Character {
    std::string nom;
    std::string titre;
    std::string planete;
    std::string vaisseau;


    Character persoInitial(
        std::string nom_,
        std::string titre_,
        std::string planete_,
        std::string vaisseau_) {

        Character persoChoisi;
        persoChoisi.nom = nom_;
        persoChoisi.titre = titre_;
        persoChoisi.planete = planete_;
        persoChoisi.vaisseau = vaisseau_;
        return persoChoisi;



    }
    void baseMessage() {
        messages.at(0) = "Bienvenue [titre] [nom] a la federation galactique";
        messages.at(1) = "une mission tres importante vous attend sur [planete]";
        messages.at(2) = "[titre] [nom] montez dans votre [vaisseau] et aller au combat!";


    };
    std::string messageReplacement(std::string message_, std::string eye_, std::string needle_) {
        int foundPosition;
        do {
            foundPosition = message_.find(eye_, foundPosition + 1);
            if (foundPosition != -1) {
               
                message_.replace(foundPosition, eye_.length(), needle_);
            }

        } while (foundPosition != -1);

        return message_;
    };
    std::string getReplacedMessage(std::string message_, Character character_) {

        message_ = messageReplacement(message_, "[Title]", character_.titre);
        message_ = messageReplacement(message_, "[Name]", character_.nom);
        message_ = messageReplacement(message_, "[Planet]", character_.planete);
        message_ = messageReplacement(message_, "[Ship]", character_.vaisseau);
        return message_;

    };

    int main()
    {
        std::cout << "Hello World!\n";
    }
    
