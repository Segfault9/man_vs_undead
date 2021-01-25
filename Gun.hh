#pragma once 

#include<vector>
#include<string>
using namespace std;
#include "Arme.hh"
#include "Zombie.hh"
#include "Joueur.hh"

class Gun : public Arme {
  public:
      Gun(string name, int range, int damage, int munition);
      ~Gun();
      string toString();
      void modifPlayer(Joueur *p);
      //void tirer(int degat, Zombie *z, Joueur *p);
      void tirer(int degat, Zombie z, Joueur p);


};