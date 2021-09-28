// 01.02 exrcise strings.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>

std::string userFirstName;
std::string userLastName;
std::string userAge ;

int main()
{
    std::cout << "quel est votre prenom?"<< std::endl;
    std::cin >> userFirstName;
    std::cout << "et votre nom?" << std::endl;
    std::cin >> userLastName;
    std::cout << "pour finir, specifiez votre age." << std::endl;
    std::cin >> userAge;
    std::cout << "Bienvenue " << userFirstName <<" " << userLastName << " " << userAge << std::endl;
}


