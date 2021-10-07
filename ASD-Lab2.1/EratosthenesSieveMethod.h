#pragma once
#include "CalcMethod.h"

class EratosthenesSieveMethod : public CalcMethod
{
public:
	EratosthenesSieveMethod(int max_prime);

	virtual int* Execute() override;

private:
	int m_max_prime;
};