/*
 * Tank.h
 *
 *  Created on: May 6, 2014
 *      Author: james
 */

#ifndef TANK_H_
#define TANK_H_

#include "Moveable.h"

class Tank : public Moveable{
public:
	Tank();
	virtual ~Tank();
	void move();
};

#endif /* TANK_H_ */
