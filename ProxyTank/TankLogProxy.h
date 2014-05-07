/*
 * TankLogProxy.h
 *
 *  Created on: May 6, 2014
 *      Author: james
 */

#ifndef TANKLOGPROXY_H_
#define TANKLOGPROXY_H_
#include "Moveable.h"
class TankLogProxy:public Moveable {
public:
	TankLogProxy();
	TankLogProxy(Moveable *t);
	virtual ~TankLogProxy();
	void move();
private:
	Moveable *t;
};

#endif /* TANKLOGPROXY_H_ */
