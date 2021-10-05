#include "IsPrimeMethod.h"
#include "EratosthenesSieveMethod.h"

const int PRIMES_NUMBER = 100;
const int ITERATIONS_NUMBER = 1000;

int main()
{
	CalcMethod* is_prime_method = new IsPrimeMethod();
	CalcMethod* eratosthenes_sieve_method = new EratosthenesSieveMethod();

	is_prime_method->OutputExecutionTime(PRIMES_NUMBER, ITERATIONS_NUMBER);
	eratosthenes_sieve_method->OutputExecutionTime(PRIMES_NUMBER, ITERATIONS_NUMBER);

	std::cin.get();
}