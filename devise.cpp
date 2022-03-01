#include "devise.h"
#include<iostream>
using namespace std;

devise::devise(float solde, float x):mad(solde)
{

	this->x = x;
}

devise::devise()
{
	this->x = 0;
}

devise::~devise()
{
	std::cout << "destructeur de classe devise \n";
}
