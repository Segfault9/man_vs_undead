#include "Bombe.hh"
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