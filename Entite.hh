#pragma once 

#include<vector>
#include<string>
using namespace std;


class Entite {
	
	protected:
		int posX;
		int posY;
		string nom;

	public :
		Entite(string name, int x, int y);
		Entite(string name);
		~Entite();

		int getPosX();
		int getPosY();
		void setPosX(int x);
		void setPosY(int y);

};