#include "Joueur.hh"

using namespace std;
#define PV_MAX 100

Joueur::Joueur(string name, Position pos): Entite(name, pos){
  	//nom = name;
  	printf("Création du Joueur...\n");
  	PV=100;
  	score=0;
  	vie = 5;
    pos.x = 0;
    pos.y=0;
  			
}

Joueur::Joueur(){}

Joueur::~Joueur(){}

string Joueur::toString()
{
  	string res;
  	res = "Je m'appelle " + nom;
    
  	return res;

}


int Joueur::getPV(){
	return PV;
}

void Joueur::setPV(int pv){
	PV=pv;
}

int Joueur::mort(){
	if(PV <= 0){
		return 1;
	}
	return 0;
}

void Joueur::setNom(string name){
    nom = name; 
}

int Joueur::getRange(){
  return range;
}

int Joueur::attaque(){
  return damage;
}

void Joueur::move_up(){
  pos.x -= 1; 
}

void Joueur::move_down(){
  pos.x += 1; 
}

void Joueur::move_left(){
  pos.x -= 1; 
}

void Joueur::move_right(){
  pos.x += 1; 
}