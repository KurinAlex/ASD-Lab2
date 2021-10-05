#include "EratosthenesSieveMethod.h"

EratosthenesSieveMethod::EratosthenesSieveMethod()
{
	method_name = "EratosthenesSieve";
}

int* EratosthenesSieveMethod::Execute(int max_prime)
{
	return EratosthenesSieve(max_prime);
}