
/*
Largest prime factor
Problem 3

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

#include <iostream>
#include <stdint.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<uint64_t> nonPrimes;
vector<uint64_t> factors;

bool isInNonPrimes(uint64_t num) {
	if(find(nonPrimes.begin(), nonPrimes.end(), num) != nonPrimes.end()) {
		return true;
	}
	return false;
}

bool isPrime(uint64_t num) {
	if(isInNonPrimes(num)) {
		return false;
	} else {
		return true;
	}
}

void buildSieve(uint64_t num) {
	uint64_t i, j;
	for (j = 2; j*j <= num; ++j) {
		if(!isInNonPrimes(j)) {
			for (i = j*2; i <= num; i += j) {
				nonPrimes.push_back(i);
			}
		}
	}
}

int main()
{
	const uint64_t num = 600851475143;
	uint64_t i, s, x = 0;

	for (s = 1; (num>>s)*(num>>s) >= num; ++s) {
		;
	}
	--s;
	s = num>>s;
	cout << s << endl;
	for (i = s; i > 0; --i) {
		if(num % i == 0) {
			if(!x) {
				x = i;
			}
			factors.push_back(i);
		}
	}
	cout << "Factors calculated" << endl;
	buildSieve(x);
	cout << "Sieve calculated" << endl;
	for(auto &f : factors) {
		if(isPrime(f)) {
			cout << "Largest prime factor: " << f << endl;
			return 0;
		}
	}
	return 0;
}

