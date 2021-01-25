#include "Bombe.hh"
#include <math.h>
#include "Entite.hh"



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

void Bombe::modifPlayer(Joueur p){
	int PV = p.getPV(); 

	if((PV % 2) != 0) //Si la division par 2 n'est pas un entiere
		PV = floor(PV/2) + 1;  //on prend la partie entiere et on ajoute 1 
	else 
		PV = PV/2;

	//mettre les pv 
	p.setPV(PV); 

}

void Bombe::exploser(vector <Zombie> & z, Joueur p){

/*	vector <Zombie> :: iterator iter;

	modifPlayer(p);
	

//On regarde la distance entre la bombe et le zombie, et on tue les Zombie si c'est dans la portée est ok
	for(iter = z.begin(); iter != z.end(); ++iter){
		
		int distance = getDistance(p->pos, iter->pos);

		if((int)distance <= 100){
			*iter.setPV(0); //si le zombie est dans la portée on le tue 

		}
	}*/

	unsigned int i;
	modifPlayer(p);
	//munition = 0;
	for(i=0; i<z.size(); i++){
		int distance = getDistance(p.pos, z[i].pos);

		if((int)distance <= 100)
			z[i].setPV(0); //si le zombie est dans la portée on le 

	}
}

