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

int Entite::getDistance(Position p1, Position p2){

	float distance, deltaX, deltaY;

	deltaX = p1.x - p2.x;
	deltaY = p1.y - p2.y;

	distance = floor(sqrtf(pow(deltaX, 2)+pow(deltaY, 2))); //on prend la partie entiere pour caster en int apres 

	return (int) distance; 
}

