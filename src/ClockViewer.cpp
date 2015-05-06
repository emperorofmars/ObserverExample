/*
**	Author:		Martin Schwarz
**	Name:		ClockViewer.cpp
**	Project:	Observer Pattern Test
*/

#include "ClockViewer.h"

ClockViewer::ClockViewer(const std::string &name){
	mName = name;
}

ClockViewer::~ClockViewer(){
}

void ClockViewer::refresh(time_t time){
	mTime = time;
	print();
	return;
}

void ClockViewer::print(){
	std::cout << "Display[ " << mName << " ]: " << ctime(&mTime);
	return;
}
