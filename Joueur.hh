#pragma once 
#include"Entite.hh"
#include<vector>
#include<string>
using namespace std;
#include "Arme.hh"

class Joueur: public Entite {
	protected :
      string nom;
		  int PV;
      int score;
      int vie;
      int damage;
      //int range;
      //vector <Arme> armes;

	public:
  		Joueur(std::string name);
      Joueur(string name, Position pos);
      Joueur();
  		~Joueur();
      //Joueur(){};


  		int getPV(); // Renvoie le nombre de PV du zombie
  		void setPV(int pv);

  		int mort(); // Renvoie 1 si le Joueur est mort, sinon 0
      void setNom(string name);
      int getRange();
      int attaque();
  		string toString();
      int range;
      void move_up();
      void move_down();
      void move_left();
      void move_right();

};