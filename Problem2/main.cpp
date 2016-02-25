
/*
Even Fibonacci numbers
Problem 2

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <iostream>

using namespace std;

int main() {
	unsigned int fib = 1;
	unsigned int lfib = 0;
	unsigned int tfib = 0;
	unsigned long long sum = 0;
	while (fib < 4000000) {
		tfib = fib;
		fib = lfib + fib;
		lfib = tfib;
		if (fib % 2 == 0) {
			cout << fib << ", ";
			sum += fib;
		}
	}
	cout << endl << "Sum: " << sum << endl;
	return 0;
}