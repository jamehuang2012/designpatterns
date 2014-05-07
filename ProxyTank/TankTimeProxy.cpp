/*
 * TankTimeProxy.cpp
 *
 *  Created on: May 6, 2014
 *      Author: james
 */
#include <iostream>
#include "TankTimeProxy.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

TankTimeProxy::TankTimeProxy() {
	this->t = 0;
}

TankTimeProxy::~TankTimeProxy() {
	// TODO Auto-generated destructor stub
}

void TankTimeProxy::move() {
	cout << "start moving .... " << endl;
	srand(time(NULL));
	int iSelect = rand() % 1000 + 1;
	usleep(iSelect* 10000);
	this->t->move();
	cout << "delay ms=" << iSelect * 10 << " ...." << endl;
}


TankTimeProxy::TankTimeProxy(Moveable *t) {
	this->t = t;
}
