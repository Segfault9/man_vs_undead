#include "Joueur.hh"

using namespace std;
#define PV_MAX 500

Joueur::Joueur(string name, Position pos): Entite(name, pos){
  	//nom = name;
  	printf("Création du Joueur...\n");
  	PV=PV_MAX;
  	score=0;
  	vie = 5;
}


Joueur::Joueur(){
  pos.x=8;
  pos.y=8;
}


Joueur::~Joueur(){}

string Joueur::toString()
{
  	string res;
  	res = "Je m'appelle " + nom;
    
  	return res;

}


int Joueur::getPV(){
	return PV;
}

void Joueur::setPV(int pv){
	PV=pv;
}

int Joueur::mort(){
	if(PV <= 0){
		return 1;
	}
	return 0;
}

void Joueur::setNom(string name){
    nom = name; 
}

int Joueur::getRange(){
  return range;
}

int Joueur::attaque(){
  return damage;
}

void Joueur::move_up(){
  posAvant = pos; 
  Position temp;
  if(pos.y > 0){//si en faisant -speed je suis toujours dans le fenetre je me deplace
    temp.y=pos.y-1;
    temp.x=pos.x;
    setPosition(temp);
  }else{
    temp.y = pos.y;
    temp.x=pos.x;
    setPosition(temp);
  } //sinon je reste la ou je suis
}

void Joueur::move_down(){
  posAvant = pos; 
  Position temp;
  if(pos.y <= 15-1-1){//si en faisant +speed je suis toujours dans le fenetre 670 je me deplace
      printf("%d\n", pos.y);
      temp.y= pos.y + 1;
      temp.x=pos.x;
      setPosition(temp);
      printf("%d\n", pos.y);
  }else{
    temp.y = pos.y;
    temp.x=pos.x;
    setPosition(temp);
  } //sinon je reste la ou je suis
      
}

void Joueur::move_left(){
  posAvant = pos; 
  Position temp;
  if(pos.x > 0){
    temp.x =pos.x-1;
    temp.y = pos.y;
    setPosition(temp);
  }//si en faisant -speed je suis toujours dans le fenetre je me deplace
  else{
    temp.y = pos.y;
    temp.x=pos.x;
    setPosition(temp);
  } //sinon je reste la ou je suis    
}

void Joueur::move_right(){
  posAvant = pos; 
  Position temp;
  if(pos.x <= 15-1-1){//si en faisant +speed je suis toujours dans le fenetre 935 je me deplace
    temp.x =pos.x+1;
    temp.y = pos.y;
    setPosition(temp);
  }else{
    temp.y = pos.y;
    temp.x=pos.x;
    setPosition(temp);
  } //sinon je reste la ou je suis      
}

