#include "Bombe.hh"
#include "Arme.hh"
#include "Entite.hh"
#include "Joueur.hh"


Arme::Arme(string n, int r, int d, int m): Entite(n){
	printf("Arme crée...\n");
    range = r;
    damage = d;
    munition = m;

};

Arme::Arme(){
	
}

Arme::~Arme(){

}


int Arme::getDamage(){
	return damage;
}
