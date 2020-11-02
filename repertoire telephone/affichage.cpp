#include "affichage.h"
#include<iostream>
#include<string>
#include<fstream>
void afficher()
{
	std::string chaine;
	std::ifstream infichier;
	infichier.open("test.txt");
	if (infichier.is_open())
	{
		while (infichier.good())
		{
			std::getline(infichier, chaine);
			std::cout << chaine<<"\n";
		}infichier.close();
	}
	
}