#include <vector>
#include "Jeu.hh"

Jeu::Jeu(string name){

	p.setNom(name);

	// Créer 5 zombies
	for(int i = 0 ; i < 5 ; i++){
		Zombie z();
		//zombies.push_back(z); // Ajouter les zombies à la liste
		//arene.spawn_zombie(z); // Faire apparaître le zombie

	}
}

Jeu::~Jeu(){}