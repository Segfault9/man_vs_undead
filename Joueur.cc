#include "Joueur.hh"

using namespace std;
#define PV_MAX 500

Joueur::Joueur(string name, Position pos): Entite(name, pos){
  	//nom = name;
  	printf("Création du Joueur...\n");
  	PV=PV_MAX;
  	score=0;
  	vie = 5;
}


Joueur::Joueur(){
  pos.x=8;
  pos.y=8;
}


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
  if(pos.y > 0)//si en faisant -1 je suis toujours dans le fenetre je me deplace
    pos.y -= 1; 
  else //sinon je reste la ou je suis
    pos.y = pos.y;
}

void Joueur::move_down(){
  if(pos.y <= 899)//si en faisant +1 je suis toujours dans le fenetre je me deplace
    pos.y += 1; 
  else //sinon je reste la ou je suis
    pos.y = pos.y;
}

void Joueur::move_left(){
  if(pos.x > 0)//si en faisant -1 je suis toujours dans le fenetre je me deplace
    pos.x -= 1; 
  else //sinon je reste la ou je suis
    pos.x = pos.x;
}

void Joueur::move_right(){
  if(pos.x <= 1124)//si en faisant +1 je suis toujours dans le fenetre je me deplace
    pos.x += 1; 
  else //sinon je reste la ou je suis
    pos.x = pos.x;
  
}