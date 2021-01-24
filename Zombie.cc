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

// 
int Zombie::mort(){

	if(PV <= 0){
		return 1;
	}

	return 0;
}

//mouvement du zombie 

void Zombie::move_up(){
	if(pos.y > 0+speed)//si en faisant -speed je suis toujours dans le fenetre je me deplace
		pos.y -= speed;
  	else //sinon je reste la ou je suis
    	pos.y = pos.y;
   
}

void Zombie::move_down(){
	if(pos.y <= 899-speed)//si en faisant +speed je suis toujours dans le fenetre je me deplace
		pos.y += speed;
  	else //sinon je reste la ou je suis
    	pos.y = pos.y;
  pos.y += speed; 
}

void Zombie::move_left(){
 	if(pos.x > 0+speed)//si en faisant -speed je suis toujours dans le fenetre je me deplace
		pos.x -= speed;
  	else //sinon je reste la ou je suis
    	pos.x = pos.x; 
}

void Zombie::move_right(){
	if(pos.x <= 1124-speed)//si en faisant +speed je suis toujours dans le fenetre je me deplace
    	pos.x += speed; 
  	else //sinon je reste la ou je suis
    	pos.x = pos.x;
  pos.x += speed; 
}



