#include "Zombie.hh"
#include <cstdlib>
#include <time.h>
#include <stdlib.h>

using namespace std;
#define PV_MAX 100

int Zombie::cpt = 0;

Zombie::Zombie(string name, Position pos): Entite(name, pos){
  	PV=PV_MAX;
  	speed=1;
 	damage=20;
 	id = cpt;
 	++cpt;
  			
}

Zombie::Zombie(string name): Entite(name){
  	PV=PV_MAX;
  	speed=1;
 	damage=20;
 	id = cpt;
 	++cpt;
  			
}

/*Zombie::Zombie(string name, int x, int y):Entite("Zombie " + to_string(cpt), pos.x, pos.y){
  			
}*/

Zombie::Zombie():Entite("Zombie " + to_string(cpt)){
  	PV=PV_MAX;
  	speed=1;
 	damage=20;
 	id = cpt;
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

void Zombie::move_up(){
  pos.x -= speed; 
}

void Zombie::move_down(){
  pos.x += speed; 
}

void Zombie::move_left(){
  pos.x -= speed; 
}

void Zombie::move_right(){
  pos.x += speed; 
}

