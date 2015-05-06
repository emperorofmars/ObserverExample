#include "src/Clock.h"
#include "src/ClockViewer.h"

#include <iostream>
#include <unistd.h>

int main(){
	Clock observedClock;
	ClockViewer viewer01("01");
	ClockViewer viewer02("02");

	observedClock.addObserver(&viewer01);
	observedClock.addObserver(&viewer02);

	while(1){
		observedClock.setTime();
		sleep(1);
	}

    return 0;
}
