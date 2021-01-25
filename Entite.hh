#pragma once 
#include <math.h>
#include<vector>
#include<string>
using namespace std;

struct Position{
	int x;
	int y;
};

int getDistance(Position p1, Position p2);

class Entite {
	
	protected:
		
		string nom;

	public :
		Position pos;
		Position posAvant;
		Entite(string name, Position pos);
		Entite(string name);
		Entite();
		~Entite();
		void setPosition(Position position);
		Position getPosition();		
		Position getPositionAvant();

		
	
};