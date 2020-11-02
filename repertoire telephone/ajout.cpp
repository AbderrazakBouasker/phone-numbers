#include <iostream>
#include <fstream>
#include<string>
#include "ajout.h"
void ajout()
{
	int numero;
	std::string nom, email;
	std::cout << "donner le nom:\t"; std::cin >> nom;
	std::cout << "\ndonner le numero:  "; std::cin >> numero;
	std::cout << "\ndonner l'email:\t"; std::cin >> email;
	std::ofstream outfichier;
	outfichier.open("test.txt", std::ios_base::app);
	outfichier << nom<< "|"<< numero<< "|"<< email<<"\n";
	outfichier.close();
}