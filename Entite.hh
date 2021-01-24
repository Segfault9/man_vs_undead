#pragma once 

#include<vector>
#include<string>
using namespace std;

struct Position{
	int x;
	int y;
};


class Entite {
	
	protected:
		Position pos; 
		string nom;

	public :
		Entite(string name, int x, int y);
		Entite(string name);
		~Entite();

		Position setPosition(Entite::Position position);
		Position getPosition();
		int getDistance(Position p1, Position p2)
	
};