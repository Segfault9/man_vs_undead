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
	}
}

void Jeu::spawn_joueur(Joueur j){
			arene.majJoueur(j);
			std::cout << arene.toString() << endl;
}

Joueur Jeu::getJoueur(){
	return j;
}


void Jeu::deplacerZombie(vector<Zombie> z){
	move(z);
	arene.maj(z);
}


void Jeu::print_arene(){
	std::cout << arene.toString() << endl;
}

void Jeu::test(){
	spawn_joueur(j);
	spawner(1);
	print_arene();

	for(int i = 0 ; i < 10 ; i++){
		deplacerZombie(zombies);
		print_arene();
	}
}