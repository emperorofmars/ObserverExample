/*
**	Author:		Martin Schwarz
**	Name:		IObservable.h
**	Project:	Observer Pattern Test
*/

#ifndef IOBSERVABLE_H
#define IOBSERVABLE_H

#include "IObserver.h"

class IObservable{
public:
	virtual ~IObservable(){};

	virtual void addObserver(IObserver *observer) = 0;
	virtual void removeObserver(IObserver *observer) = 0;
	virtual void messageObserver() = 0;
};

#endif // IOBSERVABLE_H
