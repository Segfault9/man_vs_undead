#include "Arene.hh"


Arene::Arene(int x, int y){
	printf("Création de l'arène...\n");

	sizeX=x;
	sizeY=y;

	for(int i = 0 ; i < sizeX ; i++){
		for(int j = 0 ; j < sizeY ; j++){
			arene[i][j] = 0;
			printf(" %d" , arene[i][j]);
		}
		printf("\n");
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
				case 1 : //joueur
					res += " J ";
					break;
				case 2 : //presence zombie
					res += " Z ";
					break; 
				default:
					res+=" E ";
					break;

			}
			
		}
		res+="\n";
	}

	return res;
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

void Arene::majJoueur(Joueur j){
	Position pos = j.getPosition();
	arene[pos.x][pos.y] = 1;
}


