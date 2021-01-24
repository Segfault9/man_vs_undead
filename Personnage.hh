#pragma once 

#include<vector>
#include<string>
using namespace std;
#include "Joueur.hh"

class Personnage : public Joueur {
	private :
		int damage;
		int range;

	public :
		Personnage(string name);
		Personnage(){};
		~Personnage();
		int attaque();
		int getRange();
};