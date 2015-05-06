#include "src/Clock.h"
#include "src/ClockViewer.h"

#include <iostream>
#include <unistd.h>

int main(){
	Clock observedClock;
	ClockViewer viewer01("01", &observedClock);
	ClockViewer viewer02("02", &observedClock);
	ClockViewer viewer03("03", &observedClock);

	while(1){
		observedClock.setTime();
		std::cout << std::endl;
		sleep(1);
	}

    return 0;
}
