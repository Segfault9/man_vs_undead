#include "Zombie.hh"

using namespace std;
#define PV_MAX 100

int Zombie::cpt = 0;

Zombie::Zombie(string name){
  	nom = name;
  	PV=100;
  	speed=1;
 	damage=20;
 	++cpt;
  			
}

Zombie::~Zombie(){
	--cpt;
}


string Zombie::toString()
{
  	string res;

    res = "Je suis le zombie n°" + to_string(nb_zombies()) + " (" + to_string(PV) + "/" + to_string(PV_MAX) + ")";
  	return res;

}

int Zombie::nb_zombies(){

		return cpt;
}

int Zombie::getPV(){
	return PV;
}

void Zombie::setPV(int pv){
	PV=pv;
}

int Zombie::mort(){

	if(PV <= 0){
		return 1;
	}

	return 0;
}