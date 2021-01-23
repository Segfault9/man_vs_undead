#pragma once 

#include<string>
using namespace std;
#include "Zombie.hh"

class Overlord : public Zombie {
	private :
  		int soin;

	public:
  		Overlord(string name);
  		~Overlord();

  		void soigner(Zombie z);


};