#include <vector>
#include "Divisors.h"

std::vector<unsigned long long> divisors(unsigned long long number)
{
	std::vector<unsigned long long> result;
	for (unsigned long long i = 1; i <= number; ++i)
	{
		// write more fast algorithm
		if (number % i == 0)
			result.push_back(i);
	}
	return result;
}
