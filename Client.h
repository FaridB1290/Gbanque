#pragma once
#include <iostream>
#include"Compte.h"
using namespace std;
class Client
{
private:
	int id;
	string nom;
	string prenom;
	string cin;
	static int count;
public:
	Client(string nom, string prenom, string cin);
	Client();
	~Client();
};

