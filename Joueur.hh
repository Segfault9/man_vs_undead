#pragma once 

#include<vector>
#include<string>
using namespace std;

#include "Arme.hh"

class Joueur {
	protected :
      string nom;
		  int PV;
      int score;
      int vie;
      vector<Arme> armes;

	public:
  		Joueur(std::string name);
  		~Joueur();


  		int getPV(); // Renvoie le nombre de PV du zombie
  		void setPV(int pv);

  		int mort(); // Renvoie 1 si le Joueur est mort, sinon 0


  		string toString();


};