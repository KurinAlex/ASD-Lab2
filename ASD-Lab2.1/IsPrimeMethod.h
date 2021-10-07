#pragma once
#include "CalcMethod.h"

class IsPrimeMethod : public CalcMethod
{
public:
	IsPrimeMethod(int primes_number);

	virtual int* Execute() override;

private:
	int m_primes_number;
};