// Formative Roulette Russe.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include <string>





int main()
{
    srand(time(NULL));
    int joueur1 = 1;
    int joueur2 = 1;
    std::string  winner;
    char answer;
    int bullet =  rand() % 6;
    int bulletPlace = rand() %6;
    char continuer = 'y';
    std::vector<int>chambers;

    chambers.push_back(1);
    chambers.push_back(2);
    chambers.push_back(3);
    chambers.push_back(4);
    chambers.push_back(5);
    chambers.push_back(6);

    
    while (continuer == 'y') {
        
        bullet = rand() % 6;

        do {
            joueur1 = 1;
            joueur2 = 2;
            
            //premier tour (joueur1)
            std::cout << "player 1, take the shot? (y/n)" << std::endl;
            std::cin >> answer;
            if (answer == 'y') {

                if (bullet == rand() % 6) {
                    joueur1 =- 1;
                    winner = "joueur 2";
                    std::cout << "BAW! unlucky, the last surviving is : " << winner << std::endl;
                }
                else {
                    std::cout << "you pulled the trigger and survived! next turn." << std::endl;
                }
            }
            
            
                //2eme tour (joueur 2)
                if(joueur1 >= 1){
                std::cout << "player 2, take the shot? (y/n)" << std::endl;
                std::cin >> answer;
                if (answer == 'y') {

                    if (bullet == rand() % 6) {
                        joueur2 =- 1;
                        winner = "joueur 1";
                        std::cout << "BAW! unlucky, the last surviving is : " << winner << std::endl;
                    }
                    else {
                        std::cout << "you pulled the trigger and survived! next turn." << std::endl;
                    }
                }

            }
                
            
        } while (joueur1 >= 1 && joueur2 >= 1);
        continuer = 'n';
        std::cout << winner << " is the winner of this amazing battle!!" << std::endl;
        std::cout << "want to restart? (y/n)" << std::endl;
        std::cin >> continuer;
        
    }

   
}
    //deuxieme tour (joueur 2)(proto)
    
    
    
    
    
    
    
    
    
    
    
    
    /* std::cout << "player 2, take the shot? (y/n)" << std::endl;
    std::cin >> answer;
    if (answer == 'y') {
        for (int i = 0; i < chambers.size(); i++) {
            if (bullet == chambers.at(i)) {
                joueur2 - 1;
                winner = "joueur1";
                std::cout << "the last surviving is : " << winner << std::endl;
            }
            else {
                std::cout << "you pulled the trigger and survived! next turn." << std::endl;
            }

        }

    }
}*/


