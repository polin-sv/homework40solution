#include "logic.h"

int main() {
	int number;

	cout << "input your number: ";
	cin >> number;

	cout << get_fibo_number(number);

	return 0;
}