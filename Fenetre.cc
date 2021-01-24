#include "Fenetre.hh"
 
using namespace std;
using namespace sf;
 
//Constructeur
Fenetre::Fenetre()
{
//Chargement des ressources graphiques
//Chargement du background
	if (!backgroundTexture.loadFromFile("arene.jpg")){
// Erreur
		cout << "Erreur durant le chargement de l'image de background." << endl;
	}
	else
		background.setTexture(backgroundTexture);
}
 
 
//Fonctions
 
void Fenetre::drawBackground(RenderWindow &window)
{
	window.draw(background);
}