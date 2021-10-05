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

int* EratosthenesSieve(int n)
{
	bool* is_prime = new bool[n + 1];
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= n; i++)
	{
		is_prime[i] = true;
	}

	int primes_number = 0;
	int sqrt_n = sqrt(n);

	for (int i = 2; i <= sqrt_n; i++)
	{
		if (is_prime[i])
		{
			primes_number++;
			for (int j = i * i; j <= n; j += i)
			{
				is_prime[j] = false;
			}
		}
	}
	for (int i = sqrt_n + 1; i <= n; i++)
	{
		if (is_prime[i])
		{
			primes_number++;
		}
	}

	int* primes = new int[primes_number];

	for (int i = 2, primes_count = 0; i <= n; i++)
	{
		if (is_prime[i])
		{
			primes[primes_count] = i;
			primes_count++;
		}
	}

	delete[] is_prime;
	return primes;
}