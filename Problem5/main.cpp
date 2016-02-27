
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

inline bool ed20(u64 num)
{
	for(u64 i = 1; i <= 20; i++) {
		if(num % i != 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	u64 n;
	for (n = 1; !ed20(n); n++) {
		;
	}
	cout << n << endl;
	return 0;
}

