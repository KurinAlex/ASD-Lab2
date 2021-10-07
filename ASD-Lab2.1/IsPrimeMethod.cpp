#include "IsPrimeMethod.h"

IsPrimeMethod::IsPrimeMethod(int primes_number)
{
	method_name = "IsPrime";
	m_primes_number = primes_number;
}

int* IsPrimeMethod::Execute()
{
	int* primes = new int[m_primes_number];

	for (int p = 2, primes_count = 0; primes_count < m_primes_number; p++)
	{
		if (IsPrime(p))
		{
			primes[primes_count] = p;
			primes_count++;
		}
	}

	return primes;
}