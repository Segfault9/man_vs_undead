#pragma once

#include<vector>
#include<string>
using namespace std;
#include "Zombie.hh"
#include "Arene.hh"
#include "Joueur.hh"

class Jeu {
	private :
		std::vector<Zombie> zombies;
		Joueur j;

	public :

	Jeu(string name); // Initialise le jeu


	~Jeu();
	void spawner(int nb_zombie);
	void spawn_joueur(Joueur j);
	Joueur getJoueur();
	void deplacerZombie(vector<Zombie> zombies, int nb_zombie);

	void print_arene();
	void test();
};
