#include <iostream>
#include <cmath>
#include <windows.h>
#include <vector>

void getDiviseurs(unsigned long int &nombre, std::vector<unsigned long int> &tab) {
	unsigned long int result_carre = sqrt(nombre);
	unsigned long int racine_arrondie = floor(result_carre);
	for (int i = 1; i <= racine_arrondie; i++) {
		if (nombre % i == 0) {
            //cout << i << endl;
            //cout << nombre / i << endl;

            tab.push_back(i);
            tab.push_back(nombre / i);
			//cout << "Le nombre " << nombre << " est un multiple de " << nombremultiples << " | Egalite : " << nombre / nombremultiples << " x " << nombremultiples << " = " << a << endl;
		}
	}
}


int main() {
	unsigned long int c;

	std::cout << "Bienvenue dans ce petit programme pour avoir les diviseurs d'un nombre... \n";
	std::cout << "Veulliez entrez un nombre :";
	while (true) {
        std::cin >> c;
        std::vector<unsigned long int>diviseurs_a;
        getDiviseurs(c, diviseurs_a);
        std::cout << "Affichage du premier nombre...\n";
        for(int i=1;i<diviseurs_a.size();i++){
            std::cout<< i << " x " << diviseurs_a[i] << std::endl;
            //cout<< i << " " << diviseurs_a[i+1] << endl;

        }
        //operation.Divise(c, d);
        //operation.~Traitement();
		std::cout << "\nVeulliez entrez un nombre :";
	}
	std::cin.ignore();
	return 0;
}
