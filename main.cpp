#include "src/Clock.h"
#include "src/ClockViewer.h"

#include <iostream>
#include <unistd.h>

int main(){
	Clock observedClock;
	ClockViewer viewer01("01");
	ClockViewer viewer02("02");
	ClockViewer viewer03("03");

	observedClock.addObserver(&viewer01);
	observedClock.addObserver(&viewer02);
	observedClock.addObserver(&viewer03);

	while(1){
		observedClock.setTime();
		std::cout << std::endl;
		sleep(1);
	}

    return 0;
}
