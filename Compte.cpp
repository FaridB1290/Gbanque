#include "Compte.h"
int Compte::cpt = 0;
#include<iostream>
using namespace std;
Compte::Compte(Client prop, mad solde):numc(++Compte::cpt){}

Compte::Compte() : numc(++Compte::cpt)
{

}



bool Compte::retirer(double montant)
{
	if (this->solde >= montant) {
		this->solde = this->solde - montant;
	}
	else
	return false;
}

void Compte::deposer(double montant)
{
	this->solde = this->solde + montant;

}

void Compte::consulter() const
{
	cout << "le solde est "<< this->solde <<"\n";
	

}

bool Compte::transferer(Compte& c, double montant)
{
	if (this->retirer(montant) == true)
	{
		c.deposer(montant);
		return true;
	}
	else
	return false;
}

mad Compte::calculinteret(double interet)
{
	this->solde = this->solde -(this->solde * interet);
	return this->solde;
}

Compte::~Compte()
{
	std::cout << "destructeur de classe compte \n";
}
