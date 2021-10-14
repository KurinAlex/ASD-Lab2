#include "EratosthenesSieveMethod.h"

EratosthenesSieveMethod::EratosthenesSieveMethod(int max_prime)
{
	method_name = "������ ����������";
	m_max_prime = max_prime;
}

int* EratosthenesSieveMethod::Execute()
{
	return EratosthenesSieve(m_max_prime);
}