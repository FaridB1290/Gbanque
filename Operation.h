#pragma once
#include<iostream>
using namespace std;
class Operation
{
private:
	int id;
	string date;
	double montant;
	string lib;
	static int cpt;
public:
	Operation(string date, double montant, string lib);
	Operation();
	~Operation();
};

