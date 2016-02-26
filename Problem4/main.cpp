/*
Largest palindrome product
Problem 4

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include <iostream>
#include <stdint.h>

typedef uint64_t u64;
typedef uint32_t u32;

using namespace std;

bool isPal(u64 num)
{
	u32 digits[20] = {};
	int idx = -1;
	int rdx = 0;
	while (num > 0) {
		digits[++idx] = num % 10;
		num = num / 10;
	}
	while (idx > rdx) {
		if(digits[idx] != digits[rdx]) {
			return false;
		}
		--idx;
		++rdx;
	}
	return true;
}

int main()
{
	u64 a;
	u64 b;
	u64 c = 0;
	u64 d = 0;

	for(a = 999; a > 0; --a) {
		for(b = 999; b > 0; --b) {
			c = a * b;
			if(isPal(c)) {
				if(c > d) {
					cout << a << " " << b << " " << c << endl;
					d = c;
				}
			}
		}
	}
	return 0;
}

