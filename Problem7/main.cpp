
/*
Smallest multiple
Problem 5

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/

#include <iostream>
#include <stdint.h>

typedef uint64_t u64;
typedef uint32_t u32;

using namespace std;

inline bool isPrime(u64 n)
{
	u64 d;
	for(d = 2; d < n; ++d) {
		if(n % d == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	u64 n = 1;
	u64 x = 0;
	do {
		++n;
		if(isPrime(n)) {
			++x;
		}
	} while(x < 10001);
	cout << n << endl;
	return 0;
}

