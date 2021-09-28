// 01.02 Formative poker.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <array>




enum class Valeur : int{
    Deux = 2,
    Trois = 3,
    Quatre = 4,
    Cinq = 5,
    Six = 6,
    Sept = 7,
    Huit = 8,
    Neuf = 9,
    Dix = 10,
    Valet = 11,
    Reine = 12,
    Roi = 13,
    As = 14
};
enum class Type : int {
    Pic= 1,
    Trefle=2,
    Carreau=3,
    Coeur=4

};

struct carte {
    Valeur valeur;
    Type type;
};

std::string printValue(Valeur Valeur_) {
    switch (Valeur_)
    {
    case Valeur::Deux:
        return "2";
        break;
    case Valeur::Trois:
        return "3";
        break;
    case Valeur::Quatre:
        return "4";
        break;
    case Valeur::Cinq:
        return "5";
        break;
    case Valeur::Six:
        return "6";
        break;
    case Valeur::Sept:
        return "7";
        break;
    case Valeur::Huit:
        return "8";
        break;
    case Valeur::Neuf:
        return "9";
        break;
    case Valeur::Dix:
        return "10";
        break;
    case Valeur::Valet:
        return "Valet";
        break;
    case Valeur::Reine:
        return "Reine";
        break;
    case Valeur::Roi:
        return "Roi";
        break;
    case Valeur::As:
        return "As";
        break;
    default:
        return "default";
        break;
    }
}
std::string printType(Type Type_) {
    switch (Type_)
    {
    case Type::Pic:
        return "Pic";
        break;
    case Type::Trefle:
        return "Trefle";
        break;
    case Type::Carreau:
        return "Carreau";
        break;
    case Type::Coeur:
        return "Coeur";
        break;
    default:
        return "default";
        break;
    }



    
}

std::string printCard(carte carte_) {
    std::string retour="";

    retour += printValue(carte_.valeur) + " de " + printType(carte_.type);

    return retour;


}

int main()
{
    srand(time(NULL));
    std::array<carte, 52> deck{};
    int deckCard = 0;


    for (int t = 1; t <= 4; t++) {

        for (int v = 2; v <= 14; v++) {
            carte maCarte;
         
            maCarte.valeur = static_cast<Valeur>(v);
            maCarte.type = static_cast<Type>(t);
          
            deck.at(deckCard) = maCarte;
           
            std::cout << printCard(maCarte) << std::endl;
            
            std::cout << "carte du deck = " << deckCard << std::endl;
            deckCard++;
        }



    }


}

