#include "race.h"
#include <iostream>

Race::Race() {
	for (int i = 0; i < NUM_HORSES; i++) {
		horses[i].init(i + 1, TRACK_LENGTH);
	} // end for
} // end Race

void Race::start() {
	bool keepGoing = true;
	while(keepGoing) {
		std::cout << "Press Enter to advance the race...";
		std::cin.get();
		for (int i =0; i < NUM_HORSES; i++) {
			horses[i].advance();
			horses[i].printLane();
			if (horses[i].isWinner()) {
				std::cout << "Horse " << (i+1) << " wins!" << std::endl;
				keepGoing = false;
			} // end if
		} // end for
	} // end while
} // end start
