/*
**	Author:		Martin Schwarz
**	Name:		IObserver.h
**	Project:	Observer Pattern Test
*/

#ifndef IOBSERVER_H
#define IOBSERVER_H

class IObserver{
public:
	virtual ~IObserver(){};

	virtual void refresh() = 0;
};

#endif // IOBSERVER_H
