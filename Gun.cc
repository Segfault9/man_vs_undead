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