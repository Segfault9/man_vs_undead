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
	printf("Création zombie...\n");
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

/*void Zombie::move(int speed){
	// Déplacement aléatoire
	int val = random() % 4;
	printf("val : %d\n", val);
	switch(val){
		case 0: 
			setPosition(pos.x+speed); // Est
			break;
		case 1: 
			setPosition(pos.x-speed); // Ouest
			break;
		case 2: 
			setPosition(pos.y-speed); // Nord
			break;
		case 3: 
			setPosition(pos.y+speed); // Sud
			break;
	}
}*/