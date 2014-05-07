/*
 * TankLogProxy.cpp
 *
 *  Created on: May 6, 2014
 *      Author: james
 */
#include <iostream>
#include "TankLogProxy.h"
using namespace std;

TankLogProxy::TankLogProxy() {
	this->t = 0;

}

TankLogProxy::~TankLogProxy() {

}
TankLogProxy::TankLogProxy(Moveable *t) {

	this->t = t;
}

void TankLogProxy::move() {
	cout << "start logging ...." << endl;
	t->move();
	cout << "stop logging... " << endl;
}
