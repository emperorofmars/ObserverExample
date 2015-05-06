/*
**	Author:		Martin Schwarz
**	Name:		Clock.cpp
**	Project:	Observer Pattern Test
*/

#include "Clock.h"

Clock::Clock(){
	time(&mTime);
}

Clock::~Clock(){
}

void Clock::addObserver(IObserver *observer){
	if(observer){
		for(unsigned int i = 0; i < mObservers.size(); i++){
			if(mObservers[i] == observer) return;
		}
		mObservers.push_back(observer);
	}
	return;
}

void Clock::removeObserver(IObserver *observer){
	if(observer){
		for(unsigned int i = 0; i < mObservers.size(); i++){
			if(mObservers[i] == observer){
				mObservers.erase(mObservers.begin() + i);
				break;
			}
		}
	}
	return;
}

void Clock::messageObserver(){
	for(unsigned int i = 0; i < mObservers.size(); i++){
		mObservers[i]->refresh();
	}
	return;
}

void Clock::setTime(){
	time(&mTime);
	messageObserver();
}

time_t Clock::getTime(){
	return mTime;
}







