
/*
10001st prime
Problem 7

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

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

