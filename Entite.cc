#include "Entite.hh"

Entite::Entite(string name, Entite::Position p){
	pos.x = p.x;
	pos.y = p.y;
	nom = name;
}

Entite::Entite(string name){
	nom = name;
}

Entite::~Entite(){}


Position Entite::getPosition(){
	return pos;
}

Position Entite::setPosition(Entite::Position position){
	pos.x = position.x;
	pos.y = position.y;
}