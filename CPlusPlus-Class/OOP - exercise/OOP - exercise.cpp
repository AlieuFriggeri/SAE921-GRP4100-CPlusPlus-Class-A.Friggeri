// OOP - exercise.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "Car.h"
#include <iostream>

int main()
{
    Car firstCar("ford", "mustang", 300);
    Car secondCar("fiat", "panda", 13);
    
    firstCar.setBrand("Ford");
    firstCar.setStyle("Mustang");
    firstCar.setPower(300);

    std::cout << firstCar.toString() << std::endl;

    secondCar.setBrand("Fiat") ;
    secondCar.setStyle("Panda");
    secondCar.setPower(13);

    std::cout << secondCar.toString() << std::endl;
}

