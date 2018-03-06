#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include "CarteID.h"

using namespace std;

//déclaration des fonctions
int menu();
int FindVide(mCarteID CarteID[]);

void AjouterIndividu(mCarteID CarteID[]);
void ModifierIndividu(mCarteID CarteID[]);
void SupprimerIndividu(mCarteID CarteID[]);
void AfficherIndividu(mCarteID CarteID[]);

int main() 
{
	//déclaration d'un tableau
	mCarteID CarteID[100];
	bool run = true;
	
	while (run) {

		//choix de l'action de l'utilisateur
		switch (menu()) {

		case 1: 
			AjouterIndividu(CarteID);
			break;

		case 2: 
			ModifierIndividu(CarteID);
			break;

		case 3: 
			SupprimerIndividu(CarteID);
			break;

		case 4: 
			AfficherIndividu(CarteID);
			break;

		case 0: 
			run = false;
			break;

		default: break;

		}
	}

	system("pause");

	return 0;
}

int menu() { //mise en page du menu
	int choix;

	system("cls");
	cout << "Bienvenue\n" << endl;
	cout << "1. Ajouter un profil" << endl;
	cout << "2. Modifier un profil" << endl;
	cout << "3. supprimer un profil" << endl;
	cout << "4. Afficher un profil" << endl;
	cout << "0. Quitter" << endl;
	cin >> choix;

	return choix;
}

void AjouterIndividu(mCarteID CarteID[]) { // ajout d'une nouvelle carte

	string mot;
	
	int vide = FindVide(CarteID);//On regarde si l'id de la carte n'est pas le même qu'une autre pour ne pas la remplacé et met l'id suppérieur

	system("cls");

	CarteID[vide].setID(vide);

	cin.ignore();
	cout << "Entrez votre Numero de Securite Sociale : ";
	getline(cin, mot);
	CarteID[vide].setnumsecsoc(mot);

	cout << "Entrez votre nom : ";
	getline(cin, mot);
	CarteID[vide].setnom(mot);

	cout << "Entrez votre prenom : ";
	getline(cin, mot);
	CarteID[vide].setprenom(mot);

	cout << "Entrez votre Jour de naissance : ";
	getline(cin, mot);
	CarteID[vide].setjour(mot);

	cout << "Entrez votre mois de naissance : ";
	getline(cin, mot);
	CarteID[vide].setmois(mot);

	cout << "Entrez votre annee de naissance : ";
	getline(cin, mot);
	CarteID[vide].setannée(mot);

	cout << "Entrez votre profession : ";
	getline(cin, mot);
	CarteID[vide].setprof(mot);

	cout << "\nVotre profil a ete cree avec succes\n" << endl;
	system("pause");


}

void ModifierIndividu(mCarteID CarteID[]) // modification d'une ligne de la carte
{

	int id;
	int choix;
	string mot;

	system("cls");

	cout << "Entrer l'id de votre profil : " << endl; //on cherche a savoir quelle carte l'utilisateur souhaite modifier
	cin >> id;

	if (CarteID[id].getID() == 0) {
		cout << "Cette identifiant n'existe pas" << endl; //si il entre une id de carte non existante
	}
	else {
		CarteID[id].affiche(); //on affiche la carte correspondante

		cout << "\nQue souhaitez vous modifier?\n" << endl; // on demande quelle ligne de la carte l'utilisateur souhaite modifier
		cout << "1. Numero de Securite Sociale" << endl;
		cout << "2. Nom" << endl;
		cout << "3. Prenom" << endl;
		cout << "4. Jour de naissance" << endl;
		cout << "5. Mois de naissance" << endl;
		cout << "6. Annee de naissance" << endl;
		cout << "7. Profession" << endl;
		cout << "\n0. Je ne souhaite rien modifier\n" << endl;
		cin >> choix;

		cin.ignore();

		switch (choix) { //choix de la ligne à changer

		case 1:
			cout << "Entrer le nouveau numero de securite sociale" << endl;
			getline(cin, mot);
			CarteID[id].setnumsecsoc(mot);
			break;

		case 2:
			cout << "Entrer le nouveau nom" << endl;
			getline(cin, mot);
			CarteID[id].setnom(mot);
			break;

		case 3:
			cout << "Entrer le nouveau prenom" << endl;
			getline(cin, mot);
			CarteID[id].setprenom(mot);
			break;

		case 4:
			cout << "Entrer le nouveau jour de naissance" << endl;
			getline(cin, mot);
			CarteID[id].setjour(mot);
			break;

		case 5:
			cout << "Entrer le nouveau mois de naissance" << endl;
			getline(cin, mot);
			CarteID[id].setmois(mot);
			break;

		case 6:
			cout << "Entrer la nouvelle annee de naissance" << endl;
			getline(cin, mot);
			CarteID[id].setannée(mot);
			break;

		case 7:
			cout << "Entrer la nouvelle profession" << endl;
			getline(cin, mot);
			CarteID[id].setprof(mot);
			break;

		case 0:
			cout << "Retour au menu" << endl; //si l'utilisateur ne veut plus changer de ligne
			break;

		default: break;

		}
	}
	system("pause");

}

void SupprimerIndividu(mCarteID CarteID[]) //suppression d'une carte
{

	int id;

	system("cls");

	cout << "Entrer l'id de votre profil " << endl; // on demande a l'utilisateur quelle carte il souhaite supprimer
	cin >> id;

	if (CarteID[id].getID() == 0){
		cout << "Cette id n'existe pas" << endl; // si l'id entrée n'est associée à aucune carte
	}
	else {
		CarteID[id].suppress(); //on supprime la carte
	}

	cout << "\nVotre profil a bien ete supprime\n" << endl;// on signale a l'utilisateur que sa manoeuvre a aboutis

	system("pause");

}

void AfficherIndividu(mCarteID CarteID[])// affichage d'une carte
{
	int id;

	system("cls");

	cout << "Entrer l'id de votre profil : " << endl; // on demande a l'utilisateur quelle carte il souhaite afficher
	cin >> id;
	cout << "\n" << endl;

	if (CarteID[id].getID() == 0) {
		cout << "Cette id n'existe pas" << endl;//dans le cas ou l'id n'est associée à aucune carte
	}
	else {
		CarteID[id].affiche();// affichage de la carte correspondante
	}
	cout << "\n" << endl;
	system("pause");


}

int FindVide(mCarteID CarteID[]) { //Empêche a une carte d'être remplacée par une autre lors de l'entrée d'une nouvelle carte

	int i = 1;

	while (CarteID[i].getID() != 0) { //tant que l'id n'est pas égal à 0
		i++;//on met l'id a id+1 pour que quand on rentre un nouvel utilisateur le précédent ne soit pas effacer et remplacé
	}

	return i;

}