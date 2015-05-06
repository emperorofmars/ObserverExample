/*
**	Author:		Martin Schwarz
**	Name:		Clock.h
**	Project:	Observer Pattern Test
*/

#ifndef CLOCK_H
#define CLOCK_H

#include <vector>
#include <ctime>
#include "IObservable.h"

class Clock : public IObservable{
public:
	Clock();
	~Clock();

	virtual void addObserver(IObserver *observer);
	virtual void removeObserver(IObserver *observer);
	virtual void messageObserver();

	void setTime();

	time_t getTime();

private:
	std::vector<IObserver *> mObservers;
	time_t mTime;
};

#endif // CLOCK_H
