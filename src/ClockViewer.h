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
	ClockViewer(const std::string &name);
	~ClockViewer();

	virtual void refresh(time_t time);
	void print();

private:
	std::string mName;
	time_t mTime;
};

#endif // CLOCKVIEWER_H
