#include "logic.h"

int main() {
	int day, pushup;

	cout << "input days: ";
	cin >> day;

	cout << "input pushups: ";
	cin >> pushup;

	cout << count_workout(day, pushup);
	return 0;
}