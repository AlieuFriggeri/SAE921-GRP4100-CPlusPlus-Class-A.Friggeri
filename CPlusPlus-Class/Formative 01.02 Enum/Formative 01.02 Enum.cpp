// Formative 01.02 Enum.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

char animalChoisi = 'r';
enum class animaux : char{
    Lion = 'l',
    Souris ='s',
    Chat='c',
    Chien='h',
    Pigeon='p',
    Mouton='m'
};
std::string criAnimal(animaux animaux_) {
    switch (animaux_) {
    case animaux::Lion:
        return "Le lion rugis ROAR";
        break;
    case animaux::Souris:
        return "La souris couine SQUIK";
        break;
    case animaux::Chat:
        return "Le chat miaul3 MIAOU";
        break;
    case animaux::Chien:
        return "le chien aboie WOUF";
        break;
    case animaux::Pigeon:
        return"le pigeon roucoule ROO";
        break;
    case animaux::Mouton:
        return "le mouton fait MEEEEH";
        break;
    default:
        return "impossible (value out of range)";
        break;


    }
   
}


int main()
{
    char continuer ;
    do {
        animaux printAnimal = animaux::Chat;
        std::cout << "Bonjour, de quel animal voulez vous connaitre le cri? (Lion(l), souris(s), chat(c), chien(h), pigeon(p), mouton(m))" << std::endl;
        std::cin >> animalChoisi;

        printAnimal = static_cast<animaux>(animalChoisi);
        std::cout << criAnimal(printAnimal) << std::endl;
        std::cout<< "voulez vous recommencer? (y/n)"<< std::endl;
        std::cin >> continuer;
    } while (continuer == 'y');
    
       

}

