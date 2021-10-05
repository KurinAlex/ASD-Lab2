#include "IsPrimeMethod.h"

IsPrimeMethod::IsPrimeMethod()
{
	method_name = "IsPrime";
}

IsPrimeMethod::~IsPrimeMethod()
{

}

int* IsPrimeMethod::method(int primes_number)
{
	int* primes = new int[primes_number];

	for (int p = 2, primes_count = 0; primes_count < primes_number; p++)
	{
		if (IsPrime(p))
		{
			primes[primes_count] = p;
			primes_count++;
		}
	}

	return primes;
}