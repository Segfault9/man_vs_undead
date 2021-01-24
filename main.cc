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
#include <SFML/Graphics.hpp>


int main(){

    Jeu j("Robert");

    //std::cout << a.toString() << endl;

    //j.spawner(5);
   // j.spawn_joueur(j.getJoueur());


    sf::RenderWindow window(sf::VideoMode(1500, 900), "Man vs Undead");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }


    return 0;
}