#pragma once

#include<vector>
#include<string>
using namespace std;
#include "Zombie.hh"
#include "Arene.hh"
#include "Personnage.hh"

Public class Jeu {
	private :
		std::vector<Zombie> zombies;
		Arene arene(int x, int y);

		Personnage p;

	public :

	Jeu(string name); // Initialise le jeu


	~Jeu();

};