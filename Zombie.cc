#include "Zombie.hh"
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
#include <ctime>
#include <chrono>
#include <random>

using namespace std;
#define PV_MAX 100

// obtain a seed from the system clock:
std::default_random_engine Zombie::_generator(std::chrono::system_clock::now().time_since_epoch().count());
std::uniform_int_distribution<int> Zombie::_distribution(33,94);

int Zombie::cpt = 0;

//constructeur
Zombie::Zombie(string name, Position pos): Entite(name, pos){
  	PV=PV_MAX;
  	speed=1;
 	damage=20;
 	id = cpt;
 	++cpt;
  			
}

//constructeur 
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

//destructeur
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

void Zombie::move_up(){//0
	if(pos.y > 0+speed)//si en faisant -speed je suis toujours dans le fenetre je me deplace
		pos.y -= speed;
  	else //sinon je reste la ou je suis
    	pos.y = pos.y;
   
}

void Zombie::move_down(){ //1
	if(pos.y <= 899-speed)//si en faisant +speed je suis toujours dans le fenetre je me deplace
		pos.y += speed;
  	else //sinon je reste la ou je suis
    	pos.y = pos.y;
  pos.y += speed; 
}

void Zombie::move_left(){//2
 	if(pos.x > 0+speed)//si en faisant -speed je suis toujours dans le fenetre je me deplace
		pos.x -= speed;
  	else //sinon je reste la ou je suis
    	pos.x = pos.x; 
}

void Zombie::move_right(){//3
	if(pos.x <= 1124-speed)//si en faisant +speed je suis toujours dans le fenetre je me deplace
    	pos.x += speed; 
  	else //sinon je reste la ou je suis
    	pos.x = pos.x;
  pos.x += speed; 
}

void Zombie::move(vector<Zombie> z){
  _distribution(_generator);
  

  for(unsigned int i=0; i<z.size(); i++){ //move aléatoire pour chaque zombie
    int rand_move = rand()%4; //0 to 3 

    switch(rand_move){
    case 0: // up
      z[i].move_up();
      break;

    case 1: // down 
      z[i].move_down();
      break;

    case 2: //left
      z[i].move_left();
      break;

    case 3://right
      z[i].move_right();
      break;

    default: 
      break;

    }  
  }
}



