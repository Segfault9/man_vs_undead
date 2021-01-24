#include "Personnage.hh"
using namespace std;

Personnage::Personnage(string name):Joueur(name){
	damage=10;
	range=1;
}

Personnage::~Personnage(){}

int Personnage::attaque(){
	return damage;
}

int Personnage::getRange(){
	return range;
}

