#include <windows.h>

#include "IsPrimeMethod.h"
#include "EratosthenesSieveMethod.h"

const int PRIMES_NUMBER = 100;
const int PRIME_100 = 541;
const int ITERATIONS_NUMBER = 10000;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	CalcMethod* is_prime_method = new IsPrimeMethod(PRIMES_NUMBER);
	CalcMethod* eratosthenes_sieve_method = new EratosthenesSieveMethod(PRIME_100);

	is_prime_method->ExecuteAndCalculateTime(ITERATIONS_NUMBER);
	eratosthenes_sieve_method->ExecuteAndCalculateTime(ITERATIONS_NUMBER);

	std::cin.get();
}