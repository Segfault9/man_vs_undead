#include "Entite.hh"

Entite::Entite(string name, int x, int y){
	posX = x;
	posY = y;
	nom = name;
}

Entite::Entite(string name){
	nom = name;
}

Entite::~Entite(){}

int Entite::getPosX(){
	return posX;
}

int Entite::getPosY(){
	return posY;
}

void Entite::setPosX(int x){
	posX += x;
}

void Entite::setPosY(int y){
	posY += y;
}