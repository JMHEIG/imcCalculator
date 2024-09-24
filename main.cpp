/**
 * \file main.cpp
 * \version 1.0
 * \author Joyce Maiamba
 * \date //2018
 * \brief C code
 */
 
 // -------------------------------------------------- include files for program
#include <iostream>

// -------------------------------------------------------------------  program
using namespace std;

int main() 
{
   float poids, taille, imc;

	// Demande du poids et de la taille
	
	cout << "Entrez votre poids (en kg) : ";
	cin >> poids;
	cout << "Entrez votre taille (en metres) : ";
	cin >> taille;
	
	// Calcul de l'IMC
	imc = poids / (taille * taille);

	// Affichage de l'IMC
	cout << "Votre IMC est : " << imc << endl;

	// Interprétation de l'IMC
	if (imc < 18.5) {
		cout << "Vous avez un poids insuffisant." << endl;
	} else if (imc < 25) {
		cout << "Vous avez un poids normal." << endl;
	} else if (imc < 30) {
		cout << "Vous êtes en surpoids." << endl;
	} else {
		cout << "Vous êtes en situation d'obésité." << endl;
	}

	return EXIT_SUCCESS;
}
