#include <iostream>
#include "Zombie.hh"
#include "Overlord.hh"
#include "Whitewalker.hh"
#include "Arme.hh"
#include "Bombe.hh"
#include "Gun.hh"

int main(){

	Zombie z0("Fadux");
	std:: cout << z0.toString() << endl;
	Overlord z1("Seigneur zombie");
	std:: cout << z1.toString() << endl;

	Whitewalker w0("Marcheur Blanc");
	std:: cout << w0.toString() << endl;


	Bombe b0("bombe", 5, 40, 3);
	std::cout << b0.toString() << endl;

	Gun g0("Five-seven", 20, 30, 20);
	std::cout << g0.toString() << endl;
	return 0;
}