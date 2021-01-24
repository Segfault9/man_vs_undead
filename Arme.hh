#pragma once 

#include<vector>
#include<string>
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
      ~Arme();
      string toString();
      virtual void modifPlayer(Personnage *p) const=0; 


};