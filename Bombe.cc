#include "Bombe.hh"
#include <math.h>

using namespace std;

Bombe::Bombe(string name, int range, int damage, int munition): Arme(name, range, damage, munition){

}

Bombe::~Bombe(){

}

string Bombe::toString(){
	string res;
	res = "Je suis une " + name +", munition : " + to_string(munition);
	return res;
}

void exploser(vector <Zombie> z){

	vector <Zombie> :: iterator iter;
	Position pos, zomb;

	modifPlayer(p);
	
	pos = this.getPosition(); //position de la bombe

//On regarde la distance entre la bombe et le zombie, et on tue les Zombie si c'est dans la portée est ok
	for(iter = z.begin(); iter != z.end(); ++iter){
		
		int distance = Entite::getDistance(this.pos, z.pos);

		if((int)distance <= range){
			z.setPV(0); //si le zombie est dans la portée on le tue 

		}
	}
}

void modifPlayer(Personnage *p){
	int PV = p.getPV(); 

	if((PV % 2) != 0) //Si la division par 2 n'est pas un entiere
		PV = floor(PV/2) + 1;  //on prend la partie entiere et on ajoute 1 
	else 
		PV = PV/2;

	//mettre les pv 
	p.setPV(PV); 

}