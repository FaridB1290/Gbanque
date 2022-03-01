#include "Cepargne.h"
#include<iostream>
using namespace std;

Cepargne::Cepargne(Client prop, mad solde, double interet)
	:Compte(prop,solde)
{
	this->interet = interet;
}

Cepargne::Cepargne()
{
	this->interet = 0;
}

void Cepargne::miseajour(Cepargne &c)
{
	c.calculinteret(25/100);
	
}

Cepargne::~Cepargne()
{
	std::cout << "destructeur de classe compte epargne\n";
}
