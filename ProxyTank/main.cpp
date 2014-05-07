/*
 * main.cpp
 *
 *  Created on: May 6, 2014
 *      Author: james
 */

//#include <iostream>
using namespace std;

#include "Moveable.h"
#include "Tank.h"
#include "TankLogProxy.h"
#include "TankTimeProxy.h"

int main(void) {

	Tank *t = new Tank();
	TankLogProxy *tlp = new TankLogProxy(t);
	TankTimeProxy *ttp = new TankTimeProxy(tlp);

	Moveable *m = ttp;

	m->move();
	delete m;


	return 0;
}


