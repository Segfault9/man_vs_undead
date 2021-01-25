#include <iostream>
#include <vector>
#include "Jeu.hh"



Jeu::Jeu(string name){

	j.setNom(name);

}

Jeu::~Jeu(){}


void Jeu::spawner(int nb_zombie){
	for(int i = 0 ; i < nb_zombie ; i++){
		Zombie z;
		zombies.push_back(z); // Ajouter les zombies à la liste
	}
}

void Jeu::spawn_joueur(Joueur j, Arene a){
			a.majJoueur(j);
			std::cout << a.toString() << endl;
}

Joueur Jeu::getJoueur(){
	return j;
}


void Jeu::deplacerZombie(vector<Zombie> &z, Arene a){
	move(z);
	a.maj(z);
	//printf("Moved : deplacerZombie\n");
}

void Jeu::kill(Joueur j, vector<Zombie> & z){
	int nb_kill=0;
	for(unsigned int i=0; i<z.size(); i++){
		if(z[i].mort()){ //si mort = 1, donc mort
			nb_kill++;
		}
	}
	j.setScore(nb_kill);
}


void Jeu::print_arene(Arene a){
	std::cout << a.toString() << endl;
}

void Jeu::test(){

	//Position Avant;
	//Avant= j.getPositionAvant();
	//printf("fonction jeu : position avant x %d y %d \n", Avant.x, Avant.y);
	Arene arene(15,15);
	spawn_joueur(j, arene);
	spawner(15);
	print_arene(arene);


	for(int i = 0 ; i < 1000 ; i++){

		deplacerZombie(zombies, arene);
		//zombies[0].move(1);
		//std::cout <<zombies[0].toString();
		
		arene.maj(zombies);
		
		j.move();

		arene.majJoueur(j);		

		print_arene(arene);
		
		

		
	}
}