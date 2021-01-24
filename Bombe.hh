#pragma once 

#include<vector>
#include<string>
using namespace std;
#include "Arme.hh"
#include "Zombie.hh"
#include "Joueur.hh"


class Bombe : public Arme {
  public:
      Bombe(string name, int range, int damage, int munition);
      ~Bombe();
      void exploser(vector <Zombie> z,Joueur p);
      void modifPlayer(Joueur *p);
      string toString();


};