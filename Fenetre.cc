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

void Fenetre::command(RenderWindow &window, Event event, Joueur p, Gun g, Bombe b, Zombie z)
{
	int d;
	switch(event.type){
		case sf::Event::Closed:
			window.close();
			break; 
		case sf::Event::KeyPressed: //regarde ce qui est entrer au clavier 
		/*fleche*/
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
                    {
                        p.move_up();
                    }
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                    {
                        p.move_right();
                    }
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
                    {
                        p.move_down();
                    }
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                    {
                        p.move_left();
                    }
                    
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
                    {
                        //b.exploser();
                    }
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
                    {
                        g.tirer(d=g.getDamage(), z, p);
                    }
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                    {
                        window.close();
                    }
                    break;

		default:
			break;
	}
                
}