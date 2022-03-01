#pragma once
#include "Compte.h"
#include<iostream>
using namespace std;
class Ccourant :
    public Compte
{
private:
    double decouvert;
public:
    Ccourant(Client prop, mad solde, double decouvert);
    Ccourant();
    ~Ccourant();

};

