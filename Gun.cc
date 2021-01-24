#include "Gun.hh"
using namespace std;

Gun::Gun(string name, int range, int damage, int munition): Arme(name, range, damage, munition){

}

Gun::~Gun(){

}

string Gun::toString(){
	string res;
	res = "Je suis un " + name +", munition : " + to_string(munition);
	return res;
}


void Gun::tirer(int degat, Zombie *z, Joueur *p){
	int range = p->getRange(); 
	int PV = z->getPV();
	int distance = getDistance(z->pos, p->pos); 

	//si le zombie et le Joueur du joueur sont assez proche le joueur peut tirer sur le zombie
	if(distance<= range){
		z->setPV(PV-degat);
	}

}

void Gun::modifPlayer(Joueur *p){
	p->range = 2;
}