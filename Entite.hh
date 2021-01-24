#pragma once 

#include<vector>
#include<string>
using namespace std;

struct Position{
	int x;
	int y;
};


Public class Entite {
	
	protected:
		Position pos; 
		string nom;

	public :
		Entite(string name, int x, int y);
		Entite(string name);
		~Entite();

		Position setPosition(Entite::Position position);
		Position getPosition();
	
};