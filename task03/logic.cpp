#include "logic.h"

long long get_tribo_number(int index) {
	long long first = 0;
	long long second = 0;
	long long third = 1;
	long long fourth = 0;
	if (index <= 0) {
		return -1;
	}

	if (index == 1 || index == 2) {
		return 0;
	}
	if (index == 3) {
		return 1;
	}
	else {

		for (int i = 4; i <= index; i++) {

			fourth = first + second + third;
			first = second;
			second = third;
			third = fourth;

		}
	}
	return fourth;
}