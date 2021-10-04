// Exercise list.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <list>

int main()
{
	srand(time(NULL));

	std::list<int> numbers;

	std::list <int>::iterator it;
	
	for (auto i = 0; i < 12; i++) {

		numbers.push_back( 1 + rand() % 20);
	}
	
	for (auto value : numbers) {
		std::cout << "value = " << value << std::endl;
	}
	
	it = numbers.begin();
	
	while (it != numbers.end()){

		if (*it % 2 == 0) {

			it = numbers.erase(it);

		}
		
		else {
			++it;
		}
	}
	
	std::cout << "*******************************************************" << std::endl;
	
	for (auto value : numbers) {
		std::cout << "value = " << value << std::endl;
	}



}

