#pragma once 

#include<vector>
#include<string>
using namespace std;
#include "Zombie.hh"
#define size_X 10
#define size_Y 10

class Arene {
	private :
		int sizeX;
		int sizeY;
		int soin;
		int arene[size_X][size_Y];

	public :

		Arene(int x, int y);
		~Arene();

		void spawn_zombie(Zombie z);
		void maj(Zombie z);
		string toString();
};