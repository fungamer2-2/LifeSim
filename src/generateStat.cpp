#include <random>

#include "../headers/src/generateStat.h"

short int lsim::generateStat(float multiplier, short int bonus) {
	// returns average of two random numbers to achieve a distribution somewhat centralized around 50-60
	short int x = rand() % 100;
	short int yRange = rand() % 10 + 15;
	short int y = rand() % (100 - 2 * yRange) + yRange;
	short int result = (x + y) / 2 * multiplier;
	result += bonus;
	if (result > 100) {
		result = 100;
	} else if (result < 0) {
		result = 0;
	}
	short int offset = 0;
	if ((x + y) / 2 * multiplier > 40 and (x + y) / 2 * multiplier < 60) {
		offset = rand() % 14 - 7;
	}
	
	return result + offset;
}