#include "Overlord.hh"

using namespace std;
#define PV_MAX 100

Overlord::Overlord(string name): Zombie(name), soin(20){}

Overlord::~Overlord(){}

void Overlord::soigner(Zombie z){
	if(z.getPV() < PV_MAX){
		z.setPV(getPV() + soin);
	} else {
		z.setPV(PV_MAX);
	}
}
