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
void Arene::maj(vector<Zombie> & z){
	Position zomb, prec;

	for(unsigned int k = 0 ; k < z.size() ; k++){
		prec=z[k].getPositionAvant(); 
		printf("prec x %d y %d\n", prec.x, prec.y );
		zomb= z[k].getPosition();
		arene[prec.x][prec.y] = 0;
		printf("prev %d\n",arene[prec.x][prec.y]);
		arene[zomb.x][zomb.y] = 2;
		printf("now %d\n",arene[zomb.x][zomb.y]);
		for(int i=0; i<15; i++){
			for(int j=0; j<15; j++){
				printf("%d", arene[i][j] );

			}
			printf("\n");

		}


	}

	
	
}

void Arene::majJoueur(Joueur j){
	Position posPrec;
	posPrec.x =0;
	posPrec.y =0;
	printf("Arene x %d y %d\n", posPrec.x, posPrec.y);
	posPrec=j.getPositionAvant();
	Position pos = j.getPosition();
	printf("Arene x %d y %d\n", posPrec.x, posPrec.y);
	arene[posPrec.x][posPrec.y]=0;
	arene[pos.x][pos.y] = 1;
}


