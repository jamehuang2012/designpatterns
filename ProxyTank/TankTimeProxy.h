/*
 * TankTimeProxy.h
 *
 *  Created on: May 6, 2014
 *      Author: james
 */

#ifndef TANKTIMEPROXY_H_
#define TANKTIMEPROXY_H_
#include "Moveable.h"

class TankTimeProxy:public Moveable {
public:
	TankTimeProxy();
	TankTimeProxy(Moveable *t);
	virtual ~TankTimeProxy();
	void move();
private:
	Moveable *t;
};

#endif /* TANKTIMEPROXY_H_ */
