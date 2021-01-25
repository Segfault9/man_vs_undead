#include "Arene.hh"

Arene::Arene(int x, int y){
	printf("Création de l'arène...\n");

	sizeX=x;
	sizeY=y;

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
void Arene::maj(vector<Zombie> z){
	Position zomb, prec;

	for(unsigned int k = 0 ; k < z.size() ; k++){
		prec=z[k].getPositionAvant(); 
		zomb= z[k].getPosition();
		arene[prec.x][prec.y] = 0;
		printf("prev %d\n",arene[prec.x][prec.y]);
		arene[zomb.x][zomb.y] = 2;
		printf("now %d\n",arene[zomb.x][zomb.y]);
	}

	
	
}

void Arene::majJoueur(Joueur j){
	Position pos = j.getPosition();
	arene[pos.x][pos.y] = 1;
}


