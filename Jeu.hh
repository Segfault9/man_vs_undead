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
		Joueur p;

	public :

	Jeu(string name); // Initialise le jeu


	~Jeu();

};
