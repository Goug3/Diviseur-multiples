#include <iostream>
#include <cmath>
#include <windows.h>
#include <vector>
#include "traitement.h"

using namespace std;

Traitement::Traitement()
{
}

double Traitement::getDiviseurs(int a, double b) {
	double *bp(0);
	int *ap(0);
	ap = &a;
	bp = &b;
	if (*ap == 0 || *ap < 0) {
		cout << "Vous ne pouvez pas diviser un nombre négatif ou nul !";
		return 0;
	}
	if (*bp <= *ap || *bp == 0) {
		cout << "Attention les deux nombres ne sont pas divisibles !\n";
		cout << "Regle : Pour que " << *bp << " divise " << *ap << " il faut que " << *bp << " soit non nul et et inferieur a " << *ap << endl;
		return 0;
	}
	int result_carre = sqrt(*ap);
	int racine_arrondie = floor(result_carre);
	int racine_def = racine_arrondie;
	cout << "La racine carree arrondie du nombre " << *ap << " est " << racine_arrondie << "." << endl;
	Sleep(700);
	cout << "Calcul des diviseurs... "<< endl;
	/*
		Ancienne Idée...
		unsigned int *multiples;
		multiples = new unsigned int[racine_def];
	
	*/
	for (int nombremultiples = 1; nombremultiples <= racine_arrondie; nombremultiples++) {
		if ((a % nombremultiples) == 0) {
			cout << "Le nombre " << a << " est un multiple de " << nombremultiples << " | Egalite : "  << a / nombremultiples << " x " << nombremultiples << " = " << a << endl;
		}
	}

	return 0;
	//return 0;
}
