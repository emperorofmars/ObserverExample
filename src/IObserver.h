/*
**	Author:		Martin Schwarz
**	Name:		IObserver.h
**	Project:	Observer Pattern Test
*/

#ifndef IOBSERVER_H
#define IOBSERVER_H

#include <ctime>

class IObserver{
public:
	virtual ~IObserver(){};

	virtual void refresh(time_t time) = 0;
};

#endif // IOBSERVER_H
