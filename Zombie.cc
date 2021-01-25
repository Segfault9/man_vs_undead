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


Zombie::Zombie():Entite("Zombie " + to_string(cpt)){
  cout<<"Création zombie..."<<endl;
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

    res = "Pos zombie : " + to_string(pos.x) + "," + to_string(pos.y) + ")\n";
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
   posAvant = pos; 
   Position temp;

      if(pos.x > 0+speed){//si en faisant -speed je suis toujours dans le fenetre je me deplace
        temp.y=pos.y;
        temp.x=pos.x-speed;
        setPosition(temp);
      }else{
        temp.y=pos.y;
        temp.x=pos.x;
        setPosition(temp);
      } //sinon je reste la ou je suis
}

void Zombie::move_down(){ //1
      posAvant = pos; 
      Position temp;
      if(pos.x < 15-1-speed){
        temp.x =pos.x+speed;
        temp.y = pos.y;
        setPosition(temp);
      }//si en faisant -speed je suis toujours dans le fenetre je me deplace
      else{
        temp.y = pos.y;
        temp.x=pos.x;
        setPosition(temp);
      } //sinon je reste la ou je suis    
}

void Zombie::move_left(){//2
      posAvant = pos; 
      Position temp;
      if(pos.y > 0+speed){//si en faisant +speed je suis toujours dans le fenetre 670 je me deplace
          //printf("%d\n", pos.y);
          temp.y= pos.y-speed;
          temp.x=pos.x;
          setPosition(temp);
          //printf("%d\n", pos.y);
      }else{
        temp.y = pos.y;
        temp.x=pos.x;
        setPosition(temp);
      } //sinon je reste la ou je suis
}

void Zombie::move_right(){//3
      posAvant = pos; 
      Position temp;
      if(pos.y <= 15-1-speed){//si en faisant +speed je suis toujours dans le fenetre 935 je me deplace
        temp.x =pos.x;
        temp.y = pos.y+speed;
        setPosition(temp);
      }else{
        temp.y = pos.y;
        temp.x=pos.x;
        setPosition(temp);
      } //sinon je reste la ou je suis  	
}


void move(vector<Zombie> & z){

  static std::default_random_engine _generator(std::chrono::system_clock::now().time_since_epoch().count());
  static std::uniform_int_distribution<int> _distribution(33,94);
  _distribution(_generator);
  

  for(unsigned int i=0; i<z.size(); i++){ //move aléatoire pour chaque zombie
    int rand_move = rand()%4; //0 to 3 
    //printf("rand : %d\n", rand_move);
    z[i].posAvant = z[i].pos;
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
 // }
  }
}


/*
void Zombie::move(int speed){
	// Déplacement aléatoire
	int val = random() % 4;
	Position position;
	position = getPosition();
 // printf("x : %d y : %d\n",position.x, position.y);
  //printf("%d\n", val);
	switch(val){
		case 0: 
			position.x+=speed;
			setPosition(position); // Est
     // printf("x : %d y :%d \n",position.x, position.y);
			break;
		case 1: 
			position.x-=speed;

			setPosition(position); // Ouest
     // printf("x : %d y : %d\n",position.x, position.y);
			break;
		case 2: 
			position.y-=speed;

			setPosition(position); // Nord
      //printf("x : %d y : %d\n",position.x, position.y);
			break;
		case 3: 
			position.y+=speed;

			setPosition(position); // Sud
     // printf("x : %d y :%d \n",position.x, position.y);
			break;

      default:
        break;
	}
}*/



void Zombie::attaque(Joueur *p){

  int pv = p->getPV();
  int distance = getDistance(pos, p->pos);
  if(distance<= 5){
    p->setPV(pv-damage);
  }
}

