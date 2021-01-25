#pragma once 

#include<vector>
#include<string>
using namespace std;
#include "Entite.hh"
#include <time.h>
#include <stdlib.h>
#include <ctime>
#include <chrono>
#include <iostream>
#include <random>


class Zombie : public Entite {
	protected :
		  string nom;
  		
  		int speed;
  		int damage;
      int id;
  		static int cpt;
  		vector<Zombie> zombies;

  private : 
      static std::default_random_engine _generator;
      static std::uniform_int_distribution<int> _distribution;

	public:
      int PV;
      Zombie();
  		Zombie(std::string name);
      Zombie(string name, Position pos);

  		~Zombie();
      //Zombie(string name, int x, int y);
      
  		static int nb_zombies(); // Renvoie le nombre de zombie crées

  		int getPV(); // Renvoie le nombre de PV du zombie
  		void setPV(int pv);
  		int mort(); // Renvoie 1 si le zombie est mort, sinon 0

      void move_up();
      void move_down();
      void move_left();
      void move_right();
      void move();

      
  		string toString();


};