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
				case 0 : 
					res += " . ";
					break;
				case 2:
					res += " Z ";
			}
			
		}
		res+="\n";
	}

	return res;
}

void Arene::spawn_zombie(Zombie z){
	arene[z.getPosX()][z.getPosY()] = 2;
}


