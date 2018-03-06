#include "CarteID.h"


mCarteID::mCarteID()
{
	setID(0); //on set l'id par d�faut
}

mCarteID::~mCarteID()
{

}

int mCarteID::getID() 
{
	return ID;
}

string mCarteID::getnumsecsoc()
{
	return string(numsecsoc);
}

string mCarteID::getnom()
{
	return string(nom);
}

string mCarteID::getprenom()
{
	return string(prenom);
}

string mCarteID::getjour()
{
	return string(jour);
}

string mCarteID::getmois()
{
	return string(mois);
}

string mCarteID::getann�e()
{
	return string(ann�e);
}

string mCarteID::getprof()
{
	return string(prof);
}

void mCarteID::setID(int ID)
{
	this->ID = ID;
}

void mCarteID::setnumsecsoc(string numsecsoc)
{
	this->numsecsoc = numsecsoc;
}

void mCarteID::setnom(string nom)
{
	this->nom = nom;
}

void mCarteID::setprenom(string prenom)
{
	this->prenom = prenom;
}

void mCarteID::setjour(string jour)
{
	this->jour = jour;
}

void mCarteID::setmois(string mois)
{
	this->mois = mois;
}

void mCarteID::setann�e(string ann�e)
{
	this->ann�e = ann�e;
}

void mCarteID::setprof(string prof)
{
	this->prof = prof;
}

void mCarteID::affiche() //fonction d'affichage d'une carte
{
	cout << "ID : " << getID() << endl;
	cout << "Numero de Securite Sociale : " << getnumsecsoc() << endl;
	cout << "nom : " << getnom() << endl;
	cout << "prenom : " << getprenom() << endl;
	cout << "Jour de naissance : " << getjour() << endl;
	cout << "Mois de naissance : " << getmois() << endl;
	cout << "Annee de naissance : " << getann�e() << endl;
	cout << "Profession : " << getprof() << endl;
}

void mCarteID::suppress() //fonction de suppression d'une carte
{
	setID(0);
	setnumsecsoc("");
	setnom("");
	setprenom("");
	setjour("");
	setmois("");
	setann�e("");
	setprof("");
}
