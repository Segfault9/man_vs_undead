#include "Bombe.hh"
#include "Arme.hh"
#include "Entite.hh"
#include "Joueur.hh"


Arme::Arme(string n, int r, int d, int m){
	printf("Arme crée...\n");
  	name = n;
    range = r;
    damage = d;
    munition = m;

};

Arme::Arme(){
	
}

Arme::~Arme(){

}



