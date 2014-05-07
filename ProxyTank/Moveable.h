/*
 * Moveable.h
 *
 *  Created on: May 6, 2014
 *      Author: james
 */

#ifndef MOVEABLE_H_
#define MOVEABLE_H_

class Moveable {
public:
	Moveable();
	virtual ~Moveable();
	virtual void move() = 0;
};

#endif /* MOVEABLE_H_ */
