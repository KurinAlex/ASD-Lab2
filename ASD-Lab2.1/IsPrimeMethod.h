#pragma once
#include "CalcMethod.h"

class IsPrimeMethod : public CalcMethod
{
public:
	IsPrimeMethod();

	virtual int* Execute(int primes_number) override;
};