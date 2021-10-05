#pragma once
#include "CalcMethod.h"

class IsPrimeMethod : public CalcMethod
{
public:
	IsPrimeMethod();
	~IsPrimeMethod();

	virtual int* method(int primes_number) override;
};