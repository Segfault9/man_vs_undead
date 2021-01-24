#include "Arene.hh"


Arene::Arene(int x, int y){

	sizeX=x;
	sizeY=y;
	printf("Création de l'arène...\n");

	for(int i = 0 ; i < sizeX ; i++){
		for(int j = 0 ; j < sizeY ; j++){
			arene[i][j] = 0;
		}
	}
}

Arene::~Arene(){}

string Arene::toString(){
	string res;
	for(int i = 0 ; i < sizeX ; i++){
		for(int j = 0 ; j < sizeY ; j++){

			switch(arene[i][j]){
				case 0 : //joueur
					res += "J";
					break;

				case 1 : //obstacle 
					res += ".";
					break;

				case 2 : //presence zombie
					res += " Z ";
					break; 

			}
			
		}
		res+="\n";
	}

	return res;
}

//place zombie dans l'arene 
void Arene::spawn_zombie(Zombie z){
	Position zomb;
	zomb= z.getPosition();
	arene[zomb.x][zomb.y] = 2;
}

//place zombie dans l'arene 
void Arene::maj(Zombie z){
	Position zomb;
	zomb= z.getPosition();
	for(int i = 0 ; i < sizeX ; i++){
		for(int j = 0 ; j < sizeY ; j++){
			if(i == zomb.x && j==zomb.y){
				arene[i][j] = 2;
			}
			
		}
	}
}


