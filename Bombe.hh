#pragma once 

#include<vector>
#include<string>
using namespace std;
#include "Arme.hh"


class Bombe : public Arme {
  public:
      Bombe(string name, int range, int damage, int munition);
      ~Bombe();
      void exploser();
      void modifPlayer(Personnage *p);
      string toString();


};