#include "race.h"
#include <cstdlib>
#include <ctime>

int main() {
	srand(time(NULL));
	
	Race race;
	race.start();

	return 0;
}
