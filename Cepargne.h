#pragma once
#include "Compte.h"
#include<iostream>
using namespace std;
class Cepargne :
    public Compte
{
private:
    double interet;
public:
        Cepargne(Client prop, mad solde, double interet);
        Cepargne();
        void miseajour(Cepargne &c);
        ~Cepargne();
};

