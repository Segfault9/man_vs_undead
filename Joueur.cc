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