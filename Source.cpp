#include <iostream>
#include "traitement.h"

using namespace std;

int main() {
	int c;
	double d;

	cout << "Bienvenue dans ce petit programme pour faire des divisions. \n";
	cout << "Veulliez entrez 2 nombres : ";
	while (true) {
		cin >> c;
		cin >> d;
		cout << "\nMaintenant choisissez le mode : \n";
		cout << "	1. Recuperation des diviseurs du deuxième nombre. \n";
		cout << "	2. Division.\n";
		cout << "\nEntrez le chiffre du mode :";
		int choix;
		cin >> choix;
		Traitement operation;
		if (choix == 1) {
			double diviseurs = operation.getDiviseurs(c, d);
		}
		else if (choix == 2) {
			cout << "Mode en creation...\n";
		}
		cout << "Veulliez entrez 2 nouveaux nombres : ";
	}
	system("PAUSE");
	cin.ignore();
	return 0;
}