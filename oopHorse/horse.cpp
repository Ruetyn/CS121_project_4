#include "horse.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Horse::Horse() {
	position =0;
	id = 0;
	trackLength = 0;
} // end Horse

void Horse::init(int id, int trackLength) {
	this->id = id;
	this->trackLength = trackLength;
	position = 0;
} // end init

void Horse::advance() {
	position += rand() % 2;
} // end advance

void Horse::printLane() {
	for (int i = 0; i < trackLength; i++) {
		if (i == position) {
			std::cout << id;
		} else {
			std::cout << ".";
		} // end if i
	} // end for
	std::cout << std::endl;
} // end printLane

bool Horse::isWinner() {
	bool result = false;
	if (position >= trackLength - 1) {
		result = true;
	} // end if
	return result;
} // end isWinner
