#include <cmath>

#include "helpers.h"

bool IsPrime(int n)
{
	if (n < 2)
	{
		return false;
	}

	int sqrt_n = sqrt(n);

	for (int i = 2; i <= sqrt_n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

bool* EratosthenesSieve(int n)
{
	bool* is_prime = new bool[n + 1];
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i < n + 1; i++)
	{
		is_prime[i] = true;
	}

	int sqrt_n = sqrt(n);

	for (int i = 2; i <= sqrt_n; i++)
	{
		if (is_prime[i])
		{
			for (int j = i * i; j <= n; j += i)
			{
				is_prime[j] = false;
			}
		}
	}

	return is_prime;
}