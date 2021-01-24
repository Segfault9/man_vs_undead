#pragma once 

#include<vector>
#include<string>
using namespace std;
#include "Arme.hh"


class Gun : public Arme {
  public:
      Gun(string name, int range, int damage, int munition);
      ~Gun();
      string toString();
      void modifPlayer(Personnage *p)
      void tirer(int degat, Zombie *z, Personnage *p);


};