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


void Gun::tirer(int degat, Zombie *z, Personnage *p){
	int range = p.getRange(); 
	int PV = z.getPV();
	int distance = Entite::getDistance(z->pos, p->pos); 

	//si le zombie et le personnage du joueur sont assez proche le joueur peut tirer sur le zombie
	if(distance<= range){
		z.setPV(PV-degat)
	}

}

void Gun::modifPlayer(Personnage *p){
	p.range = 2;
}