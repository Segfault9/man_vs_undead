#include <iostream>
#include "Zombie.hh"
#include "Overlord.hh"
#include "Whitewalker.hh"
#include "Arme.hh"
#include "Bombe.hh"
#include "Gun.hh"
#include "Joueur.hh"
#include "Arene.hh"
#include "Entite.hh"
#include "Jeu.hh"


int main(){

    Jeu j("Robert");

    //std::cout << a.toString() << endl;

    j.spawner(5);
    j.spawn_joueur(j.getJoueur());

    return 0;
}