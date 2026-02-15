#include "logic.h"

string count_workout(int day, int pushup) {

	if (day <= 0 || pushup <= 0) {
		return "Error.";
	}

	string result = "Day 1: " + to_string(pushup) + " pushups";

	for (int i = 2; i <= day; i++) {
		int pushups_per_day = i * pushup;

		result += "\nDay " + to_string(i) + ": "
			+ to_string(pushups_per_day) + " pushups";

	}

	return result;
}