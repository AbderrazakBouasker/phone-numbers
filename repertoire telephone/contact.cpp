#include "contact.h"
#include <string>
#include <iostream>
class contact
{
private:
	int numero;
	std::string name;
	std::string email;
public:
	contact();
	~contact() {};
	void modify();
	void show();
};

contact::contact()
{
	std::cout << "donner le nom:\t";
	std::cin >> name;
	std::cout << "donne le numero:\t";
	std::cin >> numero;
	std::cout << "donne l'email:\t";
	std::cin >> email;
}
void contact::show()
{
	std::cout << "le nom:\t" << name << "\n";
	std::cout << "le numero:\t" << numero << "\n";
	std::cout << "l'email:\t" << email << "\n";
}
void contact::modify()
{
	int x = 0;
	std::cout << "svp choisie un de ces option\n";
	std::cout << "\t\t1:changer le numero\n\t\t2:changer le nom\n\t\t3:changer l'email\n";
	std::cin >> x;

	switch (x)
	{
	case 1:
	{
		std::cout << "donner le nouveau numero";
		std::cin >> numero;
	} break;
	case 2:
	{
		std::cout << "donner le nouveau nom";
		std::cin >> name;
	} break;
	case 3:
	{
		std::cout << "donner le nouveau email ";
		std::cin >> email;
	} break;

	default:
	{
		std::cout << "votre choix est invalide";
	}
	break;
	}
}