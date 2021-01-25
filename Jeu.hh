#pragma once

#include<vector>
#include<string>
using namespace std;
#include "Zombie.hh"
#include "Arene.hh"
#include "Entite.hh"
#include "Joueur.hh"

class Jeu {
	private :
		std::vector<Zombie> zombies;
		Joueur j;

	public :

	Jeu(string name); // Initialise le jeu


	~Jeu();
	void spawner(int nb_zombie);
	void spawn_joueur(Joueur j, Arene a);
	Joueur getJoueur();
	void deplacerZombie(vector<Zombie> &zombies, Arene a);
	void kill(Joueur j, vector<Zombie> & z);
	void print_arene(Arene a);
	void test();


};
