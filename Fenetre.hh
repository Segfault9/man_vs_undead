#pragma once 
 
 
#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
 
 
class Fenetre
{
public:
 
//Constructeur
	Fenetre();
 
//Fonctions
	void drawBackground(sf::RenderWindow &window);
 
 
private:
 
//Background
	sf::Texture backgroundTexture, playerTexture, zombieTexture;
	sf::Sprite background, im_player, im_zombie;
 
};
