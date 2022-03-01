#include "Ccourant.h"
#include<iostream>
using namespace std;
Ccourant::Ccourant(Client prop, mad solde, double decouvert) :Compte(prop, solde)
{
	this->decouvert = decouvert;
}

Ccourant::Ccourant()
{
	this->decouvert = 0;
}

Ccourant::~Ccourant()
{
	std::cout << "destructeur de classe compte \n";

}
