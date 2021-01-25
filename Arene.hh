#pragma once 

#include<vector>
#include<string>
using namespace std;
#include "Zombie.hh"
#include "Joueur.hh"
#define size_X 16
#define size_Y 16

class Arene {
	private :
		int sizeX;
		int sizeY;
		int soin;
		int arene[size_X][size_Y];

	public :

		Arene(int x, int y);
		~Arene();
		void majJoueur(Joueur j);
		void spawn_zombie(Zombie z);
		void maj(vector <Zombie> z);
		string toString();
};