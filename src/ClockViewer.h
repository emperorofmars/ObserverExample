/*
**	Author:		Martin Schwarz
**	Name:		ClockViewer.h
**	Project:	Observer Pattern Test
*/

#ifndef CLOCKVIEWER_H
#define CLOCKVIEWER_H

#include <vector>
#include <string>
#include <iostream>
#include "IObserver.h"
#include "Clock.h"

class ClockViewer : public IObserver{
public:
	ClockViewer(const std::string &name, Clock *viewedClock);
	~ClockViewer();

	void setClock(Clock *viewedClock);

	virtual void refresh();

private:
	std::string mName;
	Clock *mClock;
};

#endif // CLOCKVIEWER_H
