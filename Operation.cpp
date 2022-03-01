#include "Operation.h"
int Operation::cpt = 0;
#include<iostream>
using namespace std;
Operation::Operation(string date, double montant, string lib) :id(++Operation::cpt)
{
	this->date = date;
	this->montant = montant;
	this->lib = lib;

}

Operation::Operation() :id(++Operation::cpt)
{
	
	this->montant = 0;
	
}

Operation::~Operation()
{
	std::cout << "destructeur \n";
}
