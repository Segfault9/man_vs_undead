#pragma once 

#include<vector>
#include<string>
using namespace std;



class Arme {
  protected :
    string name;
    int range;
    int damage;
    int munition;

  public:
      Arme(string name, int range, int damage, int munition);
      ~Arme();
      string toString();


};