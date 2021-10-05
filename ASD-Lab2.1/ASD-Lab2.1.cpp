#include "IsPrimeMethod.h"
#include "EratosthenesSieveMethod.h"

const int PRIMES_NUMBER = 100;
const int PRIME_100 = 541;
const int ITERATIONS_NUMBER = 10000;

int main()
{
	CalcMethod* is_prime_method = new IsPrimeMethod();
	CalcMethod* eratosthenes_sieve_method = new EratosthenesSieveMethod();

	is_prime_method->ExecuteAndCalculateTime(PRIMES_NUMBER, ITERATIONS_NUMBER);
	eratosthenes_sieve_method->ExecuteAndCalculateTime(PRIME_100, ITERATIONS_NUMBER);

	std::cin.get();
}