// 04 - OOP - Exercise 4 - Candy Shop.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//


#include  "Candies.h"
#include <vector>
#include <string>

int main()
{
    std::cout << "Hello World!\n";

   // Candies myBag(Candies::CandyType::Dragibus, 40);
    std::vector<Candies> stock;

    stock.push_back(Candies(Candies::CandyType::Dragibus, 40));
    stock.push_back(Candies(Candies::CandyType::Sucette, 60));
    stock.push_back(Candies(Candies::CandyType::Fraise, 100));

    std::cout << "do you want to buy candies?" << std::endl;
    for (auto candyBag : stock)
    {
        std::cout  << candyBag.getEnumName(candyBag.getType()) << " " << candyBag.getQty() << std::endl;
    }

}

    