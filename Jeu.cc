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
	printf("Moved : deplacerZombie\n");
}


void Jeu::print_arene(Arene a){
	std::cout << a.toString() << endl;
}

void Jeu::test(){

	Position Avant;
	Avant= j.getPositionAvant();
	//printf("fonction jeu : position avant x %d y %d \n", Avant.x, Avant.y);
	Arene arene(15,15);
	spawn_joueur(j, arene);
	spawner(2);
	print_arene(arene);


	for(int i = 0 ; i < 10 ; i++){

		deplacerZombie(zombies, arene);
		//zombies[0].move(1);
		//std::cout <<zombies[0].toString();
		printf("test1\n");
		arene.maj(zombies);
		printf("test2\n");
		j.move();

		arene.majJoueur(j);		

		print_arene(arene);
		
		

		
	}
}