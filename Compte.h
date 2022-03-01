#pragma once
#include"Client.h"
#include"mad.h"

class Compte
{
private:
	int numc;
	Client prop;
	mad solde;
	static int cpt;
public:
	Compte(Client prop, mad solde);
	Compte();
	bool retirer(double montant);
	void deposer(double montant);
	void consulter() const;
	bool transferer(Compte& c, double montant);
	mad calculinteret(double interet);
	
	
	~Compte();

};

