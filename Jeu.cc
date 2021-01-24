#include <iostream>
#include <vector>
#include "Jeu.hh"

Arene arene(15,15);

Jeu::Jeu(string name){

	j.setNom(name);

}

Jeu::~Jeu(){}


void Jeu::spawner(int nb_zombie){
	for(int i = 0 ; i < nb_zombie ; i++){
		Zombie z;
		zombies.push_back(z); // Ajouter les zombies à la liste
		arene.maj(z); // Faire apparaître le zombie
		std::cout << arene.toString() << endl;
	}
}

void Jeu::spawn_joueur(Joueur j){
			arene.majJoueur(j);
			std::cout << arene.toString() << endl;
}

Joueur Jeu::getJoueur(){
	return j;
}