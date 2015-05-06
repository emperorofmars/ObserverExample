/*
**	Author:		Martin Schwarz
**	Name:		ClockViewer.cpp
**	Project:	Observer Pattern Test
*/

#include "ClockViewer.h"

ClockViewer::ClockViewer(const std::string &name, Clock *viewedClock){
	mName = name;
	setClock(viewedClock);
}

ClockViewer::~ClockViewer(){
	if(mClock){
		mClock->removeObserver(this);
	}
}

void ClockViewer::setClock(Clock *viewedClock){
	mClock = viewedClock;
	if(mClock){
		mClock->addObserver(this);
	}
	return;
}

void ClockViewer::refresh(){
	if(mClock){
		time_t t = mClock->getTime();
		std::cout << "Display[ " << mName << " ]: " << ctime(&t);
	}
	else{
		std::cout << "Display[ " << mName << " ]: " << "no clock attached!";
	}
	return;
}
