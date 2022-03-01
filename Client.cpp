#include "Client.h"
int Client::count = 0;

Client::Client(string nom, string prenom, string cin):id(++Client::count)
{
	this->nom = nom;
	this->prenom = prenom;
	this->cin = cin;

}

Client::Client():id(++Client::count)
{
	this->nom = nom;
	this->prenom = prenom;
	this->cin = cin;
}






Client::~Client()
{
	std::cout << "destructeur de classe client \n";

}
