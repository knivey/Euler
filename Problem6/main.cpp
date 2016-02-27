
/*
Sum square difference
Problem 6

The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>
#include <stdint.h>

typedef uint64_t u64;
typedef uint32_t u32;

using namespace std;

int main()
{
	u64 a, b = 0, c = 0;
	for (a = 1; a <= 100; ++a) {
		b += a;
		c += a * a;
	}
	a = b * b;
	cout <<	a - c << endl;
	return 0;
}

