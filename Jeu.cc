#include <iostream>
#include <vector>
#include "Jeu.hh"

Arene arene(15,15);

Jeu::Jeu(string name){

	//j.setNom(name);

	// Créer 5 zombies
	for(int i = 0 ; i < 5 ; i++){
		Zombie z;
		zombies.push_back(z); // Ajouter les zombies à la liste
		arene.maj(z); // Faire apparaître le zombie
		std::cout << arene.toString() << endl;
	}
}

Jeu::~Jeu(){}