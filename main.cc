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
#include "Fenetre.hh"
#include <SFML/Graphics.hpp>
#include "Joueur.hh"
#include "Fenetre.hh"
#include "Zombie.hh"

int main(int argc, char *argv[]){

    //Jeu j("Robert");

   // j.test();
    std::string name = "Robert";
    Position pos_init; 
    pos_init.x = 0; 
    pos_init.y = 0;
    Joueur p(name, pos_init);
    
    //Joueur *pt = p;
    Gun g("gun", 2*p.range, p.damage, MUNITION_MAX);
    Bombe bomb("bomb", 100, 100, 1);


    sf::RenderWindow window(sf::VideoMode(1125, 900), "Man vs Undead");
    window.setFramerateLimit(60);
    Fenetre fenetre;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            //fenetre.command(window, event, p, g, bomb, z);
        }

        window.clear();
       	fenetre.drawBackground(window);
        window.display();
    }


    return 0;
}