#pragma once 

#include<string>
using namespace std;
#include "Zombie.hh"

class Whitewalker : public Zombie {
  private :
      int soin;

  public:
      Whitewalker(string name);
      ~Whitewalker();

      void soigner(Zombie z);


};