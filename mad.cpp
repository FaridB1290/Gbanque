#include "mad.h"
#include<iostream>
using namespace std;

mad::mad(float solde)
{
	this->solde = solde;
}

mad::mad()
{
	this->solde = solde;
}

bool mad::operator>=(const mad& m) const
{
	if (this->solde > m.solde)
	{
		return true;
	}
	else
	return false;
}

mad& mad::operator-(const mad& m) const
{
	mad* res = new mad();
	res->solde = this->solde - m.solde;
	return *res;

	
}

mad& mad::operator+(const mad& m) const
{
	mad* res = new mad();
	res->solde = this->solde + m.solde;
	return *res;

}

mad& mad::operator*(const mad& m) const
{
	mad* res = new mad();
	res->solde = this->solde * m.solde;
	return *res;
	
}

mad::~mad()
{
	std::cout << "destructeur de classe mad\n";
 }
