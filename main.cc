#include <iostream>
#include "Zombie.hh"
#include "Overlord.hh"
#include "Whitewalker.hh"
#include "Arme.hh"
#include "Bombe.hh"
#include "Gun.hh"
#include "Joueur.hh"
#include "Personnage.hh"
#include "Arene.hh"
#include "Entite.hh"

int main(){

	Arene a(10,10);
	Zombie z(5,5);
	a.spawn_zombie(z);
	std::cout << a.toString() << endl;
	return 0;
}