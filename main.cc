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


int main(int argc, char *argv[]){

    //Jeu j("Robert");

   // j.test();


    sf::RenderWindow window(sf::VideoMode(1125, 900), "Man vs Undead");
    window.setFramerateLimit(60);
    Fenetre fenetre;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
       	fenetre.drawBackground(window);
        window.display();
    }


    return 0;
}