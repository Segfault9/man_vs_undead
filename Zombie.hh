#pragma once 

#include<vector>
#include<string>
using namespace std;
#include "Entite.hh"


class Zombie : public Entite {
	protected :
		string nom;
  		int PV;
  		int speed;
  		int damage;
      int id;
  		static int cpt;
  		vector<Zombie> zombies;

	public:
  		Zombie(std::string name);
  		~Zombie();
      Zombie(int x, int y);
      Zombie();
  		static int nb_zombies(); // Renvoie le nombre de zombie crées

  		int getPV(); // Renvoie le nombre de PV du zombie
  		void setPV(int pv);
  		int mort(); // Renvoie 1 si le zombie est mort, sinon 0

      void move(int speed);
      
  		string toString();


};