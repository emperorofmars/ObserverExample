/*
**	Author:		Martin Schwarz
**	Name:		ClockViewer.h
**	Project:	Observer Pattern Test
*/

#ifndef CLOCKVIEWER_H
#define CLOCKVIEWER_H

#include <vector>
#include <string>
#include "IObserver.h"
#include "Clock.h"

class ClockViewer : public IObserver{
public:
	ClockViewer();
	~ClockViewer();

	virtual void refresh();

	void setup(std::string name);

private:
	void setClock(Clock* clock);

	std::string mName;
	Clock *mClock;

	friend Clock;
};

#endif // CLOCKVIEWER_H
