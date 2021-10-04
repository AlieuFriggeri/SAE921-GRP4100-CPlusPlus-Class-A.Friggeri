// List Exercise 3.3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <list>
#include <string>

// A corriger poure la semaine pro (semaine du 4 octobre)
// trouver les separateur de mot, etablir leur position, etablir la liste de mots.
std::list<std::string> getSentence(std::string sentence_, char separator_) {
    std::list<std::string> words;


    int foundPosition = -1;
    do {
        foundPosition = sentence_.find(separator_, foundPosition + 1);
        if (foundPosition != -1) {
            std::string oneWord = sentence_.substr(foundPosition, 3);
            sentence_.replace(foundPosition, sentence_.length());
        }

    } while (foundPosition != -1);

    return message_;
}

int main()
{
    std::string sentence = "Sometimes ideas are like good wine in that they just need time";
    std::list<std::string> words;


    std::cout << "Sometimes ideas are like good wine in that they just need time" << std::endl;




    std::cout << "Hello World!\n";
}


