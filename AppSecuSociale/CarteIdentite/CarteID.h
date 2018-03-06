#pragma once
#include <iostream>
#include <string>

using namespace std;

class mCarteID 
{

	//données membres;
	int ID;
	string numsecsoc;
	string nom;
	string prenom;
	string jour;
	string mois;
	string année;
	string prof;

public:
	mCarteID();
	~mCarteID();

	int getID();
	string getnumsecsoc();
	string getnom();
	string getprenom();
	string getjour();
	string getmois();
	string getannée();
	string getprof();

	void setID(int ID);
	void setnumsecsoc(string NumSecSoc);
	void setnom(string nom);
	void setprenom(string prenom);
	void setjour(string jour);
	void setmois(string mois);
	void setannée(string année);
	void setprof(string prof);

	void affiche(); // fonction d'affichage d'une carte
	void suppress(); // fonction de suppression d'une carte

};
