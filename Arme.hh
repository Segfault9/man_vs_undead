#pragma once 

#include<vector>
#include<string>
#include "Joueur.hh"
using namespace std;

#define MUNITION_MAX 10


class Arme : public Entite {
  protected :
    string name;
    int range;
    int damage;
    int munition;

  public:
      Arme(string name, int range, int damage, int munition);
      Arme();
      ~Arme();
      string toString();
      void modifPlayer(); 
      //virtual void modifPlayer() const=0; 
      int getDamage();


};