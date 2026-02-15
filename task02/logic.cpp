#include "logic.h"

string get_fibo_number(int index) {
	long long first = 0;
	long long second = 1;
	long long third = 0;
	if (index <= 0) {
		return "error";
	}

	string fibo = "0 1 "; 

	if (index == 1) {
		return "0";
	}
	if (index == 2) {
		return "1";
	}
	else {
		third = first + second;

		while (third < index) {
			fibo += to_string(third) + " ";
		
			first = second;
			second = third;
			third = first + second;
		}
		
	}
	return fibo;
}