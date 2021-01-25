#pragma once 
 
 
#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "Joueur.hh" 
#include "Gun.hh"
#include "Bombe.hh"
#include "Zombie.hh"
 
class Fenetre
{
public:
 
//Constructeur
	Fenetre();
 
//Fonctions
	void drawBackground(sf::RenderWindow &window);
	void command(sf::RenderWindow &window, sf::Event event, Joueur p, Gun g, Bombe b, std::vector<Zombie> & z);
 
 	//void command(sf::RenderWindow &window, sf::Event event, Joueur p, Gun g, Bombe b, Zombie z);
 
private:
 
//Background
	sf::Texture backgroundTexture, playerTexture, zombieTexture;
	sf::Sprite background, im_player, im_zombie;
 
};
