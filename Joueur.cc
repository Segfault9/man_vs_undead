#include "Joueur.hh"

using namespace std;
#define PV_MAX 100

Joueur::Joueur(string name){
  	nom = name;
  	printf("Création du Joueur...\n");
  	PV=100;
  	score=0;
  	vie = 5;
  			
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